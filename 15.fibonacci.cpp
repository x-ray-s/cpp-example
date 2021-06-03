// https://zh.wikipedia.org/wiki/%E6%96%90%E6%B3%A2%E9%82%A3%E5%A5%91

#include <iostream>
using namespace std;
int main () {
    int n, n1 = 0, n2 = 1, next = 0;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: " << n1 << ", " << n2 << ", ";
    int i = 2;
    while (i < n)
    {   
        
        next = n1 + n2;
        n1 = n2;
        n2 = next;
        /* code */
        
        if (i == n - 1) {
            cout << next << endl;
        } else {
            cout << next << ", ";
        }
        i++;
    }
    return 0;
    
}