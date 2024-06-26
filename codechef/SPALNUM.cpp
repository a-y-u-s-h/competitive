#include <bits/stdc++.h>

bool palindromic (int N) {
  std::string S = std::to_string(N);
  std::string R (S);
  std::reverse(std::begin(R), std::end(R));
  return R == S;
}

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int L, R;
    std::cin >> L >> R;
    /*
      ======================================
        A number is called palindromic if
        its decimal representaion is a palindrome.
        You're given a range, described by a pair
        of integers L anad R. Find the sum
        of all palindromic numbers lying
        in the range [L, R], inclusive of
        both the extrema.
      ======================================
    */

    long long answer = 0;
    std::vector<int> range (R - L + 1); std::iota(std::begin(range), std::end(range), L);
    for (auto i = std::begin(range); i != std::end(range); i += 1) { if (palindromic(*i)) answer += *i;  }
    std::cout << answer << std::endl;
  }
  return 0;
}
