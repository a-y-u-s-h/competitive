#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N; std::string S;
    std::cin >> N;
    std::cin >> S;
    /*
      ======================================
        S is a binary string containing 0s
        and 1s only. N is the length of that
        string. We can perform the following
        operations on S: Insert any character
        (0 or 1) at any position in S.
        Find the minimum number of operations
        you need to perform so that no two
        consecutive characters are same is S.
      ======================================
    */
    int answer = 0;

    for (int i = 0; i < N - 2 + 1; i += 1) {
      std::string slice (std::begin(S) + i, std::begin(S) + i + 2);
      answer += (slice == "00" || slice == "11") ? 1 : 0;
    }

    std::cout << answer << std::endl;
  }
  return 0;
}
