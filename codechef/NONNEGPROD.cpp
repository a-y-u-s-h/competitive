#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> A;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        Alice has an array of N integers: A.
        She wants the product of all the elements
        of the array to be a non-negative integer.
        That is, it can either be 0 or positive.
        But she doesn't want it to be negative.
        TO do this, she is willing to remove some
        elements of the array. Determine the
        minimum number of elements that she will
        have to remove to make the product of the
        array's elements non-negative.
      ======================================
    */
    auto Cn = std::count_if(std::begin(A), std::end(A), [](auto const &Ai) { return Ai <  0; });
    auto C0 = std::count_if(std::begin(A), std::end(A), [](auto const &Ai) { return Ai == 0; });
    int answer = Cn % 2 == 0 ? 0 : C0 > 0 ? 0 : 1;
    std::cout << answer << std::endl;
  }
  return 0;
}
