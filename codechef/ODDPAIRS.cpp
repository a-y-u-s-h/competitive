#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    unsigned long long N;
    std::cin >> N;
    /*
      ======================================
        Given an integer N, determine the
        number of pairs (A, B) such that:
        1 <= A, B <= N & A + B is odd.

        Sum of two numbers is odd when exactly
        one of them is odd. So, we just have
        to choose 1 from odds and 1 from evens
        in the given range of A and B, and
        be done with it: 2 * odds * evens,
        because either A or B can be (odd, even)
        or (even, odd).
      ======================================
    */
    unsigned long long odds  = (N + 1) / 2;
    unsigned long long evens = N / 2;
    unsigned long long answer = 2 * odds * evens;
    std::cout << std::fixed << std::setprecision(14) << answer << std::endl;
  }
  return 0;
}
