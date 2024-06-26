#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        You and your friend are playing a game
        with hoops. There are N hoops (where N is odd)
        in a row. You jump into hoop 1, and your
        friend jumps into hoop N. Then you jump
        into hoop 2, and after that, your friend
        jumps into hoop N−1, and so on.

        The process ends when someone cannot make
        the next jump because the hoop is occupied
        by the other person. Find the last hoop
        that will be jumped into.

        Very straightfoward - It's going to be
        the middle of the loop. Since N is an odd
        number, it's going to be: floor(N / 2) + 1
      ======================================
    */
    int answer = std::floor(N / 2) + 1;
    std::cout << answer << std::endl;
  }
  return 0;
}
