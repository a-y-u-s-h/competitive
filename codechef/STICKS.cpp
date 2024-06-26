#include <bits/stdc++.h>

std::string solution (std::vector<std::pair<int, int>> candidates) {
  auto H = *std::max_element(std::begin(candidates), std::end(candidates), [] (auto const &a, auto const &b) { return b.first > a.first; });
  if (H.second >= 4) return std::to_string(H.first * H.first);
  if (H.second  < 4) {
    if (H.second >= 2) {
      candidates.erase(std::remove(std::begin(candidates), std::end(candidates), H), std::end(candidates));
      if (candidates.size() < 1) return "-1";
      auto H2 = *std::max_element(std::begin(candidates), std::end(candidates), [] (auto const &a, auto const &b) { return b.first > a.first; });
      return (H2.second >= 2) ? std::to_string(H.first * H2.first) : "-1";
    } else {
      candidates.erase(std::remove(std::begin(candidates), std::end(candidates), H), std::end(candidates));
      if (candidates.size() < 1) return "-1";
      return solution(candidates);
    }
  };
}

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> A; std::map<int, int> candidates;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; candidates[Ai]++; }
    /*
      ======================================
        Chef and his little brother are playing
        with sticks. They have total N sticks.
        Length of i-th stick is Ai. Chef asks
        his brother to choose any four sticks
        and to make a rectangle with those
        sticks its sides. Chef warns his brother
        to not break any of the sticks, he has
        to use sticks as a whole. Also, he wants
        that the rectangle formed should have
        the maximum possible area among all
        the rectangles that Chef's brother
        can make. Chef's little brother takes
        this challenge up and overcomes it.
        Can you also do it? That is, you have
        to tell whether it is even possible to
        create a rectangle? If yes, then you
        have to tell the maximum possible area
        of the rectangle.
      ======================================
    */
    std::vector<std::pair<int,int>> C; std::copy(std::begin(candidates), std::end(candidates), std::back_inserter(C));
    C.erase(std::remove_if(std::begin(C), std::end(C), [] (auto const &Ci) { return Ci.second < 2; }), std::end(C));
    std::sort(std::begin(C), std::end(C), [] (auto const &a, auto const &b) { return b.first > a.first; });
    std::cout << solution(C) << std::endl;
  }
  return 0;
}
