#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> P;
    for (int n = 0; n < N - 1; n++) { int Pi; std::cin >> Pi; P.push_back(Pi); }
    /*
      ======================================
        There are 2 trains A and B and N stations
        in line from 1 to N in order. There is also
        an array P of length N-1, such that Pi
        (1 <= i <= N) denotes the amount of time
        any train takes to go from the i-th station
        to the (i + 1)-th station.

        Initially, both trains are at station 1.
        Train A departs from station 1 and stops
        directly at station N. For safety purposes,
        it is maintained that train B cannot depart
        from station i unless train A has already
        reached station (i + 1) (1 <= i <= N).

        Find the minimum time after which train
        B reaches station N, once  train A departs
        from station 1.

        Approach: Let S = P1 + P2 + P3..., i.e.
        sum of all elements of P and M be the
        maximum element of P. Then the answer
        is just S + M, because journey of B
        can be broken up in two parts: Time
        taken by it when travelling from
        one station to next and time taken
        while waiting for train A to reach
        next station. The first time is just
        the sum S. The second time is M.
      ======================================
    */
    int S = std::accumulate(std::begin(P), std::end(P), 0);
    int M = *std::max_element(std::begin(P), std::end(P));
    int answer = S + M;
    std::cout << answer << std::endl;
  }
  return 0;
}
