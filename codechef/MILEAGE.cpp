#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    float N, X, Y, A, B;
    std::cin >> N >> X >> Y >> A >> B;
    /*
      ======================================
        Chef wants to rent a car to his
        restaurant which is N kilometres away.
        He can either rent a petrol car or
        a diesel car. 1L of petrol costs Rs. X
        and 1L of diesel costs Rs. Y. Chef can
        travel A km with 1L of petrol and B km
        with 1L of diesel. Chef can buy petrol
        and diesel in any amount, not necessarily
        integer. For example, if X = 95, Chef
        can buy 0.5L of petrol by paying Rs. 47.5.

        Which car should the Chef rent in order to
        minimize the cost of his travel?
      ======================================
    */

    std::string answer = (X * (N / A)) > (Y * (N / B)) ? "DIESEL"
                       : (X * (N / A)) < (Y * (N / B)) ? "PETROL"
                       : "ANY";

    std::cout << answer << std::endl;
  }
  return 0;
}
