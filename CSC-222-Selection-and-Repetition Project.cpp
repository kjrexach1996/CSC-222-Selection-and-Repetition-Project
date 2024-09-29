// This program mimics the functions of a calculator to perform operations between two integers,
// using a switch statement instead of nested if statements.

#include <iostream>
using namespace std;

int main()
{
    bool in_use = true;
    double operand_1, operand_2;
    char operation;
    double result;
    char answer;

    cout << "Welcome! This program performs an operation between two integers." << endl;
    while (in_use)
    {
        cout << "Please enter the first integer: ";
        cin >> operand_1;
        cout << "Please enter the second integer: ";
        cin >> operand_2;
        cout << "Please enter the operation to be performed between these integers [+|-|*|/]: ";
        cin >> operation;

        while (operation != '+' && operation != '-' && operation != '*' && operation != '/')
        {
            cout << "ERROR: Invalid input!" << endl;
            cout << "Please enter the operation to be performed between these integers [+|-|*|/]: ";
            cin >> operation;
        }
        switch (operation)
        {
        case '+':
            result = operand_1 + operand_2;
            break;
        case '-':
            result = operand_1 - operand_2;
            break;
        case '*':
            result = operand_1 * operand_2;
            break;
        case '/':
            while (operand_2 == 0)
            {
                cout << "ERROR: Cannot divide by zero!" << endl;
                cout << "Choose another denominator: ";
                cin >> operand_2;
            }
            result = operand_1 / operand_2;
        }

        cout << "Final result: " << operand_1 << " " << operation << " " << operand_2 << " = " << result << endl;

        cout << "Would you like to try again? Enter \'y\' for \"yes\" or enter any character to quit: ";
        cin >> answer;
        if (answer == 'y')
            continue;
        else
            in_use = false;

        cout << "Thank you for using my calculator! Bye!";
        return 0;

    }

