#include <bits/stdc++.h>

using namespace std;

struct Person {
    int age;
    string name;
};

bool compare(Person a, Person b) {
    return a.age > b.age;
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(2);
    v.push_back(5);
    v.push_back(3);

    cout << "Initial:\n";
    for (int i: v) cout << i << ' ';
    cout << '\n';

    cout << "\nAscending sort:\n";
    sort(v.begin(), v.end());
    for (int i: v) cout << i << ' ';
    cout << '\n';

    cout << "\nInitial:\n";
    vector<Person> people = {{25, "Lawliet"}, {26, "Light"}, {40, "Ryuk"}};
    for (auto i: people) {
        cout << i.age << " = " << i.name << '\n';
    }

    cout << "\nDescending sort:\n";
    sort(people.begin(), people.end(), compare); // compare for descending order
    for (auto i: people) {
        cout << i.age << " = " << i.name << '\n';
    }
}
