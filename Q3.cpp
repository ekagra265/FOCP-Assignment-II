#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string input, reversedString;

    cout << "Enter a string: ";
    getline(cin, input);
    cout << "\nYou entered: " << input << endl;
    cout << "Length of the string: " << input.length() << endl;

    string originalString = input;

    for (int i = originalString.length() - 1; i >= 0; i--) {
        reversedString += originalString[i];
    }

    cout << "Reversed string: " << reversedString << endl;

    for (int i = 0; i < originalString.length(); i++) {
        originalString[i] = toupper(originalString[i]);
        reversedString[i] = toupper(reversedString[i]);
    }

    cout << "Uppercase original string: " << originalString << endl;
    cout << "Uppercase reversed string: " << reversedString << endl;

    if (originalString == reversedString) {
        cout << "Palindrome!" << endl;
    } else {
        cout << "Not a palindrome!" << endl;
    }

    map<char, int> frequency;
    for (char ch : input) {
        ch = tolower(ch);
        if (isalpha(ch)) {
            frequency[ch]++;
        }
    }

    cout << "\nFrequency of each character:\n";
    for (auto &entry : frequency) {
        cout << entry.first << ": " << entry.second << endl;
    }

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || 
            input[i] == 'o' || input[i] == 'u' ||
            input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || 
            input[i] == 'O' || input[i] == 'U') {
            input[i] = '*';
        }
    }

    cout << "\nString after replacing vowels with '*': " << input << endl;

    return 0;
}
