#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {

    std::string text;
    std::map<char, int> prices, frequencies;

    for (int i = 0; i < 26; i += 1) { int Pi; std::cin >> Pi; prices['a' + i] = Pi; frequencies['a' + i] = 0; }; std::cin >> text;
    for (auto letter : text) { frequencies[letter]++; }

    /*
      ======================================
        We're given prices of 26 letters,
        and a string (of N lowercase letters).
        We want that string to be a pangram
        (a string that contains every letter
        of the alphabet at least once) and
        in order to do so, we'll buy missing
        letters (we have their prices) to
        do it. We need to find out the
        cheapest way to obtain a pangram.

        So we'll just fing out what letters
        are missing and we'll figure out
        the price.
      ======================================
    */
    std::vector<std::pair <char, int>> missing; std::copy_if(std::begin(frequencies), std::end(frequencies), std::inserter(missing, std::end(missing)), [](auto const &f) { return f.second == 0; });
    int answer = std::accumulate(std::begin(missing), std::end(missing), 0, [prices](int &a, auto const &b) { return a + prices.at(b.first); });
    std::cout << answer << std::endl;
  }
  return 0;
}
