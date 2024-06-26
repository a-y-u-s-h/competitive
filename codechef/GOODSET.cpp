#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;

  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        A set of integers is called good if
        there does not exist three distinct
        elements a, b, c in it such that
        a + b = c. Your task is simple,
        just output any good set of n integers.
        All the elements in this set should
        be distinct anad should lie between
        1 and 500 both inclusive.
      ======================================
    */
    std::vector<int> answer (N); std::generate(std::begin(answer), std::end(answer), [i = 1] () mutable  { i++; return 500 - i; });
    for (auto i : answer) { std::cout << i << " "; } std::cout << std::endl;

  }
  return 0;
}
