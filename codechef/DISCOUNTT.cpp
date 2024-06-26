#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N, X, Y;
    std::cin >> N >> X >> Y;
    std::vector<long long> A;
    for (long long n = 0; n < N; n++) { long long Ai; std::cin >> Ai; A.push_back(Ai); }

    /*
      ======================================
        There are N items in a shop. You
        know that the price of the i-th item
        is Ai. Chef wants to buy all the N items.

        There is also a discount coupon that
        costs X rupees and reduces the cost of
        every item by Y rupees. If the price
        of the item is initially <= Y, it becomes
        free, i.e. it costs 0.

        Determine whether Chef should buy
        the discount coupon or not. Chef will
        buy the discount coupon if and only if
        the total price he pays after buying
        the discount coupon is strictly less
        than the price he pays without buying
        the discount coupon.
      ======================================
    */

    std::vector<long long> D (N); std::transform(std::begin(A), std::end(A), std::begin(D), [Y] (auto const &Ai) { return Ai <= Y ? 0 : Ai - Y; });
    long long Sa = std::accumulate(std::begin(A), std::end(A), 0);
    long long Sd = std::accumulate(std::begin(D), std::end(D), 0);
    bool condition = Sd + X < Sa;
    std::cout << (condition ? "COUPON" : "NO COUPON") << std::endl;
  }
  return 0;
}
