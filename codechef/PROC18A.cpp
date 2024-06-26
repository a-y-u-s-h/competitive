#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, K;
    std::cin >> N >> K;
    std::vector<int> A;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        Vishal loves running. He often visits
        his favourite Nehru Park and runs for
        very long distances. On one such visit
        he found that the number of girls in
        the park was unusually high. Now he
        wants to use this as an opportunity to
        impress a large number of girls
        with his awesome speed.

        The track on which he runs is an N
        kilometres long straight path. There
        are Ai girls standing within the
        ith kilometre of this path. A girl
        will be impressed only if Vishal is
        running at his maximum speed when he
        passes by her. But he can run at his
        best speed only for a single continuous
        stretch of K kilometres. Now Vishal wants
        to know what is the maximum number
        of girls that he can impress.
      ======================================
    */
    int maximum = 0;

    for (int i = 0; i < N - K + 1; i += 1) {
      std::vector<int> slice (std::begin(A) + i, std::begin(A) + i + K);
      maximum = std::max(maximum, std::accumulate(std::begin(slice), std::end(slice), 0));
    }

    std::cout << maximum << std::endl;
  }
  return 0;
}
