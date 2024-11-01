#include <iostream> 
#include <iomanip> 
#include <conio.h> 
#include <string.h>

/*
Relevant discoveries:

If Visual Studio is telling you that it cannot locate an executable file, that likely means that your source code did not compile.

getch() (conio.h, for consoleIO functions) is a deprecated command name;
_getch() can be used to immediately return the character inputted from the user without waiting for them to press enter.

setprecision() and fixed() are from iomanip and help to display and set floating point precision.

useful neovim search and replace:
:%s@searchString@replaceWith@gc
*/


using namespace std;

int main() {
    std::string StudentName;
    std::string StudentID;
    double StudentUnitAverage = 0.0;
    int firstSpacer = 40;
    int secondSpacer= 15;


    cout << "Student Name ";
    cin >> StudentName;
    cout << "Student ID ";
    cin >> StudentID;
    cout << "Student Average Number of Units for the last 3 semester ";
    cin >> StudentUnitAverage;


    cout << std::left << std::setw(firstSpacer) << "Student Name" << ":" << std::right << std::setw(secondSpacer) << StudentName << std::endl;
    cout << std::left << std::setw(firstSpacer) << "Student ID" << ":" << std::right << std::setw(secondSpacer) << StudentID << std::endl; 
    cout << std::left << std::setw(firstSpacer) << "Student Unit Average Per Semester" << ":" << std::right << std::setw(secondSpacer) << fixed << setprecision(1) << StudentUnitAverage << std::endl;

    return 0;
}
