// C++17
#include <bits/stdc++.h>
using namespace std;

string gcdOfStrings(const string& str1, const string& str2) {
    // if concatenations differ, no gcd string exists
    if (str1 + str2 != str2 + str1) return "";

    // gcd of lengths
    int g = std::gcd((int)str1.size(), (int)str2.size());
    return str1.substr(0, g);
}

// Example usage
int main() {
    cout << gcdOfStrings("ABCABC", "ABC") << '\n'; // "ABC"
    cout << (gcdOfStrings("ABABAB", "ABAB") == "AB" ? "OK\n" : "NO\n");
    cout << (gcdOfStrings("LEET", "CODE").empty() ? "empty\n" : "non-empty\n");
    return 0;
}
