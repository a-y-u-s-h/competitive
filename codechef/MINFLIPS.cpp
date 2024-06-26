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
        Chef has an array A of length N
        consisting of 1 and -1 only. In one
        operation, Chef can choose any index i
        (1 <= i <= N) and multiply the element Ai
        by -1. Find the minimum number of operations
        required to make the sum of the array
        equal to 0. Output -1 if the sum of the array
        cannot be made 0.
      ======================================
    */
    int Cp = std::count(begin(A), end(A), 1);
    int Cn = std::count(begin(A), end(A), -1);
    int answer = std::abs(Cp - Cn) % 2 != 0 ? -1 : std::abs(Cp - Cn) / 2;
    std::cout << answer << std::endl;
  }
  return 0;
}
