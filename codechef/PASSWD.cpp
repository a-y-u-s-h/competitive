#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string S;
    std::cin >> S;
    /*
      ======================================
        Chef is planning to setup a secure
        password for his Codechef account.
        For a password to be secure, the
        following conditions should be
        satisfied:

        1. Password must contain at least
        one lower case letter [a-z].

        2. Password must contain at least
        one uppercase letter [A-Z] strictly
        inside (first or last letter won't
        be considered).

        3. Password must contain at least
        one digit [0-9] strictly inside.

        4. Password must contain at least
        one special character from the set:
        {'@', '#', '%', '&', '?'} strictly
        inside.

        5. Password must be at least 10 characters
        in length, but it can be longer.

        Chef has generated several strings
        and now wants you to chekc whether the
        passwords are secure based on the
        above criteria. Please help Chef in
        doing so. Note: Regular Expressions
        will be computationally expensive so
        do it all manually.
      ======================================
    */

    std::string characters = "@#%&?";

    bool C1 = false, C2 = false, C3 = false, C4 = false, C5 = S.size() >= 10;

    for (int i = 0; i < S.size(); i += 1) {
      char letter = S[i];
      if (std::islower(letter)) C1 = true;
      if (i > 0 && i < S.size() - 1) {
        if (std::isupper(letter)) C2 = true;
        if (std::isdigit(letter)) C3 = true;
        if (characters.find(letter) != std::string::npos) C4 = true;
      }
    }

    bool condition = C1 && C2 && C3 && C4 && C5;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }

  return 0;
}
