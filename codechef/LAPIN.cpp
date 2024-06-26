#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    std::string S;
    std::cin >> S;
    /*
      ======================================
        Lapindrome is defined as a string which
        when split in the middle, gives two
        halves having the same characters and
        same frequency of each character. If
        there are odd number of characters in
        the string, we ignore the middle
        character and check for lapindrome.

        For example: `gaga` is a lapindrome,
        since the two halves `ga` and `ga` have
        the same characters with the same
        frequency. Also `abccab`, `rotor`
        and `xyzxy` are a few examples of
        lapindromes. Note that `abbaab` is NOT
        a lapindrome. The two halves contain
        the same characters but their frequencies
        do not match. Your task is simple. Given
        a string, you need to tell if it is
        a lapindrome.
      ======================================
    */
    std::map<char, int> FL, FR;
    int middle = S.size() / 2;
    if (S.size() % 2 == 1) S.erase(std::begin(S) + (S.size() / 2));
    std::string L (std::begin(S), std::begin(S) + middle);
    std::string R (std::begin(S) + middle,   std::end(S));
    for (auto i = std::begin(L); i != std::end(L); i += 1) { FL[*i]++; }
    for (auto j = std::begin(R); j != std::end(R); j += 1) { FR[*j]++; }
    std::cout << (FL == FR ? "YES" : "NO") << std::endl;
  }
  return 0;
}
