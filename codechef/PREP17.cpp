#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::set<int> A;
    std::set<int> B;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.insert(Ai); }
    for (int n = 0; n < N; n++) { int Bi; std::cin >> Bi; B.insert(Bi); }
    /*
      ======================================
        Given two arrays A and B, each of
        size N, where each array consists
        of distinct elements. Find the
        number of elements that are common
        in both arrays.
      ======================================
    */
    std::vector<int> answer; std::set_intersection(std::begin(A), std::end(A), std::begin(B), std::end(B), std::back_inserter(answer));
    std::cout << answer.size() << std::endl;
  }
  return 0;
}
