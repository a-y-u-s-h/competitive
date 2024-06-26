#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N;
    std::cin >> N;
    std::vector<long long> A;
    for (long long n = 0; n < N; n++) { long long Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        Chef owns an ice-cream shop in Chefland
        named scoORZ. There are only three types
        of coins in Chefland: Rs. 5, Rs. 10 and
        Rs. 15. An icecream costs Rs. 5.

        There are N people (numbered 1 through N)
        standing in a queue to buy icecream from
        scoORZ. Each person wants to buy exactly
        1 ice-cream. For each valid i, the i-th
        person has one coin with value Ai. It
        is only possible for someone to buy
        ice-creeam when Chef can give them back
        their change exactly - for example, if
        someone pays with a Rs. 10 coin, Chef
        needs to have a Rs. 5 coin that he gives
        to this person as change.

        Initially, Chef has no money. He wants
        to know if he can sell ice-cream to
        everyone in the queue, in the given order.
        Since he is busy eating his own ice-cream,
        can you tell him if he can serve all
        these people?
      ======================================
    */

    long long fives = 0, tens = 0, fifteens = 0; bool answer = true;


    for (long long i = 0; i < N; i += 1) {
      long long coin = A[i]; long long change = coin - 5;
      if (change ==  0) { fives++; continue; }
      if (change ==  5) { if (fives >= 1) { tens++; fives--; continue; } else { answer = false; break; }}
      if (change == 10) { if (tens >= 1) { tens--; fifteens++; } else if (fives >= 2) { fives -= 2; fifteens++; }  else { answer = false; break; }}
    }

    std::cout << (answer ? "YES" : "NO") << std::endl;
  }
  return 0;
}
