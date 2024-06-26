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
        In a class of N students, a class
        test was held. The i-th student scored
        Ai marks. It is also known that the
        scores of all students were distinct.

        A student passes the test if their
        score is strictly greater than the
        passing marks. Given that exactly X
        students pass in the test, find the
        maximum value of the passing mark
        of the test.
      ======================================
    */
    std::sort(std::begin(A), std::end(A));
    int answer = *(std::end(A) - X) - 1;
    std::cout << answer << std::endl;
  }
  return 0;
}
