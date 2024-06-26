#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y, Z;
    std::cin >> X >> Y >> Z;
    /*
      ======================================
        It's dinner time. Ashish is very
        hungry and wants to eat something.
        He has X rupees in his pocket.
        Since Ashish is very picky, he only
        likes to eat either PIZZA or BURGER.
        In addition, he prefers eating PIZZA
        over eating BURGER. The cost of a PIZZA
        is Y rupees while the cost of a BURGER
        is Z rupees.

        Ashish can eat at most one thing. Find
        out what will Ashish eat for his dinner.
      ======================================
    */
    std::string answer = X >= Y ? "PIZZA"
                       : X >= Z ? "BURGER"
                       : "NOTHING";

    std::cout << answer << std::endl;
  }
  return 0;
}
