// https://zh.wikipedia.org/wiki/%E6%9C%80%E5%A4%A7%E5%85%AC%E5%9B%A0%E6%95%B8
#include <iostream>
using namespace std;

// 公约数
double divisor (int a, int b) {
    int max = 0;
    for (int i = 1; i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            int common = i;
            if (common > max) {
                max = common;
            }
        }
    }
    return max;
}
// 因数
int factoring (int n) {
    int k = 1;
    while (k != n) {
        if (n % k == 0 && k != 1) {
            n = n / k;
            cout << k << " * ";
        } else {
            k++;
        }
        
    }
    cout << k << endl;

    return k;

}

int main () {
    int a, b;
    cout << "your number" << endl;
    cin >> a >> b;
    if (a < b) {
        int c = a;
        a = b;
        b = c;
    }
    int i = divisor(a, b);
    cout << i << endl;
    cout << "your number" << endl;
    int n;
    cin >> n;
    int j = factoring(n);
}