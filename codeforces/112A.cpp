#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  std::string A, B;
  std::cin >> A >> B;
  /*
    ======================================
      There are two strings, they contain
      uppercase and lowercase letters. We
      want to compare them lexicographically.
      The letter's case does not matter.
      The uppercase letter is considered
      equivalent to the corresponding
      lowercase letter.

      If the first string is less than the
      second one, print "-1". If the second
      string is less than the first one,
      print "1". If the strings are equal,
      print "0". Note that the letters' case
      is not taken into consideration when
      the strings are compared.
    ======================================
  */
  bool L = std::lexicographical_compare(std::begin(A), std::end(A), std::begin(B), std::end(B), [](auto const &a, auto const &b) { return std::tolower(a) <  std::tolower(b); });
  bool M = std::lexicographical_compare(std::begin(A), std::end(A), std::begin(B), std::end(B), [](auto const &a, auto const &b) { return std::tolower(a) >  std::tolower(b); });
  bool E = std::lexicographical_compare(std::begin(A), std::end(A), std::begin(B), std::end(B), [](auto const &a, auto const &b) { return std::tolower(a) == std::tolower(b); });
  std::cout << (L ? "-1" : M ? "1" : E ? "0" : "0" ) << std::endl;
  return 0;
}
