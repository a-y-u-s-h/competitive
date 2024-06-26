#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int A, B, C;
    std::cin >> A >> B >> C;
    /*
      ======================================
        Chef is given three numbers A, B and C.
        He wants to find whether he can select
        exactly two numbers out of these such
        that the product of the selected
        numbers is negative.
      ======================================
    */
    std::vector<int> numbers { A, B, C };
    int Cp = std::count_if(std::begin(numbers), std::end(numbers), [] (auto const &n) { return n > 0; });
    int Cn = std::count_if(std::begin(numbers), std::end(numbers), [] (auto const &n) { return n < 0; });
    bool condition = Cp >= 1 && Cn >= 1;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
