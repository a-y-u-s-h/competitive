#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        Your teacher gave you an assignment,
        given an integer N, construct a binary
        string B = b1b2b3b4..bn of length N
        such that: max(bi, bi+1) = 1 for
        every i from 1 to N - 1.

        What is the minimum number of 1s such
        a binary string can contain? Note: A
        binary string is a string consisting
        of only the digits 0 and 1.
      ======================================
    */
    int answer = N / 2;
    std::cout << answer << std::endl;
  }
  return 0;
}
