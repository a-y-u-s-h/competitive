#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N, K;
    std::cin >> N >> K;
    std::vector<long long> A;
    for (long long n = 0; n < N; n++) { long long Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        Chef wants to impress Chefina by
        giving her the maximum number of gifts
        possible. Chef is in a gift shop
        having N items where the cost of the i-th
        item is equal to Ai. Chef has K amount
        of money and a 50% off discount coupon
        that he can use for at most one of
        the items he buys.

        If the cost of an item is equal to
        X, then, after applying the coupon
        on that item, Chef only has to pay
        [X / 2] (rounded upto the nearest integer)
        amount for that item.

        Help Chef find the maximum number of items
        he can buy with K amount of money and
        a 50% discount coupon given that he can
        use the coupon on at most one item.
      ======================================
    */

    /*
      ======================================
        Sort the items, starting with the
        cheapest first, calculate their
        discounted values. If current sum
        and discounted value is less than K,
        you can A[i] (non-discounted) value
        to the sum (not use the coupon), then as
        soon as you  find the number that will
        overflow even with discount, you break
        out of the loop.
      ======================================
    */
    std::sort(std::begin(A), std::end(A));
    long long cost = 0; long long items = 0;
    for (int i = 0; i < N; i += 1) {  long long discounted = (A[i] + 1) / 2; if (cost + discounted <= K) { items++; cost += A[i]; } else { break; }}
    std::cout << items << std::endl;
  }
  return 0;
}
