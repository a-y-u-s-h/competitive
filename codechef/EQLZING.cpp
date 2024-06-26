#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int A, B;
    std::cin >> A >> B;
    /*
      ======================================
        Chef has two integers A and B. In one
        operation he can choose any integer "d",
        and make one of the following moves:
        1. Add d to A and substract d from B.
        2. Add d to B and subtract d from B.

        Chef is allowed to make as many operations
        as he wants. Can he make A and B equal?

        => x(A + D) = y(B - D)
        => (A + D) % (B - D) == 0 && (B - D) % (A + D) == 0
        => A + D = B - D
        => 2D = B - A
        => D = (B - A) / 2
      ======================================
    */
    bool condition = (B - A) % 2 == 0;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
