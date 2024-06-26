#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N; std::string S;
    std::cin >> N;
    std::cin >> S;
    /*
      ======================================
        Words that contain many consecutive
        consonants, like "schtschurowskia",
        are generally considered somewhat
        hard to pronounce.

        We say that a word is hard to pronounce
        if it contains 4 or more consonants
        in a row; otherwise it is easy to
        pronounce. For example, "apple" and
        "polish" are easy to pronounce,
        but "schtschurowskia" is hard to
        pronounce.

        You are given a string S consisting of
        N lowercase Latin characters. Determine
        whether it is easy to pronounce or not
        based on the rule above — print YES
        if it is easy to pronounce and NO otherwise.

        For the purposes of this problem, the
        vowels are the characters { a, e, i, o, u }
        and the consonants are the other 21
        characters.
      ======================================
    */
    bool condition = true;

    std::vector<char> vowels = { 'a', 'e', 'i', 'o', 'u' };

    /*
      ======================================
        For a sliding window of fixed size,
        we check if any element of the window
        is also present in vowels vector.
        This will tell us when the word given
        to us is not easy to pronounce.
      ======================================
    */
    for (int i = 0; i < N - 4 + 1; i += 1) {
      std::string window (std::begin(S) + i, std::begin(S) + i + 4);
      auto intersection = std::count_if(std::begin(window), std::end(window), [vowels](auto const &c) { return std::find(std::begin(vowels), std::end(vowels), c) != std::end(vowels); });
      if (intersection == 0) { condition = false; break; }
    }

    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
