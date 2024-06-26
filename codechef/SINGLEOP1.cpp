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
        Chef has a binary representation S
        of a number X with him. He can modify
        the number by applying the following
        operation exactly once:

        Make X = X (XOR) (X / (2^Y)) where (1 <= Y <= |S|)
        Chef wants to maximize the value of X after
        performing the operation. Help Chef in
        determining the value of X after the operation.

        The goal is to find the value of Y that
        will minimize the value of X after performing
        the operation once. So basically you want
        to find the highest bit in binary
        representation of X that's zero. If such
        a bit exists, set Y to position of this bit.

        Edge case will be when all the bits are 1.
        The maximum value after operation will
        be same as the initial value of X, so we
        should choose Y = |S| because it won't change X.
      ======================================
    */
    int Y = std::find(std::begin(S), std::end(S), '0') - std::begin(S);
    std::cout << Y << std::endl;
  }
  return 0;
}
