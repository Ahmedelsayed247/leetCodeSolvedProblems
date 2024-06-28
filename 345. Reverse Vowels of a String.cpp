#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;
bool vowels(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

string reverseVowels(string s) {
    int n = s.size();
    int p1 = 0, p2 = n - 1;

    while (p1 < p2) {
        while (p1 < p2 && !vowels(s[p1])) {
            p1++;
        }

        while (p1 < p2 && !vowels(s[p2])) {
            p2--;
        }

        if (p1 < p2) {
            swap(s[p1], s[p2]);
            p1++;
            p2--;
        }
    }

    return s;
}

int main() {
    string input = "leetcode";
    cout <<reverseVowels(input);


    return 0;
}
