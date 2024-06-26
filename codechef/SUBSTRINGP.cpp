#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string S1, S2;
    std::cin >> S1 >> S2;
    /*
      ======================================
        Given two strings S1 and S2, your
        task is to determine whether S2 is
        a substring of S1.
      ======================================
    */
    bool condition = S1.find(S2) != std::string::npos;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
