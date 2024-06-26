#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int N, K;
    std::vector<int> prices;
    /*
      ======================================
        Chef has N items in his shop (numbered 1 to N).
        For each valid i, the price of the ith item is Pi.
        Since Chef has very loyal customers, all N items
        are guaranteed to be sold regardless of thier price.

        However government introduced a price ceiling K,
        which means that for each item i, if Pi > K, its
        price should be reduced to Pi to K.

        Chef's revenue is sum of prices of all items he sells.
        We need to find the amount of revenue that Chef
        loses because of this price ceiling.
      ======================================
    */
    std::cin >> N >> K;
    for (int i = 0; i < N; i += 1) {
      int Pi;
      std::cin >> Pi;
      prices.push_back(Pi);
    }
    /*
      ======================================
        Normally, Chef would have made this much:
        (Rn = Revenue under normal conditions)
        Rn = sum(prices) = sum(Pi <= K) + sum(Pi > K)

        After the government's new policy,
        (Rp = Revenue after new policy introduction)
        Rp = sum(Pi <= K) + K * (count(Pi > K)).

        Losses that Chef got:
        Rn - Rp = sum(Pi > K) - K * (count(Pi > K))
        Rn - Rp = Spk - K * Cpk
        losses = Spk - K * Cpk

        Below, to find out prices that were modified,
        (elements which are greater than K), then we
        find out their sum and count because that's all
        we need to figure out the losses.
      ======================================
    */
    std::vector<int> modified;
    std::copy_if(std::begin(prices), std::end(prices), std::back_inserter(modified), [&](int i) { return i > K; });
    int Spk = std::accumulate(std::begin(modified), std::end(modified), 0);
    int Cpk = modified.size();
    int losses = Spk - K * Cpk;
    std::cout << losses << std::endl;
  }
  return 0;
}
