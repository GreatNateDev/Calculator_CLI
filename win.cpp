#include <iostream>
using namespace std;
double num1;
double num2;
double result;
char op;
int main() {
cout << "**********Calculator**********\n";
cout << "(+,-,*,/):";
cin >> op;
cout << "Number One:\n";
cin >> num1;
cout << "Number Two:\n";
cin >> num2;
switch (op)
{
case '+':
    result = num1 + num2;
    cout << "is: " << result;
    break;
case '-':
    result = num1 - num2;
    cout << "is: " << result;
    break;
case '*':
    result = num1 * num2;
    cout << "is: " << result;
    break;
case '/':
    result = num1 / num2;
    cout << "is: " << result;
    break;
default:
    cout << "Error: Unknown operator";
    break;
}
system("pause>nul");
cout << "\n******************************";
system("timeout /t 3>nul");
return 0;
}