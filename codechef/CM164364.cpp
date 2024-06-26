#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N, X;
    std::cin >> N >> X;
    /*
      ======================================
        There are n-chocolates and you're given
        an array of n numbers where the i-th
        number Ai is the flavour type of the
        i-th chocolate. Sebrina wants to eat
        as many different types of chocolates
        as possible, but she also has to save
        at least x number of chocolates for her
        little brother. Find the maximum
        possible number of distinct flavour
        types Sebrina can have.
      ======================================
    */

    /*
      ======================================
        Make a frequency map and then turn
        it into a vector to further sort it
        and iterate over it.
      ======================================
    */
    std::map<long long, long long> frequencies;
    for (long long n = 0; n < N; n += 1) { long long Ai; std::cin >> Ai; frequencies[Ai]++; }
    /*
      ======================================
        Now, number of chocolates Sebrina
        can eat are N - X. The answer will
        be the minimum of the number of
        distinct flavors and chocolates that
        Sebrina can eat.
      ======================================
    */
    long long answer = std::min((long long) frequencies.size(), N - X);
    std::cout << answer << std::endl;
  }
  return 0;
}
