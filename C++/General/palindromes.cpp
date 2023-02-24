#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s) {

    int mid = s.size() / 2 - 1;
    int n = s.size()-1;
    for (int i = 0; i < mid; ++i)
    {
        if (s[i] != s[n-i])
            return false;
    }

    return true;
}

int main() {

    string s = "heloworld";
    string t = "racecar";

    (isPalindrome(s)) ? cout << s << " is a palindrome.\n" : cout << s << " is not a palindrome.\n";
    (isPalindrome(t)) ? cout << t << " is a palindrome.\n" : cout << t << " is not a palindrome.\n";
}