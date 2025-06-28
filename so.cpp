#include <iostream>
using namespace std;

double add(double a, double b)
{
    return a + b;
}
double sub(double a, double b)
{
    return a - b;
}
double mutli(double a, double b)
{
    return a * b;
}
double div(double a, double b)
{
    return a / b;
}
double rem(int a, int b)
{
    return a % b;
}
int main()
{
    double num1, num2;
    char op;

    cout << "Enter the number:- ";
    cin >> num1;

    cout << "Enter the number:- ";
    cin >> num2;

    cout << "Enter the operator:- ";
    cin >> op;

    if(op == '+')
    {
        cout << add(num1, num2);
    }
    else if(op == '-')
    {
        cout << sub(num1, num2);
    }
    else if(op == '*')
    {
        cout << mutli(num1, num2);
    }
    else if(op == '/')
    {
        cout << div(num1, num2);
    }
    else if(op == '%')
    {
        cout << rem(num1, num2);
    }
    else
    {
        cout << "Wrong operator!!!";
    }

    return 0;
}