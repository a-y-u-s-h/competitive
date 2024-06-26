#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int A, B, M;
    std::cin >> A >> B >> M;
    /*
      ======================================
        There is a circular track of length
        M consisting of M checkpoints and M
        bidirectional roads such that each
        road has a length of 1 unit. Chef is
        currently at Checkpoint A and wants to
        reach Checkpoint B. Find the minimum
        length of the road he needs to travel.
      ======================================
    */
    int Dn = std::abs(B - A);
    int Dr = std::abs(M - std::abs(B - A));
    int answer = Dn < Dr ? Dn : Dr;
    std::cout << answer << std::endl;
  }
  return 0;
}
