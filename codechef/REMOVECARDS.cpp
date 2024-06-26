#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> A;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        You have N cards placed in front of
        you on the table. The ith card has
        the number Ai written on it.

        In one move, you can remove any one
        card from the remaining cards on the
        table. Find the minimum number of moves
        required so that all the cards remaining
        on the table have the same number
        written on them.
      ======================================
    */

    auto Da = std::set(std::begin(A), std::end(A)); std::vector<int> Fa (Da.size()); std::transform(std::begin(Da), std::end(Da), std::begin(Fa), [A](auto const &d) { return std::count(std::begin(A), std::end(A), d); });
    auto frequent = *std::max_element(std::begin(Fa), std::end(Fa));
    int answer = N - frequent;
    std::cout << answer << std::endl;
  }
  return 0;
}
