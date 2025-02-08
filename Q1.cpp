#include <iostream>
using namespace std;

int main() {
    int n, i, l, k;
    cout << "Enter an integer: ";
    cin >> n;

    // 1) Check if n is prime or not
    if (n <= 1) {
        cout << "Input a valid number greater than 1\n";
    } else {
        for (i = 2; i * i <= n; i++) {  // Only check up to √n 
            if (n % i == 0) {
                cout << n << " --> Not prime\n";
                cout << "# Factors of " << n << " are:\n";
                break;
            }
        }
        if (i * i > n) {
            cout << n << " --> Prime\n";
        }
    }

    // 2) Print factors if n is not prime
    if (i * i <= n) {
        for (int j = 1; j <= n; j++) {  
            if (n % j == 0) {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    // 3) Find the next prime number if n is prime
    if (i * i > n) {
        for (k = n + 1;; k++) {  
            for (l = 2; l * l <= k; l++) {  
                if (k % l == 0) {
                    break;
                }
            }
            if (l * l > k) {
                cout << "Next prime number is " << k << "\n";
                break;
            }
        }
    }

    return 0;
}
