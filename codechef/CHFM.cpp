#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N;
    std::cin >> N;
    std::vector<long long> A;
    /*
      ======================================
        Chef has invested his savings into
        N coins (numbered 1 through N). For
        each valid i, the i-th coin has value Ai.
        Chef does not want to know how much money
        he has, so he remembers the mean value
        of the coins instead of the sum of their values.

        A waiter from Chef's restaurant plans
        to steal exactly one of Chef's coins,
        but he does not want Chef to know about
        this, so he can only steal a coin if the
        arithmetic mean of all remaining coins
        is the same as the original arithmetic
        mean of all coins. Since the waiter is
        not good at mathematics, can you help
        him complete his plan?

        You have to determine whether it is
        possible to steal some coin and if it
        is possible, choose the coin the waiter
        should steal. If there are multiple
        coins that can be stolen, choose the
        one with the smallest number.

        Approach: After calculations, it is
        found that coin equalling to value
        of the mean itself can only be stolen.
        Among them we need to find the first one.
      ======================================
    */
    long long total = 0; for (long long n = 0; n < N; n++) { long long Ai; std::cin >> Ai; A.push_back(Ai); total += Ai; };
    if (total % N != 0) { std::cout << "Impossible" << std::endl; continue; }
    auto iterator = std::find(std::begin(A), std::end(A), total / N);
    bool possible = iterator != std::end(A);
    int coin = 1 + (iterator - std::begin(A));
    possible ? (std::cout << coin << std::endl) : (std::cout << "Impossible" << std::endl);
  }
  return 0;
}
