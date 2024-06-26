#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string S;
    std::cin >> S;

    /*
      ======================================
        Sergey recently learned about country
        codes - two letter strings, denoting
        countries. For example, BY stands for
        Belarus and IN stands for India.
        Mesmerized by his new discovery, Sergey
        now looks for country codes everywhere!

        Sergey has recently found a string S
        consisting of uppercase Latin letters.
        He wants to find the number of different
        country codes that appear in S as a
        contiguous substrings. For the purposes
        of this problem, consider that every
        2-letter uppercase string is a valid
        country code.
      ======================================
    */

    std::map<std::string, int> frequencies;
    for (auto i = std::begin(S), j = std::begin(S) + 1; i != std::end(S) && j != std::end(S); i++, j++) { frequencies[std::string() + (*i) + (*j)]++; }
    int answer = frequencies.size();
    std::cout << answer << std::endl;
  }
  return 0;
}
