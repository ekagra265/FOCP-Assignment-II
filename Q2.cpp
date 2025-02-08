#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;
    cout << "Enter number of integers you want to input: ";
    cin >> num;

    if (num <= 0) {
        cout << "Invalid size. Exiting...\n";
        return 0;
    }

    vector<int> ary(num);

    // 1) Accept array from user
    cout << "Enter integers (0 to stop early):\n";
    int count = 0;
    for (int i = 0; i < num; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> ary[i];
        if (ary[i] == 0) break;
        count++;
    }

    if (count == 0) {
        cout << "No valid input. Exiting...\n";
        return 0;
    }

    // 2) Forward display
    cout << "\nForward display:\n";
    for (int i = 0; i < count; i++) {
        cout << "Element " << i + 1 << ": " << ary[i] << endl;
    }

    // 3) Reverse display
    cout << "\nReverse display:\n";
    for (int i = count - 1; i >= 0; i--) {
        cout << "Element " << i + 1 << ": " << ary[i] << endl;
    }

    // 4) Find second largest and second smallest
    int largest = ary[0], second_largest = ary[0];
    int smallest = ary[0], second_smallest = ary[0];

    for (int i = 1; i < count; i++) {
        // Largest and second largest
        if (ary[i] > largest) {
            second_largest = largest;
            largest = ary[i];
        } else if (ary[i] > second_largest && ary[i] != largest) {
            second_largest = ary[i];
        }

        // Smallest and second smallest
        if (ary[i] < smallest) {
            second_smallest = smallest;
            smallest = ary[i];
        } else if (ary[i] < second_smallest && ary[i] != smallest) {
            second_smallest = ary[i];
        }
    }

    cout << "\nLargest element: " << largest << endl;
    cout << "Second largest element: " << (second_largest == largest ? -1 : second_largest) << endl;
    cout << "Smallest element: " << smallest << endl;
    cout << "Second smallest element: " << (second_smallest == smallest ? -1 : second_smallest) << endl;

    return 0;
}
