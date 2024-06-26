#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int64_t M, N, K;
    std::cin >> M >> N >> K;
    /*
      ======================================
        Chef has an exam which will start
        exactly M minutes from now. However,
        instead of preparing for his exam,
        Chef started watching Season-1 of Superchef.
        Season-1 has N episodes, and the duration
        of each episode is K minutes.

        Will Chef be able to finish watching
        Season-1 *strictly* before the exam starts?
        Pretty straightforward solution.
      ======================================
    */

    bool answer = M > (K * N);
    std::cout << (answer ? "YES" : "NO") << std::endl;
  }
  return 0;
}
