#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> words;
  std::string word = "hello";

  // Add the string "hello" to the end of the vector
  words.insert(words.begin(), word);

  std::cout << words[0] << ", ";

  words.push_back("world");

  std::cout << words[1] << '\n';

  std::cout << "words size = " << words.size() << '\n';
  std::cout << "words capacity = " << words.capacity() << '\n';

  return 0;
}