#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Chef has to travel to another place.
        For this, he can avail any one of
        the two cab services.
        1. I service charges X rupees.
        2. II service charges Y rupees.
        Chef wants to spend the minimum
        amount of money. Which cab service
        should Chef take?
      ======================================
    */
    std::string answer = X < Y ? "FIRST" : Y < X ? "SECOND" : "ANY" ;
    std::cout << answer << std::endl;
  }
  return 0;
}
