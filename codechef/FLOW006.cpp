#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        You're given an integer N. Write a
        program to calculate the sum of
        all the digits of N.
      ======================================
    */
    int sum = 0;
    while (N > 0) { sum += N % 10; N /= 10; }
    std::cout << sum << std::endl;
  }
  return 0;
}
