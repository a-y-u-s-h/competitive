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
        Chef considers a string consisting
        of lowercase English alphabets as *beautiful*
        if all the characters of the string are
        vowels. Chef has a string S consisting of
        lowercase English alphabets, of length N.
        He wants to convert S into a beautiful
        string T. In order to do so, Chef does
        the following operation on every
        character of the string:

        1. If the character is a consonant,
        change the character to its closest vowel.
        2. If the character is a vowel, don't
        change it.

        Chef realizes that the final string T
        is not unique. Chef wonders, what is the
        total number of distinct beautiful strings
        T that can be obtained by performing
        the given operations on string S.

        Since the answer can be huge, print it
        modulo 10^9 + 7.
      ======================================
    */
    std::vector<char> vowels = { 'a', 'e', 'i', 'o', 'u' };
    std::vector<char> alphabets (26); std::iota(std::begin(alphabets), std::end(alphabets), 'a');

    /*
      ======================================
        We need to find replacment map for
        every consonant that needs replacement.
        We'll replace equidistant consonants w/ '0'/
      ======================================
    */
    std::map<char, char> replacements;
    for (auto i = std::begin(vowels); i + 1 != std::end(vowels); i += 1) {
      for (auto alphabet = std::begin(alphabets); alphabet != std::end(alphabets); alphabet += 1) {
        char L = *i; char R = *(i + 1); char X = *alphabet;
        if (X > L && X < R) {
          int DL = std::abs((L - X));
          int DR = std::abs((R - X));
          replacements[X] = DL < DR ? L : DL > DR ? R : '0';
        }
      }
    }

    /*
      ======================================
        The number of possible strings will
        simply be 2^C0, where C0 is the count
        of zeroes in the string after we've
        done all the replacements. We need
        to output answer as modulo 10^9 + 7.
      ======================================
    */
    for (auto letter = std::begin(S); letter != std::end(S); letter += 1) { if (replacements.count(*letter)) *letter = replacements[*letter]; }
    int C0 = std::count(std::begin(S), std::end(S), '0');

    /*
      ======================================
        To avoid overflow, we need to take
        mod at every step that can overflow.
      ======================================
    */
    long long M = 1000000007;
    long long answer = 1;
    for (int i = 0; i < C0; i += 1) { answer = (answer * 2) % M; }
    std::cout << answer << std::endl;
  }
  return 0;
}
