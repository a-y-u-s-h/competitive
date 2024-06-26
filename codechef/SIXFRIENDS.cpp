#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        6 friend go ona trip and are looking
        for accomodation. After looking  for
        hours, they find a hotel which offers
        two types of rooms -
        1. Double rooms. (room, with capacity 2)
        2. Triple rooms. (room, with capacity 3)

        A Double Room costs X, while Triple Room
        costs Y. The friends can either get 3
        Double Rooms or get 2 Triple Rooms.
        Find the minimum amount that they will
        have to pay to accomodate all 6 of them.
      ======================================
    */
    int answer = (3 * X < 2 * Y) ?  3 * X : 2 * Y;
    std::cout << answer << std::endl;
  }
  return 0;
}
