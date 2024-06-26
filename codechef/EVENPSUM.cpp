#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long A, B;
    std::cin >> A >> B;
    /*
      ======================================
        You're given two positive integers
        A and B. Find the number of pairs of
        positive integers (X, Y) such that
        1 <= X <= A, 1 <= Y <= B and X + Y
        are even.
      ======================================
    */
    long long Ae = A / 2;
    long long Be = B / 2;
    long long Ao = (A + 1) / 2;
    long long Bo = (B + 1) / 2;
    long long answer = (Ae * Be) + (Ao * Bo);
    std::cout << answer << std::endl;
  }
  return 0;
}
