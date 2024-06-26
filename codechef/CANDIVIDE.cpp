#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        There are 3 frieds, total N candies.
        There will be a fight amongst the
        friends if all of them do not get
        the same number of candies.
        Chef wants to divide all the
        candies such that there is no fight.
        Find whether such distribution is
        possible.
      ======================================
    */
   bool condition = (N % 3) == 0;
   std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
