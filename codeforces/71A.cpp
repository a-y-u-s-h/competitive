#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string word;
    std::cin >> word;
    /*r
      ======================================
        Words that are too long (their length
        is strictly more than 10 characters),
        should be replaced with a special
        appreviation. We write the first and
        last letters of the word and between
        them we write the number of letters
        between the first and last letters.
        The number is in decimal system and
        doesn't contain any leading zeroes.
      ======================================
    */
    if (word.size() > 10) {
      std::string answer = std::format("{}{}{}", word.front(), word.size() - 2, word.back());
      std::cout << answer << std::endl;
    } else {
      std::cout << word << std::endl;
    }
  }
  return 0;
}
