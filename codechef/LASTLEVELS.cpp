#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y, Z;
    std::cin >> X >> Y >> Z;
    /*
      ======================================
        There are X levels remaininng in a
        game that Chef wants to finish in
        a single session. Each level takes
        Y minutes to complete. To protect
        against eye-strain, Chef also decides
        that every time he completes 3 levels,
        he will take a Z minute break from
        playing. There is no need to take this
        break if the game has been completed.
        How much time (in minutes) will it take
        Chef to complete the game?
      ======================================
    */
    int answer = (Y * X) + ((X - 1) / 3) * Z;
    std::cout << answer << std::endl;
  }
  return 0;
}
