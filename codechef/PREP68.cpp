#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, B;
    std::cin >> N >> B;
    std::vector<int> A;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }

    /*
      ======================================
        Given an array A of length N and an
        integer B. Find whether there exists
        a pair of indices (i, j) (1 <= i < j <= N)
        such that |Ai - Aj| = B.
      ======================================
    */

    bool condition = false; std::set<int> elements;
    for (int i = 0; i < N; i++) { if (elements.count(A[i] + B) || elements.count(A[i] - B)) { condition = true; break; } elements.insert(A[i]); }
    std::cout << condition << std::endl;
  }
  return 0;
}
