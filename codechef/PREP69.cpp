#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::set<int> A;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.insert(Ai); }
    /*
      ======================================
        You're given an array A of length N,
        sorted in non-decreasing order. Your
        task is to remove all the duplicates
        and find the sorted increasing array
        of distinct elements consisting of
        all distinct elements present in A.
      ======================================
    */
    std::cout << A.size() << std::endl;
    for (auto const &Ai : A) { std::cout << Ai << " "; } std::cout << std::endl;

  }
  return 0;
}
