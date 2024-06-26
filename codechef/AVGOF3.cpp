#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        It is Chef's birthday, you know that
        Chef's favourite number is X. You
        also know that Chef loves averages.
        Therefore, you decide it's best
        to gift Chef 3 integers: A1, A2 and A3
        such that:
        1. The mean of A1, A2 and A3 is X.
        2. 1 <= A1, A2, A3 <= 1000
        3. A1, A2, A3 are distinct.
        Output a suitable A1, A2, A3 which
        you could gift to Chef.

        Let the three numbers be, x - 1, x, x + 1.
        Then their average will be: X. But this
        will only be true if X will satisfy the
        2nd constraint: 1 <= A1, A2, A3 <= 1000. In
        the problem, it is given that 2 <= X <= 100,
        so A1, A2, A3 will satisfy the constraint.
      ======================================
    */
    int A1 = X - 1;
    int A2 = X;
    int A3 = X + 1;
    std::cout << A1 << " " << A2 << " " << A3 << std::endl;
  }
  return 0;
}
