// NOTE: set containers only store unique elements
// std::set::insert: Inserts a new element into the set. If the element already exists in the set, it is not inserted.
// std::set::erase: Erases an element from the set.
// std::set::clear: Removes all elements from the set.
// std::set::count: Counts the number of elements with a specific value.
// std::set::find: Finds an element with a specific value.
// std::set::begin: Returns an iterator to the first element in the set.
// std::set::end: Returns an iterator to the one-past-the-end element in the set.

#include <iostream>
#include <set>

int main() {
    // Create a set and fill it with some initial values
    std::set<int> s {1, 2, 3, 4, 5};

    // Insert the value 6 into the set
    s.insert(6);

    // Erase the value 3 from the set
    s.erase(3);

    // Clear the set
    s.clear();

    // Insert some new values
    s.insert(1);
    s.insert(2);
    s.insert(3);

    // Count the number of elements with the value 2
    std::cout << "Number of elements with value 2: " << s.count(2) << '\n';

    // Find the element with the value 3
    auto it = s.find(3);
    if (it != s.end()) {
        std::cout << "Found element with value 3\n";
    } else {
        std::cout << "Did not find element with value 3\n";
    }

    // Print the contents of the set
    for (auto x : s) {
        std::cout << x << ' ';
    }
    std::cout << '\n';

    return 0;
}
