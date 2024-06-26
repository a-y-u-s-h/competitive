#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    float A, B;
    std::cin >> A >> B;
    /*
      ======================================
        There are 2 stores in Chefland and
        both sell the same product. The first
        store sells the product for 100 rupees
        whereas the second store sells it for
        200 rupees.

        It is the holiday season and both stores
        have announced a special discount. The
        first store is providing a discount of A
        percent on its product and the second
        store is providing a discount of
        B percent on its product.

        Chef is wondering which store is selling
        the product at a cheaper price after
        the discount has been applied. Can
        you help him identify the better deal?
      ======================================
    */
    auto discounted = [&] (float price, float discount) -> float { return price * (1 - discount * 0.01); };
    std::string answer = discounted(100, A) < discounted(200, B) ? "FIRST" : discounted(100, A) > discounted(200, B) ? "SECOND" : "BOTH";
    std::cout << answer << std::endl;
  }
  return 0;
}
