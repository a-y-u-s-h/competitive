#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        For each bill you pay using CRED,
        you earn X CRED coins. At Codechef Store,
        each bag is worth 100 CRED coins.
        Chef pays Y number of bills using CRED.
        Find the maximum number of bags he
        can get from the Codechef Store.
      ======================================
    */
    int answer = (Y * X) / 100;
    std::cout << answer << std::endl;
  }
  return 0;
}
