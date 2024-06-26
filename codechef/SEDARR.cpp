#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int N, K;
    std::cin >> N >> K;

    std::vector<int> sequence;
    for (int n = 0; n < N; n += 1) {
      int Ai;
      std::cin >> Ai;
      sequence.push_back(Ai);
    }

    /*
      ======================================
        The special task force Sed managed to
        obtain a sequence of positive integers
        A1,A2, ...,AN.

        You may perform the following operation
        any number of times (possibly zero):

        * Choose any element of the current sequence
          and replace it by any positive integer.

        You need to make the sum of the elements of
        the sequence divisible by a given positive
        integer K. Find the minimum number of operations
        you need to perform to achieve this.

        If a1 + a2 + a3 ... + an = S and if remainder = S % k.

        If (remainder == 0) then we don't need to do any
        extra operations. If (remainder != 0) then
        we just replace a1 -> a1 + remainder,
        making it one operation no matter what the remainder is.

      ======================================
    */
    int sum = std::accumulate(std::begin(sequence), std::end(sequence), 0);
    int remainder = sum % K;
    if (remainder == 0) std::cout << 0 << std::endl;
    if (remainder != 0) std::cout << 1 << std::endl;
  }
  return 0;
}
