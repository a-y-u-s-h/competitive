#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int x;
  std::cin >> x;
  /*
    ======================================
      An elephant decided to visit his friend.
      It turned out that the elephant's house
      is located at point 0 and his friend's
      house is located at point x (x > 0)
      of the coordinate line. In one step,
      the elephant can move 1, 2, 3, 4, or 5
      positions forward. Determine, what
      is the minimum number of steps he
      need to make in order ot get to his
      friend's house.
    ======================================
  */
  int answer = (x / 5) + (x % 5 != 0 ? 1 : 0);
  std::cout << answer << std::endl;
  return 0;
}
