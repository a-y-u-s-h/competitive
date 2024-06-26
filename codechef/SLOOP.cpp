#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    float M, S;
    std::cin >> M >> S;

    /*
      ======================================
        Chef is a big fan of coldplay.
        Every sunday, he will drive to a park
        taking M minutes to reach there and during
        the ride he will play a single song on a loop.

        Today, he has got the latest song which is in
        total S minutes long. He is interested to
        know how many times will he be able to
        play the song completely.
      ======================================
    */

    int answer = std::floor(M / S);
    std::cout << answer << std::endl;
  }
  return 0;
}
