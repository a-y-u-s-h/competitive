#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        All of Chef's friends are playing
        fantasy cricket based upon the ODI
        World Cup, and Chef would like
        to join them.

        For a certain cricket match, Chef has
        decided upon his team of 11 players.
        However, he hasn't yet decided who should
        be the captain and who should be the vice-captain.

        He's narrowed his decision down to N
        players out of the 11, from which he'll
        choose one to be the captain and one
        to be the vice captain. How many different
        choices does he have? N * (N - 1)
      ======================================
    */
    int answer = N * (N - 1);
    std::cout << answer << std::endl;
  }
  return 0;
}
