#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int A, B, C;
    std::cin >> A >> B >> C;
    /*
      ======================================
        Alice, Bob and Charlie are bidding
        for an artifact at an auction. Alice
        bids  A rupees, Bob bids B rupees,
        and Charlie bids C rupees (where A, B,
        and C are distinct). According to the
        rules of the auction, the person who
        bids the highest amount will win the auction.
        Determine who will win the auction.

        Basically, find out win conditions for
        each one of them individually and reveal
        the answer or you can make pairs and sort
        them and then give out the name of the
        last element. Latter is a more versatile
        or general solution. Even better would
        be to find out max element of a Map.
      ======================================
    */

    std::map<std::string, int> bids = {{"Alice", A}, {"Bob", B}, {"Charlie", C}};
    auto predicate = [] (auto &x, auto &y) { return x.second < y.second; };
    auto winner = std::max_element(bids.begin(), bids.end(), predicate);
    std::cout << winner -> first << std::endl;

  }
  return 0;
}


