#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Chef is shopping for masks. In the
        shop, he encounters 2 types of masks.
        1. Disposable: costs X but lasts only 1 day.
        2. Cloth: costs Y but lasts 10 days.

        Chef wants to buy masks to last him 100
        days. He will buy the masks which cost
        him the least. In case, there is a tie
        in terms of cost, Chef will be eco-friendly
        and choose the cloth masks. Which type of
        mask will Chef choose?
      ======================================
    */

    std::string answer = (10 * Y) < (100 * X) ? "Cloth"
                      :  (10 * Y) > (100 * X) ? "Disposable"
                      :  "Cloth";

    std::cout << answer << std::endl;
  }
  return 0;
}
