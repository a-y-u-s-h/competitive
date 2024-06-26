#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int A, B, C;
    std::cin >> A >> B >> C;
    /*
      ======================================
        Chef has 3 numbers A, B and C. Chef
        wonders if it is posisble to choose
        exactly two numbers out of the three
        numbers such that their sum is odd.
      ======================================
    */
    std::vector<int> numbers = { A, B, C };
    int odds = std::count_if(std::begin(numbers), std::end(numbers), [] (auto const &x) { return x % 2 == 1; });
    bool condition = odds == 1 || odds == 2;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
