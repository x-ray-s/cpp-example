#include <iostream>
using namespace std;

int main() {
    int a = 100;
    int b = 200;
    int temp;
    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = b;
    b = a;
    a = temp;

    cout << "After swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}