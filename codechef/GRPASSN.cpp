#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> P;
    for (int n = 0; n < N; n++) { int Pi; std::cin >> Pi; P.push_back(Pi); }

    /*
      ======================================
        Chef is hosting a party at his house and
        N people are invited to it. Everyone has
        arrived and they are eager to make a group
        and chit-chat.

        The ith  person prefers to be in a group of
        exactly Pi  people (including himself). A
        person who is not in a group of preferred
        size gets upset. Find whether Chef would be
        able to assign every person to a group such
        that everyone remains happy.
      ======================================
    */

    auto D = std::set(std::begin(P), std::end(P));
    bool condition = std::all_of(std::begin(D), std::end(D), [P] (auto const &d) { return std::count(std::begin(P), std::end(P), d) % d == 0; });
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
