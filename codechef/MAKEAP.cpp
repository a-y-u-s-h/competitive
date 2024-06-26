#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int A, C;
    std::cin >> A >> C;
    /*
      ======================================
        Chef is given two integers A and C
        such that A <= C. Chef wants to
        find whether there exists any integer
        B such that A, B and C are in AP.
      ======================================
    */
    int answer = (A + C) % 2 == 0 ? (A + C) / 2 : -1;
    std::cout << answer << std::endl;
  }
  return 0;
}
