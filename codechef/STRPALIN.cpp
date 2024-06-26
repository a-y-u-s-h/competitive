#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    std::string A, B;
    std::cin >> A >> B;
    /*
      ======================================
        We're given 2 strings A and B as input.
        Chef is interested in knowing whether
        it is possible to choose some non empty
        strings s1 and s2 where s1 is a substring
        of A and s2 is substring of B such that
        s1 + s2 (concatenation of both) is a
        palindromic string.

        Note: A string is a palindromic string
        if it can be read same both forward
        as well as backward.

        Solution: Basically if there's even one
        character common among both strings, we
        can say that it's possible to have substrings
        so that they form a palindrome. Because if
        'a' exists in both we can form 'aa' which is
        a palindrome.
      ======================================
    */

    /*
      ======================================
        To know this, we find out the set
        intersection between these two strings
        and if this set contains even a single
        element, we can say that it's possible
        to build up a palindromic string from
        substrings of given A and B strings.

        To find out set_intersection, we need to
        sort the inputs before hand. Just a C++ thing.
      ======================================
    */
    std::string intersection;
    std::sort(std::begin(A), std::end(A));
    std::sort(std::begin(B), std::end(B));
    std::set_intersection(std::begin(A), std::end(A), std::begin(B), std::end(B), std::back_inserter(intersection));
    bool possible = intersection.length() > 0;
    std::cout << (possible ? "Yes" : "No") << std::endl;
  }
  return 0;
}
