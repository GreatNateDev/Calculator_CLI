#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int var = 1;
    while (var == 1) {
        int num1;
        int num2;
        char op;
        cout << "*****Calculator*****" << endl;
        cout << "First Number:" << endl;
        cin >> num1;
        cout << "Operator:" << endl;
        cin >> op;
        cout << "Second Number:" << endl;
        cin >> num2;
        if (op == '+') {
            cout << num1 + num2 << endl;
            cout << "********************";
            system("timeout /t 2");
            system("cls");
        }
        else if (op == '-') {
            cout << num1 - num2 << endl;
            cout << "********************";
            system("timeout /t 2");
            system("cls");
        }
        else if (op == '*') {
            cout << num1 * num2 << endl;
            cout << "********************";
            system("timeout /t 2");
            system("cls");
        }
        else if (op == '/') {
            cout << num1 / num2 << endl;
            cout << "********************";
            system("timeout /t 2");
            system("cls");
        }

    }
}

