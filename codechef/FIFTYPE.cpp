#include <bits/stdc++.h>

int solution (double N, int steps = 0) {
  if (N == 50) return steps;
  if (50 - N > 0) return solution(N + 2, steps + 1);
  if (N - 50 > 0) return solution(N - 3, steps + 1);
}

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    double N;
    std::cin >> N;
    /*
      ======================================
        Chef's phone has a battery level, B of
        N percent currently. Each minute:
        1. If the phone is on charge, B += 2%.
        2. Otherwise. B -= 3%.
        Find the minimum time in which Chef can
        make the battery level each exactly 50%.
        Note that the battery level should always
        lie in the range 0 to 100 (both included).
      ======================================
    */
    int answer = solution(N, 0);
    std::cout << answer << std::endl;
  }
  return 0;
}
