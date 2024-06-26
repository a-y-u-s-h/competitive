#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string X, Y;
    std::cin >> X;
    std::cin >> Y;
    /*
      ======================================
        Chef wants to implement wildcard
        pattern matching supporting only the
        wildcard '?'. The wildcard character
        '?' can be substituted by any single
        lower case English letter for matching.
        He has two strings X and Y of equal
        length, amde up of lower case letters
        and the character '?'. He wants to know
        whether the strings X and Y can be
        matched or not.
      ======================================
    */
    bool condition = true;

    for (int i = 0; i < X.size(); i += 1) {
      for (int j = 0; j < Y.size(); j += 1) {
        if (i == j) {
          if (X[i] == '?' || Y[j] == '?') { continue; }
          if (X[i] != Y[j]) { condition = false; break; }
        }
      }
    }

    std::cout << (condition ? "Yes" : "No") << std::endl;

  }
  return 0;
}
