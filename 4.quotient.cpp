#include <iostream>
using namespace std;

int main () {
    int devidend, divisor;
    cout << "Enter devidend: " << endl;
    cin >> devidend;

    cout << "Enter divisor: " << endl;
    cin >> divisor;

    cout << "Quotient = " << devidend / divisor << endl;
    cout << "Remainder = " << devidend % divisor << endl;
    return 0;
}