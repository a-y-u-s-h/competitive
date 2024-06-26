#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        Chef participated in a contest and got a rank
        X. Chef is trying to find his name in
        the ranklist but there are too many pages.

        Each page consists of 25 participants.
        Chef wants to find the exact page number
        which contains his name. Help Chef find
        the page number.
      ======================================
    */
    int answer = (X / 25) + (X % 25 != 0 ? 1 : 0);
    std::cout << answer << std::endl;
  }
  return 0;
}
