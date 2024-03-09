#include <iostream>
using namespace std;

int main() {

    int a;
    cout << "Enter the first number : " << endl;
    cin >> a;
    int b;
    cout << " Enter the second number : " << endl;
    cin >> b;

    cout << "Enter the opertor :" << endl;
    char ch;
    cin >> ch;
    switch (ch) {
    case'+':
        cout << "sum of two number is :" << a + b << endl;
        break;
    case'-':
        cout << "the subtraction a-b : " << a - b << endl;
        break;
    case'*':
        cout << "the multiplication of  a*b : " << a * b << endl;
        break;
    case'/':
        cout << "the division of  a/b : " << a / b << endl;
        break;
    default:
        cout << "this case is deafault case " << endl;
    }

}