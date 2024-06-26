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
        You are given a string S with length
        N. You may perform the following operation
        any number of times: choose a non-empty substring of
        S (possibly the whole string S) such that
        each character occurs an even number of
        times in this substring and erase this
        substring from S. (The parts of S before
        and after the erased substring are concatenated
        and the next operation is performed on
        this shorter string)

        For example, from the string "acabbad", we can
        erase the highlighted substring "abba",
        since each character occurs an even number
        of times in this substring. After this
        operation, the remaining string is "acd".

        Is it possible to erase the whole string
        using one or more operations?

        Note: A string B is a substring of a string
        A if B can be obtained from A by deleting several
        (possibly none or all) characters from the
        beginning and several (possibly none or all)
        characters from the end.
      ======================================
    */
    bool condition = std::all_of(std::begin(S), std::end(S), [&S](auto const &c) { return std::count(std::begin(S), std::end(S), c) % 2 == 0; });
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
