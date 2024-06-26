#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, K; std::string S;
    std::cin >> N >> K;
    std::cin >> S;
    /*
      ======================================
        Chef has a binary string S of length N
        and an integer K. Hitesh wants to maximize
        the decimal representation of S using K
        operations of the following type:
        1. Type 1: Insert 0 at any position in string.
        2. Type 2: Change any 0 to 1.

        Help Hitesh find the modified string
        with maximum posssible decimal representation
        after performing K operations. Note that
        the decimal representation of a binary
        string refers to the numeric value it
        represents when converted to the decimal
        number system. For instance, th decimal
        representation of 101 will be 5
        (1 * 2^2 + 0 * 2^1 + 1 * 2^0).
      ======================================
    */

    while (K) {
      if (S[0] == '0') { S[0] = '1'; K--; }
      if (K) { S.append(1, '0'); K--; }
    }

    std::cout << S << std::endl;
  }
  return 0;
}
