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
        You're given a string S of length N,
        consisting of the digits 0-9 and
        the characters '+' and '-'. S represents
        a valid mathematical expression.
        Rearrange the characters of S to form
        a valid mathematical expression such that
        the result obtained upon evaluating
        it is maximum.

        If there are multiple possible answers,
        you may print any of them. Note: A
        string S of length N is said to be a
        valid mathematical expression if the
        following hold:

        The first character of S is not '+' or '-'.
        The last character of S is not '+' or '-'.
        Any + or - in S must not be adjacent to
        another + or -.
      ======================================
    */
    int Cm = std::count(std::begin(S), std::end(S), '-');
    int Cp = std::count(std::begin(S), std::end(S), '+');
    S = std::regex_replace(S, std::regex("[+]"), "");
    S = std::regex_replace(S, std::regex("[-]"), "");
    std::sort(std::begin(S), std::end(S));
    for (int i = 0; i < S.size(); i += 1) { if (i % 2 == 1 && Cm > 0) { S.insert(i, "-"); Cm--; continue; }  if (i % 2 == 1 && Cm == 0 && Cp > 0) { S.insert(i, "+"); Cp--; continue; } }
    std::reverse(std::begin(S), std::end(S));
    std::cout << S << std::endl;
  }
  return 0;
}
