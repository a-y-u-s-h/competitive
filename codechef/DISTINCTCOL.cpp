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
        There are N different types of colours
        numbered from 1 to N. Chef has Ai balls
        having colour i (1 <= i <= N). Chef
        will arrange some boxes and put each
        ball in exactly one of those boxes.
        Find the minimum number of boxes Chef
        needs so that no box contains two
        balls of same colour.
      ======================================
    */
    int answer = *std::max_element(std::begin(A), std::end(A));
    std::cout << answer << std::endl;
  }
  return 0;
}
