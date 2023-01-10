#include <bits/stdc++.h>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    int counts[26] = {0};
    int n = magazine.size();
    int m = ransomNote.size();
    
    for (int i = 0; i < n; i++)
        counts[magazine[i] - 'a']++; // storing all letters in magazine
    for (int i = 0; i < m; i++) {
        counts[ransomNote[i] - 'a']--; // using letters from magazine
        if (counts[ransomNote[i] - 'a'] < 0)
            return false;
    }
    return true;
}

int main()
{
    canConstruct("abcd", "bacdz") ? cout << "true\n" : cout << "false\n";

    return 0;
}
