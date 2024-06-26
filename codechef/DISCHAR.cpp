#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string S;
    std::cin >> S;
    /*
      ======================================
        You have initially a string of N
        characters, denoted by A1,A2...AN.
        You have to print the size of the
        largest subsequence of string A
        such that all the characters in that
        subsequence are distinct ie. no
        two characters in that subsequence
        should be same. A subsequence of
        string A is a sequence that can
        be derived from A by deleting
        some elements and without changing
        the order of the remaining elements.
      ======================================
    */
    std::map<char, int> F; for (int i = 0; i < S.size(); i++) { F[S[i]]++; }
    std::cout << F.size() << std::endl;
  }
  return 0;
}
