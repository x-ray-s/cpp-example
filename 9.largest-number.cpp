#include <iostream>
using namespace std;

int compare (float a, float b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main () {
    float n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    int c1 = compare(n1, n2);
    int r = compare(n3, c1);

    cout << "Largest number: " << r;
    
    return 0;
}