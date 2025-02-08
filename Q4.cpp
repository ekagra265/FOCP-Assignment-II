#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square array (n): ";
    cin >> n;

    int ary[n][n];
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    // Input array elements
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            cout << "Enter element (" << r + 1 << "," << c + 1 << ") : ";
            cin >> ary[r][c];
        }
    }

    cout << "\n# Input array in SPIRAL FORM\n\n";

    // Spiral form logic
    while (top <= bottom && left <= right) {
        // Print top row
        for (int i = left; i <= right; i++) {
            cout << ary[top][i] << " ";
        }
        top++;

        // Print right column
        for (int i = top; i <= bottom; i++) {
            cout << ary[i][right] << " ";
        }
        right--;

        // Print bottom row (if still within bounds)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << ary[bottom][i] << " ";
            }
            bottom--;
        }

        // Print left column (if still within bounds)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << ary[i][left] << " ";
            }
            left++;
        }
    }

    return 0;
}
