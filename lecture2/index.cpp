#include <iostream>
using namespace std;

int nextLine()
{
    cout << "This is the line 1." << endl;
    cout << "This is the line 2." << endl;
    return 0;
}

int main()
{
    cout << "Hello, World!" << endl;
    nextLine();
    return 0;
}

// #include <iostream>: package that allows us to use input and output streams, such as cout for printing to the console.
// using namespace std: allows us to use names from the standard library without prefixing them with std::, making the code cleaner and easier to read.
// cout: an object of the ostream class used to output data to the standard output stream (console).
// endl: manipulator that inserts a newline character and flushes the output buffer, ensuring that all output is displayed immediately.
