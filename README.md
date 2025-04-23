**Heap of Students part 1** 

First, we tell the computer what compiler we’re using.

We're using g++, which is the standard C++ compiler. That’s what the CXX = g++ line means.

Then we set up how strict we want the compiler to be.

The line CXXFLAGS = -Wall -std=c++11 means we want all warnings to show up (that’s the -Wall) and we want to use the C++11 version of the language.

Next, we list all the C++ files we’re working with.

That’s what SRC = main.cpp address.cpp date.cpp student.cpp is doing — it’s saying "hey, these are all the code files I need to build the program."

We also tell it to make .o files from those source files.

So it converts each .cpp into a .o file, which is like a halfway-compiled version. That’s what OBJ = $(SRC:.cpp=.o) does.

We give the program a name.

That’s EXEC = student_data, so when everything is compiled and ready, the program you run will be called student_data.

The all rule builds everything.

The all: $(EXEC) line tells the make system that the goal is to make that final program using all the object files.

Then it says how to actually build the program.

The $(EXEC): $(OBJ) part is saying “link all the object files together and make the final program.” It uses g++ with the same flags to do that.

The %.o: %.cpp line tells how to make each object file from its matching source file.

It’s like saying, “every time you see a .cpp file, compile it into a .o using the flags we set.”

