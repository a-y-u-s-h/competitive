#include <bits/stdc++.h>

int sum(int N) {
  int result = 0;
  for (int i = 1; i <= N; i += 1) {
    result += i;
  }
  return result;
}

int modified(int D, int N) {
  /*
    ======================================
      sum(D, N), which means the operation
      sum applied D times: the first time to
      N, and each subsequent time to the result
      of the previous operation.

      For example, if D = 2 and N = 3,
      then sum(2, 3) equals to
      sum(sum(3)) = sum(1 + 2 + 3) = sum(6) = 21.
    ======================================
  */
  int result = sum(N);
  for (int i = 1; i < D; i += 1) {
    result = sum(result);
  }
  return result;
}

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int D, N;
    std::cin >> D >> N;
    std::cout << modified(D, N) << std::endl;
  }
  return 0;
}
