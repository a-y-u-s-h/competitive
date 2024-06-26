#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, M;
    std::cin >> N >> M;
    std::vector<int> P;
    std::vector<std::tuple<int, int, std::vector<int>>> CV;
    for (int m = 0; m < M; m++) { int Pi; std::cin >> Pi; P.push_back(Pi); }
    for (int n = 0; n < N; n++) { int Ci; std::vector<int> Vi; std::cin >> Ci; for (int c = 0; c < Ci; c++) { int Vj; std::cin >> Vj; Vi.push_back(Vj); } CV.push_back(std::make_tuple(n, Ci, Vi)); }
    /*
      ======================================
        Little Elephant likes lemonade.
        When Little Elephant visits any room,
        he finds the bottle of lemonade in
        that room that contains the greatest
        number of litres of lemonade and drinks
        it all.

        There are N rooms (numbered 0 to N - 1),
        each contains Ci bottles. Each bottle
        has a volume (in litres). The first
        room visited by Little Elephant was
        P0-th, the second P1-th, the M-th P(M-1)-th room.
        Note that the little elephant may visit
        a room more than once. Find for Little
        Elephant the total volume of lemonade
        he has drunk.
      ======================================
    */

    int drunk = 0;

    for (int i = 0; i < M; i += 1) {
      auto room = std::find_if(std::begin(CV), std::end(CV), [P, i] (auto const &CVi) { return std::get<0>(CVi) == P[i]; });
      auto number = std::get<0>(*room); auto bottles = std::get<1>(*room); auto volumes = std::get<2>(*room);
      auto maximum = std::max_element(std::begin(volumes), std::end(volumes));
      drunk += *maximum; *maximum = 0; std::get<2>(*room) = volumes;
    }

    std::cout << drunk << std::endl;

  }
  return 0;
}
