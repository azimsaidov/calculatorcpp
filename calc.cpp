#include <iostream>
#include <string>
#include <math.h>
using namespace std;

//building a calculator!

int main(){

double num1, num2;
char op;

//make sure that the user enters a number


cout << "Enter first number: ";
cin >> num1;

 while (cin.fail()) { // check if input is valid
        cin.clear(); // clear the error flag
        cin.ignore(10000, '\n'); // ignore the invalid input
        cout << "Invalid input. Please enter a number: ";
        cin >> num1;
    }

cout << "Enter second number: ";
cin >> num2;

 while (cin.fail()) { // check if input is valid
        cin.clear(); // clear the error flag
        cin.ignore(10000, '\n'); // ignore the invalid input
        cout << "Invalid input. Please enter a number: ";
        cin >> num1;
    }

cout << "Enter a mathematical operation: ";
cin >> op;



switch (op) {
    case '+':
        cout << num1 + num2;
        return 0;
        break;
        
    case '-':
        cout << num1 - num2;
        return 0;
        break;
        
    case '/':
        if (num2 == 0) {
            cout << "Error: division by zero";
        } else {
            cout << num1 / num2;
            return 0;
        }
        break;
    case '*':
        cout << num1 * num2;
        return 0;
        break;
    default:
        cout << "Invalid operator";
        break;
        return 1;
}

}
