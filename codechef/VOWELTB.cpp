#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  char C;
  std::cin >> C;
  /*
    ======================================
      Write a program to take a character C
      as input and check whether the given
      character is a vowel or a consonant.
    ======================================
  */
  std::vector<char> vowels = { 'A', 'E', 'I', 'O', 'U' };
  bool condition = std::find(std::begin(vowels), std::end(vowels), C) != std::end(vowels);
  std::cout << (condition ? "Vowel" : "Consonant") << std::endl;
  return 0;
}
