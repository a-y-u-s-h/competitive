#include <bits/stdc++.h>

int solution (std::vector<int> C, int N) {
  if (N == 0) return 0;
  if (N == 1) return C[0];
  if (N == 2) return std::max(C[0], C[1]);
  if (N > 2) {
    int R = C[N - 1]; int L = C[N - 2]; int X = std::abs(R - L);
    std::vector<int> remaining (std::begin(C), std::end(C) - 2); remaining.push_back(X);
    remaining.erase(std::remove_if(std::begin(remaining), std::end(remaining), [] (auto const &Ri) { return Ri == 0; }), std::end(remaining));
    return std::min(R, L) + solution(remaining, remaining.size());
  }
}

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> C;
    for (int n = 0; n < N; n++) { int Ci; std::cin >> Ci; C.push_back(Ci); }
    /*
      ======================================
        Chef Ada is preparing N dishes (numbered
        1 through N). For each valid i, it takes
        Ci minutes to prepare the i-th dish.
        The dishes can be prepared in any order.

        Ada has a kitchen with two identical burners.
        For each valid i, to prepare the i-th dish,
        she puts it on one of the burners and after
        Ci minutes, removes it from this burner;
        the dish may not be removed from the burner
        before those Ci minutes pass, because
        otherwise it cools down and gets spoiled.
        Any two dishes may be prepared simultaneously,
        however, no two dishes may be on the same
        burner at the same time. Ada may remove
        a dish from a burner and put another
        dish on the same burner at the same time.

        What is the minimum time needed to
        prepare all dishes, i.e. reach the
        state where all dishes are prepared?
      ======================================
    */
    std::sort(std::begin(C), std::end(C));
    int answer = solution(C, N);
    std::cout << answer << std::endl;
  }
  return 0;
}
