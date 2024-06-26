#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, K;
    std::cin >> N >> K;
    std::vector<int> W;
    for (int n = 0; n < N; n++) { int Wi; std::cin >> Wi; W.push_back(Wi); }

    /*
      ======================================
        Chef has N small boxes arranged on a
        line from 1 to N. For each valid i,
        the weight of the i-th box is Wi.
​
        Chef wants to bring them to his home,
        which is at the position 0. He can hold
        any number of boxes at the same time; however,
        the total weight of the boxes he's holding
        must not exceed K at any time, and he can
        only pick the ith box if all the boxes
        between Chef's home and the ith box have
        been either moved or picked up in this trip.

        Therefore, Chef will pick up boxes
        and carry them home in one or more
        round trips. Find the smallest number
        of round trips he needs or determine
        that he cannot bring all boxes home.
      ======================================
    */
    /*
      ======================================
        First, we need to check under what
        condition Chef definitely can't
        finish the trip: If any of those
        boxes have a weight greater than K.
      ======================================
    */
    bool failure = std::any_of(std::begin(W), std::end(W), [K] (auto const &Wi) { return Wi > K; });
    if (failure) { std::cout << "-1" << std::endl; continue; }

    /*
      ======================================
        If Chef can make trips, we need to
        now print out smallest number of
        trips that Chef will take to finish
        picking up all those boxes.
      ======================================
    */

    int rounds = 1;
    int holding = 0;
    for (int i = 0; i < N; i += 1) { holding += W[i]; if (holding > K) { rounds++; holding = 0; i--; }}
    std::cout << rounds << std::endl;
  }
  return 0;
}
