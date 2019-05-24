#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;



    cout << showpoint;
    cout << setprecision(10);

    float  sum = num1 + num2;
    cout << setw(17) << "Summation = " << sum;
    cout << endl;


    float abs = num1 - num2;
    cout <<setw(17) << "Abstraction = "<< abs;
    cout << endl;


    float mul = num1 * num2;
    cout <<setw(17)<< "Multiplication = "<< mul;
    cout << endl;

    float div = num1 / num2;
    cout <<setw(17)<< "Division = "<< div;
    cout << endl;

    float mod = num1 % num2;
    cout <<setw(17)<< "Modulas = "<<mod;

    getch();
}
