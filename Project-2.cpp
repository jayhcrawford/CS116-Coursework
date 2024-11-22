#include <iostream>
#include <stdio.h>


float requestAFloat(std::string name, int iter, int min, float max)
{
    //zero needs to be a valid score, -1.0 serves as a default value.
    float input = -1.0;

    while ((input == -1.0 || (input > max || input < min)))
    {
    //goto this point if input is inappropriate.
    beginning:

     std::cout << "Please Enter the grade for " << name << " " << iter << " followed by the enter key: ";
     // stores the user input in the variable input
     std::cin >> input;

     //If score outside of range, advise on appropriate range;
     if (input > max || input < min) {
         std::cout << '\n' << "You entered a value outside of the range." << std::endl;
         std::cout << "Your score for " << name << " " << iter << " should be in between " << min << " and " << max << "." << std::endl;
         std::cout << '\n';

         //reset to default value
         input = -1.0;
         goto beginning;
     }
    }
    //return the float to whoever called you
    return input;
}


double calculateAverage(std::string name, int count, int totalGrade, float extraC)
{
    double result;
    double accumulator;
    float max;
    int i;//loop iteration number
    result = 0;
    max = totalGrade * (1 + (extraC / 100));

    for (i = 1, accumulator = 0;i <= count; i += 1)
    {
        accumulator += requestAFloat(name, i, 0, max);  
    }
    result = accumulator / count;
    return result;
}

double calculateGrade(double midtermsAverage, double quizesAverage, double projectsAverage)
{
    //calulate the actual precentage
    //midterms are out of 40 and count for 40% of your grade
    double result = (midtermsAverage);
    //Quizes are out of 10 and count for 30% of your grade
    result += quizesAverage * 3;
    //Projects are out of 10 and count for 30% of your grade
    result += projectsAverage * 3;

    return result;
}

int main(void) {
    double gradeTotal;
    double midtermAverage;
    double quizesAverage;
    double projectsAverage;
    // your program starts here
    std::cout << "Hello, the purpose of this program is to calculate your grade precentage!\n";

    //calling functions to figure out what the values aught to be
    midtermAverage = calculateAverage("Midterm", 2, 40, 10);
    quizesAverage = calculateAverage("Quiz", 6, 10, 0);
    projectsAverage = calculateAverage("Project", 6, 10, 0);

    gradeTotal = calculateGrade(midtermAverage, quizesAverage, projectsAverage);

    printf("Your total grade precentage in the class is %.2f!\n", gradeTotal);

    return 0;
}