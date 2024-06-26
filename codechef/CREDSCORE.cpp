#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int X;
  std::cin >> X;
  /*
    ======================================
      To access CRED programs, one needs
      to have a credit score of 750 or more.
      Given that the present credit is X,
      determine if one can access CRED
      programs or not.
    ======================================
  */
  bool condition = (X >= 750);
  std::cout << (condition ? "YES" : "NO") << std::endl;
  return 0;
}
