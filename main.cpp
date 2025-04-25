#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "student.h"
#include "address.h"
#include "date.h"

using namespace std;


void loadStudents(vector<Student*>& students);
void showStudentNames(const vector<Student*>& students);
void printStudents(const vector<Student*>& students);
void findStudent(const vector<Student*>& students);
void deleteStudents(vector<Student*>& students);
string menu();

int main() {
    vector<Student*> students;

    loadStudents(students);  
    string choice;
    do {
        choice = menu();

        if (choice == "1") {
            showStudentNames(students);
        } else if (choice == "2") {
            printStudents(students);
        } else if (choice == "3") {
            findStudent(students);
        }

    } while (choice != "0");

    deleteStudents(students);
    return 0;
}



void loadStudents(vector<Student*>& students) {
    ifstream file("student.csv");
    string line;

    while (getline(file, line)) {
       if (line.empty()) continue; 
        stringstream ss(line);
        string fName, lName, street, city, state, zipStr, dobStr, gradStr, creditsStr;

        getline(ss, fName, ',');
        getline(ss, lName, ',');
        getline(ss, street, ',');
        getline(ss, city, ',');
        getline(ss, state, ',');
        getline(ss, zipStr, ',');
        getline(ss, dobStr, ',');
        getline(ss, gradStr, ',');
        getline(ss, creditsStr, ',');
	
	cout << "DEBUG: zipStr = '" << zipStr << "', creditsStr = '" << creditsStr << "'" << endl;

        int zip = stoi(zipStr);
        int credits = stoi(creditsStr);

        Address addr;
        addr.init(street, city, state, zip);

        Date dob;
        dob.init(dobStr);

        Date grad;
        grad.init(gradStr);

        Student* s = new Student(fName, lName, addr, dob, grad, credits);
        students.push_back(s);
    }

    file.close();
}

void showStudentNames(const vector<Student*>& students) {
    for (Student* s : students) {
        cout << s->getFullName() << endl;
    }
}

void printStudents(const vector<Student*>& students) {
    for (Student* s : students) {
        s->printStudent();
    }
}

void findStudent(const vector<Student*>& students) {
    cout << "last name of student: ";
    string target;
    getline(cin, target);

    for (Student* s : students) {
        if (s->getLastName().find(target) != string::npos) {
            s->printStudent();
        }
    }
}

void deleteStudents(vector<Student*>& students) {
    for (Student* s : students) {
        delete s;
    }
    students.clear();
}

string menu() {
    cout << endl;
    cout << "0) quit" << endl;
    cout << "1) print all student names" << endl;
    cout << "2) print all student data" << endl;
    cout << "3) find a student" << endl;
    cout << "\nplease choose 0-3: ";

    string choice;
    getline(cin, choice);
    return choice;
}

