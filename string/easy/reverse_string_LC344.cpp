#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
    int st = 0, end = s.size() - 1;
    while (st < end) {
        swap(s[st++], s[end--]);
    }
}

int main() {
    // Input string
    string input;
    cout << "Enter a string: ";
    cin >> input;

    // Convert string to vector<char>
    vector<char> s(input.begin(), input.end());

    // Call function
    reverseString(s);

    // Print reversed string
    cout << "Reversed string: ";
    for (char c : s) {
        cout << c;
    }
    cout << endl;

    return 0;
}