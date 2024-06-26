#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    unsigned long long X;
    std::cin >> X;
    /*
      ======================================
        Given an integer X, find two non-negative
        integers A and B such that -
        (A ^ B) + (A v B) = X, where ^ is bitwise
        AND operation and v is the bitwise OR
        operation.
      ======================================
    */
    std::cout << 0  << " " << X << std::endl;
  }
  return 0;
}
