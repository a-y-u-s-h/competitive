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
        There are N students in a class, where
        the i-th student has a score of Ai.
        The i-th student will boast if and
        only if the number of students scoring
        less than or equal Ai is greater than
        the number of students scoring greater
        than Ai. Find the number of students
        who will boast.
      ======================================
    */

    int boasters = 0;

    for (auto Ai = std::begin(A); Ai != std::end(A); Ai += 1) {
      int L = std::count_if(std::begin(A), std::end(A), [Ai] (auto const &Aj) { return Aj <= *Ai; });
      int R = std::count_if(std::begin(A), std::end(A), [Ai] (auto const &Aj) { return Aj > *Ai; });
      if (L > R) boasters++;
    }

    std::cout << boasters << std::endl;
  }
  return 0;
}
