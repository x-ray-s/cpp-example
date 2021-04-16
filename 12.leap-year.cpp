#include <iostream>
#include <string>
using namespace std;


int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    bool isLeap = false;

    if (year % 4 == 0) {
        if (year % 100 == 0 && year % 400 == 0) {
            isLeap = true;
        } else {
            if (year % 100 == 0) {
                isLeap = true;
            }
        }
    }
    string str;
    if (!isLeap) {
        str = "not ";
    }
    cout << year << " is " << str << "a leap year.";

    return 0;
}