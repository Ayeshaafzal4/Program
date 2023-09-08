Title: Operaters in cpp
#include <iostream>
using nameplace std;
int main()
{
	int a = 20;
	int b = 10;
        	// Arithmetic Operators
	cout << "Result of Arithmatic Operators are " << endl;
	cout << "Addition of a and b is " << a + b << end;
	cout << "Subtraction of a and b is "<< a - b << endl;
	cout << "Multiplication of a and b is " a * b << endl;
	cout << "Division of a over b is" a / b << endl;
	cout << "Modulus of a over b is " a % b << endl;
	cout << "Increase the value of a variable by 1 using post increment " << a++ << endl;
	cout << "Increase the value of a variable by 1 using per increment " << ++a << endl;
	cout << "Decrease the value of a variable b 1 using post increment" << b-- << endl;
	cout << "Decrease the value of a variable by 1 using pre increment" << --b << endl;
	cout << "*******" << endl;
	       //Assignment Operators
	cout << "Result of Assignment and Compound Assignment Operators are" << endl;
	int marks = 10;
	cout << "The marks are " << marks << endl;
	      //Compound Assignment or Additional Assignment Operators 
    marks +=10;
    marks -=2;
    marks *=2;
    marks /=2;
    marks %=2;
          // Comparision Operators
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a >= b) << endl;
    cout << (a !=b) << endl;
    cout << (a ==b) << endl;
        // Logical Operators
    bool isStudent = true;
    bool isGirl = true;
    cout <<"******" << endl;
    cout <<"Result of Logical Operators are " << endl;
    cout << (isStudent && isGirl) << endl;
    cout << (isStudent || isGirl) << endl;
    cout << !(isStudent) << endl;
    return 0;
} 