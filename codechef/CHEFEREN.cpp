#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, A, B;
    std::cin >> N >> A >> B;
    /*
      ======================================
        Chef is a very big fan of Eren Yeager.
        In the last season of Attack on Titan,
        there were N episodes numbered from 1
        to N. Each even indexed episode was A
        minutes long and each odd indexed episode
        was B minutes long. Calculate the total
        duration (in minutes) of the last season.
      ======================================
    */
    int answer = std::floor(N / 2) * A + (N - std::floor(N / 2)) * B;
    std::cout << answer << std::endl;
  }
  return 0;
}
