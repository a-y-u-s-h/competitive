#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;

    std::vector<int> A;
    for (int n = 0; n < N; n++) {
      int Ai; std::cin >> Ai;
      A.push_back(Ai);
    }

    /*
      ======================================
        In mathematics, the degree of polynomials
        in one variable is the highest power
        of the variable in the algebraic
        expression with non-zero coefficient.
        Chef has a polynomial in one variable x
        with N terms. The polynomial looks like:
        A0 * x^0 + A1 * x^1 +...A(n-1) * x^(n-1).
        A(i-1) denotes the coefficient of x^(i-1)
        term for all (1 <= i <= N). Find the
        degree of the polynomial. It is guaranteed
        that there exists at least one term with
        non-zero coefficient.
      ======================================
    */
    auto trailing = std::find_if(std::rbegin(A), std::rend(A), [](auto const &x) { return x != 0; });
    auto answer = std::distance(std::begin(A), trailing.base()) - 1;
    std::cout << answer << std::endl;
  }
  return 0;
}
