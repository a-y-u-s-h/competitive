#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N; std::string S;
    std::cin >> N;
    std::cin >> S;
    /*
      ======================================
        For encoding an even-length binary
        string into a sequence of A, T, C, G,
        we iterate from left to right and
        replace the characters as follows:

        1. 00 is replaced with A.
        2. 01 is replaced with T.
        3. 10 is replaced with C.
        4. 11 is replaced with G.

        Given a binary string S of length N,
        N is even, find the encoded sequence.
      ======================================
    */

    std::string encoded;

    for (int i = 0; i < N; i += 2) {
      std::string bits (std::begin(S) + i, std::begin(S) + i + 2);
      if (bits == "00") encoded.append("A");
      if (bits == "01") encoded.append("T");
      if (bits == "10") encoded.append("C");
      if (bits == "11") encoded.append("G");
    }

    std::cout << encoded << std::endl;
  }
  return 0;
}
