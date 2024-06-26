#include <bits/stdc++.h>

std::vector<int> digits (int N) {
  std::vector<int> result;
  while (N) { result.push_back(N % 10); N /= 10; }
  return result;
}

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> A;

    /*
      ======================================
        You're given a sequence, you have
        select any two numbers from this
        sequence such that the product
        of sum of their digits is maximum
        and then find out that product.
      ======================================
    */
    for (int n = 0; n < N; n++) {
      int Ai;
      std::cin >> Ai;
      A.push_back(Ai);
    }

    std::map<int,int> PS;

    for (int i = 0; i < N; i += 1) {
      for (int j = 0; j < N; j += 1) {
        if (i != j) {
          int product = A[i] * A[j];
          if (!PS.count(product)) {
            int sum = 0, n = product;
            while (n) { sum += n % 10; n /= 10; }
            PS[product] = sum;
          }
        }
      }
    }

    auto maximum = *std::max_element(std::begin(PS), std::end(PS), [](auto const &a, auto const &b) { return b.second > a.second; });
    std::cout << maximum.second << std::endl;

  }
  return 0;
}
