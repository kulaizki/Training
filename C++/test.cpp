#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

bool scramble(const string& s1, const string & s2) {
    unordered_map<char, int> h1;
    unordered_map<char, int> h2;

    for (int i: s1) h1[i]++;
    for (int i: s2) h2[i]++;
    for (const auto& [key, value] : h2) {
        if (h1[key] < value) { return false; };
    }
    return true;
}

int main() {
    scramble("rkqodlw", "world") ? cout << "true\n" : cout << "false\n";
    scramble("cedewaraaossoqqyt", "codewars") ? cout << "true\n" :  cout << "false\n";
}