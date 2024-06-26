#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int N;
    std::cin >> N;

    /*
      ======================================
        Get input quantities in a vector.
      ======================================
    */
    std::vector<int> quantities;
    for (int n = 0; n < N; n += 1) {
      int q;
      std::cin >> q;
      quantities.push_back(q);
    }

    /*
      ======================================
        Find out GCD of all elements in the
        'quantities' vector, and then
        divide all elements with that obtained
        value to get the answer.
      ======================================
    */

    int GCD = *std::max_element(std::begin(quantities), std::end(quantities));
    for (int i = 0; i < quantities.size(); i++) {
      int x = quantities[i];
      GCD = std::__gcd(GCD, x);
    }

    for (int i = 0; i < quantities.size(); i += 1) {
      quantities[i] = quantities[i] / GCD;
    }


    /*
      ======================================
        Print out the output vector after
        processing all the quantities.
      ======================================
    */
    for (int i = 0; i < quantities.size(); i += 1) {
      std::cout << quantities[i] << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}
