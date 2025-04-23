**Heap of Students part 1** 

Pick the compiler
I tell the computer that I'm using g++, which is what we use to turn our .cpp files into something that can actually run.

Set up compiler rules
I add some extra rules like -Wall so it shows me all the little mistakes and warnings, and I tell it to use C++11 so it understands the code I’m writing.

List all my files
I put all my .cpp files in a list. These are the files I wrote for different parts of the program—like one for the student class, one for dates, one for addresses, and the main one that runs everything.

Prepare object files
The next step is saying, “Hey, for each of those files, turn them into an object file.” These object files are like halfway to the final program they’re compiled but not all put together yet.

Name the final program
I give the finished program a name. In this case, it’s called student_data, so when it builds, that’s the file I’ll run.

Set the default thing to do
I say “when I type make with nothing else, go ahead and build that final program.” That’s what the all: part does—it just builds the program.

Put it all together
I tell it: “Once you’ve got all those object files done, combine them and make my finished program.” That’s how I get something I can actually run.

Explain how to compile each file
I add a rule that just explains how to turn a .cpp file into its .o version. It’s kind of like saying “do this same process every time you see a .cpp file.”

Make it runnable
I add a shortcut called run so if I type make run, it just runs the finished program.

Make it debuggable
I add another shortcut called debug. This lets me open the program in the debugger tool if I want to check what’s going on when it runs.

Clean up old files
Finally, I add a clean option. This is just for when I want to start fresh and delete all the files that got created from compiling. That way I don’t have old stuff getting in the way.

