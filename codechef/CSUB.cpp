#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N; std::string S;
    std::cin >> N;
    std::cin >> S;
    /*
      ======================================
        Given a string S, consisting only
        of 1s and 0s, find the number of
        substrings which start and end both
        in 1.. In this problem, a substring
        is defined as as sequence of continuous
        characters Si, Si+1, ...Sj where 1 <= i <= j <= N.
      ======================================
    */
    /*
      ======================================
        To find the number of substring that
        start and end with '1', we need to
        count the occurences of '1' in the
        string. Let's say, there are n ones
        in the string, The number of substrings
        that start and end with '1' can be
        calculated using the combination
        formula C(n, 2) + n, which equals
        n * (n + 1) / 2; Here's why -

        Each '1' can be a starting and ending
        point of a substring. And any two '1's
        can form a valid substring by including
        all characters between them.
      ======================================
    */
    long long C1 = std::count(std::begin(S), std::end(S), '1');
    long long answer = C1 * (C1 + 1) / 2;
    std::cout << answer << std::endl;
  }
  return 0;
}
