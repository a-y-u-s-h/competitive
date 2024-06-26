#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int A, B;
    std::cin >> A >> B;
    /*
      ======================================
        You're given two positive integers A
        and B. You need to construct two
        different binary strings (i.e. they are
        strings which consist only of 0s and 1s)
        which satisfy these two conditions:
        1) Both strings should be palindromes.
        2) Each string should have exactlly A 0s
        and B 1s in them.

        Output "Yes" if two such different
        binary strings can be constructed
        and "No" otherwise.
      ======================================
    */
    int Pa = A % 2;
    int Pb = B % 2;

    bool ee = (Pa == 0 && Pb == 0);
    bool eo = (Pa == 0 && Pb == 1);
    bool oe = (Pa == 1 && Pb == 0);
    bool oo = (Pa == 1 && Pb == 1);

    bool condition = ee ? true : oo ? false : ((eo || oe) && (A > 1 && B > 1));
    std::cout << (condition ? "Yes" : "No") << std::endl;
  }
  return 0;
}
