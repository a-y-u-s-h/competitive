#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  std::cin.ignore(1, '\n');

  for (int t = 0 ; t < T; t += 1) {
    std::string S;
    std::getline(std::cin, S, '\n');
    /*
      ======================================
        Given a string S consisting only of
        lowercase and uppercase English letters
        and spaces, your task is to convert it
        into title case. In title case, the first
        letter of each word is capitalized while
        the rest are in lowercase, except for
        words that are entirely in uppercacse
        (considered as acronyms) which should
        remain unchanged.
      ======================================
    */
     std::stringstream data (S);
     std::vector<std::string> words;
     std::string word;
     while (data >> word) {
      if (!std::all_of(std::begin(word), std::end(word), [](auto const &c) { return std::isupper(c); })) {
        std::transform(std::begin(word), std::end(word), std::begin(word), [](auto const &c) { return std::tolower(c); });
        std::transform(std::begin(word), std::begin(word) + 1, std::begin(word), [](auto const &c) { return std::toupper(c); });
      }
      words.push_back(word);
    }
     for (auto i : words) { std::cout << i << " "; } std::cout << std::endl;
  }
  return 0;
}
