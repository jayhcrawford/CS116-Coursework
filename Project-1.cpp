#include <iostream>
using namespace std;


double calculateAverageProjectPercentage()
{
	//declare your variables within the function
	double result;
	float project1;
	float project2;
	float project3;
	float project4;


	/*initialize your variables with numbers*/
	//getting the precentage for project 1
	cout << "Please enter the grade for Project 1 (out of 10) followed by the enter key: ";
	cin >> project1;
	//getting the precentage for project 2
	cout << "Please enter the grade for Project 2 (out of 10) followed by the enter key: ";
	cin >> project2;
	//getting the precentage for project 3
	cout << "Please enter the grade for Project 3 (out of 10) followed by the enter key: ";
	cin >> project3;
	//getting the precentage for project 4
	cout << "Please enter the grade for Project 4 (out of 10) followed by the enter key: ";
	cin >> project4;


	//calculate your return value
	//initialize result
	result = (project1 + project2 + project3 + project4) /4;

	//return your result
	return result;
}

double calculateAverageMidtermPercentage()
{
	//declare your variables within the function
	double result;
	float midterm1;
	float midterm2;

	/*initialize your variables with numbers*/
	//getting the precentage for midterm 1
	cout << "Please enter the grade for Midterm 1 (out of 40) followed by the enter key: ";
	cin >> midterm1;
	//getting the precentage for midterm 2
	cout << "Please enter the grade for Midterm 2 (out of 40) followed by the enter key: ";
	cin >> midterm2;

	//calculate your return value
	//initialize result
	result = (midterm1 + midterm2)/2;

	//return your result
	return result;
}
double calculateAverageQuizPercentage()
{
	double result;
	float quiz1;
	float quiz2;
	float quiz3;
	float quiz4;
	float quiz6;
	float quiz5;
	//initialize your variables with numbers


	cout << "Please enter the grade for Quiz 1 (out of 10) followed by the enter key: ";
	cin >> quiz1;

	cout << "Please enter the grade for Quiz 2 (out of 10) followed by the enter key: ";
	cin >> quiz2;

	cout << "Please enter the grade for Quiz 3 (out of 10) followed by the enter key: ";
	cin >> quiz3;

	cout << "Please enter the grade for Quiz 4 (out of 10) followed by the enter key: ";
	cin >> quiz4;

	cout << "Please enter the grade for Quiz 5 (out of 10) followed by the enter key: ";
	cin >> quiz5;

	cout << "Please enter the grade for Quiz 6 (out of 10) followed by the enter key: ";
	cin >> quiz6;
	//calculate your return value
	//initialize result
	result = (quiz1 + quiz2 + quiz3 + quiz4 + quiz5 + quiz6) /6;

	//return your result
	return result;
}

double calculateAverageCengageHomework()
{
	double result;
	float homework1;
	float homework2;
	float homework3;
	float homework4;
	float homework5;
	float homework6;
	float homework7;
	//initialize your variables with numbers
	cout << "Please enter the grade for Homework 1 (out of 10) followed by the enter key: ";
	cin >> homework1;

	cout << "Please enter the grade for Homework 2 (out of 10) followed by the enter key: ";
	cin >> homework2;

	cout << "Please enter the grade for Homework 3 (out of 10) followed by the enter key: ";
	cin >> homework3;

	cout << "Please enter the grade for Homework 4 (out of 10) followed by the enter key: ";
	cin >> homework4;

	cout << "Please enter the grade for Homework 5 (out of 10) followed by the enter key: ";
	cin >> homework5;

	cout << "Please enter the grade for Homework 6 (out of 10) followed by the enter key: ";
	cin >> homework6;


	cout << "Please enter the grade for Homework 7 (out of 10) followed by the enter key: ";
	cin >> homework7;
	//calculate your return value
	//initialize result
	result = (homework1 + homework2 + homework3 + homework4 + homework5 + homework6 + homework7) /7;

	//return your result
	return result;
}
double calculateGrade(double midtermsAverage, double quizesAverage, double projectsAverage, double homeworkAverage)
{
	//calulate the actual precentage
	//midterms are out of 40 and count for 40% of your grade
	double result = (midtermsAverage);
	//Quizes are out of 10 and count for 15% of your grade
	result += quizesAverage * 1.5;
	//Projects are out of 10 and count for 30% of your grade
	result += projectsAverage * 3;
	result += homeworkAverage * 1.5;
	return result;
}

int main() {
	double gradeTotal;
	double midtermAverage;
	double homeworkAverage;
	double quizesAverage;
	double projectsAverage;
	// your program starts here
	cout << "Hello, the purpose of this program is to calculate your grade precentage!\n";

	//calling functions to figure out what the values aught to be
	midtermAverage = calculateAverageMidtermPercentage();
	quizesAverage = calculateAverageQuizPercentage();
	projectsAverage = calculateAverageProjectPercentage();
	homeworkAverage = calculateAverageCengageHomework();
	gradeTotal = calculateGrade(midtermAverage, quizesAverage, projectsAverage, homeworkAverage);


	cout << "Your total grade precentage in the class is: " << gradeTotal << "%" << endl;
	return 0;

}