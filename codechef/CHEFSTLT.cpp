#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    std::string S1, S2;
    std::cin >> S1 >> S2;


    /*
      ======================================
        Pretty straight-forward. Find out
        the number of different characters
        and the number of question marks.
        If the index corresponding to both
        is a question mark, increase the number
        of unknowns and if it's not & the characters
        are not equal, increase the number of different
        characters.
      ======================================
    */
    int different = 0, unknowns = 0, length = S1.length();
    for (int i = 0; i < length; i += 1) {
      char x = S1[i];
      char y = S2[i];
      if (x == '?' || y == '?') unknowns++;
      if (x != '?' && y != '?' && x != y) different++;
    }

    /*
      ======================================
        Maximal difference will be when all
        unknowns are also different, and minimal
        difference will be when all unknowns are
        equal.
      ======================================
    */
    int maximum = different + unknowns;
    int minimum = different;
    std::cout << minimum << " " << maximum << std::endl;
  }
  return 0;
}
