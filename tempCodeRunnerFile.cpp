
// Mingyang Yin
// Lab 3
// Sept. 30, 2024

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    cout << setw(85) << setfill('#') << '#' << endl; // The first section of hashtags.
    cout << '#' << setw(84) << setfill(' ') << '#' << endl; // The space between the sections there is the hashtags that border the code incoprated into the code.
    cout << '#' << " Ways to access the Task Manager on your Windows computer:" << setw(26) << setfill(' ') << '#' << endl; // First line of text. 
    cout << '#' << setw(84) << setfill(' ') << '#' << endl;
    cout << '#' << "    Press the key combination Ctrl + Shift + Escape"<< setw(33) << setfill(' ') << '#' << endl; // Second line of text.
    cout << '#' << setw(84) << setfill(' ') << '#' << endl;
    cout << '#' << "    Press the key combination Ctrl + Alt + Delete and select 'Task Manager'"<< setw(9) << setfill(' ') << '#' << endl; // Third line of text.
    cout << '#' << setw(84) << setfill(' ') << '#' << endl;
    cout << '#' << "    Type “Task Manager” in the Windows Start menu search                       #"<< endl; // Last line of text.
    cout << '#' << setw(84) << setfill(' ') << '#' << endl;
    cout << setw(85) << setfill('#') << '#' << endl;

    return 0;

}
    