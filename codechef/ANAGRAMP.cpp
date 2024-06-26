#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string A, B;
    std::cin >> A >> B;
    /*
      ======================================
        Given 2 strings, your task is to
        check if they are anagrams of each
        other. Two strings are considered to
        be anagrams if by rearranging the
        letters of one string, we can get the
        other string. Your program should be
        able to read two strings from the input
        and output "YES" if they are anagrams of
        each other.
      ======================================
    */
    std::map<char, int> Fa, Fb;
    for (int i = 0; i < A.size(); i += 1) { Fa[A[i]]++; }
    for (int i = 0; i < B.size(); i += 1) { Fb[B[i]]++; }
    bool condition = Fa == Fb;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
