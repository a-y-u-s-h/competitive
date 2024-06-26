#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, M, K;
    std::cin >> N >> M >> K;

    std::vector<int> A;
    for (int n = 0; n < N; n++) {
      int Ai; std::cin >> Ai;
      A.push_back(Ai);
    }

    /*
      ======================================
        Chef recently solved his first problem
        on Codechef. The problem he has solved
        has N test cases. He gets a score for
        his submission according to these rules:

        1. If all N test cases pass, he gets 100 points.
        2. If first M (< N) pass, he gets K (< 100) points.
        3. If 1 & 2 conditions are not satisfied, he gets 0.

        You're given N, M, K and a binary array A,
        of length N where Ai = 1 will denote Chef's
        code passed ith test case. Find how
        many points Chef gets.
      ======================================
    */



    int answer = std::accumulate(std::begin(A), std::end(A)      , 0) == N ? 100
               : std::accumulate(std::begin(A), std::begin(A) + M, 0) == M ? K
               : 0;

    std::cout << answer << std::endl;
  }
  return 0;
}
