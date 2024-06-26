#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, X, C;
    std::cin >> N >> X >> C;
    std::vector<int> A;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        Basically, count all of those bags
        that have an Ai <= C, and then find
        out the calculation given in the
        problem statement. Or you can make
        the change and then output the answer.
      ======================================
    */
    std::transform(std::begin(A), std::end(A), std::begin(A), [X, C](auto const &a) { return X - C > a ? X - C : a; });
    int answer = std::accumulate(std::begin(A), std::end(A), 0);
    std::cout << answer << std::endl;
  }
  return 0;
}
