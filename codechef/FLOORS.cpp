#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    float X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        There are 10 floors in a hotel and
        each floor consists of 10 rooms.
        Floor i consists of rooms from (10 * (i - 1) + 1)
        to (10 * i). You know that Chef's room
        number is X while Chefina's room number
        is Y. If Chef starts from his room, find
        the number of floors he needs to travel
        to reach Chefina's room.
      ======================================
    */
    int answer = std::abs(std::ceil(Y * 0.1 + 1) - std::ceil(X * 0.1 + 1));
    std::cout << answer << std::endl;
  }
  return 0;
}
