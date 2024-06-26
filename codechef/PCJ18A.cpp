#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, X;
    std::cin >> N >> X;
    std::vector<int> A;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        Today, Chef wants to evaluate the
        dishes of his N students. He asks
        each one to cook a dish and present
        it to him. Chef loves his secret
        ingredient, and only likes dishes
        with at least X grams of it. Given
        N, X and the amount of secret ingredient
        used by each student Ai, find out
        whether Chef will like at least one dish.
      ======================================
    */
    bool condition = std::count_if(std::begin(A), std::end(A), [X] (auto const &Ai) { return Ai >= X; }) >= 1;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
