#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    double A, B;
    std::cin >> A >> B;
    /*
      ======================================
        Chef has two numbers A and B. In one
        operation, Chef can choose either A
        or B and multiply it by 2. Determine
        whether he can make both A and B equal
        after any number (possibly, zero) of moves.
      ======================================
    */
    bool condition = false;
    if (B > A) { while (B > A) { B /= 2; } } else if (B < A) { while (B < A) { A /= 2; } }
    if (B == A) condition = true;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
