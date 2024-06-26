#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N;
    std::cin >> N;
    std::map<long long, long long> frequencies;
    for (long long n = 0; n < N; n++) { long long Ai; std::cin >> Ai; frequencies[Ai]++; }
    /*
      ======================================
        Watson gives an array A of N integers
        A1, A2,...An to Sherlock. He wants
        Sherlock to reorganize the array
        in a way such that no two adjacent
        numbers differ by more than 1.

        Formally,  if reorganized array is
        B1, B2, B3...Bn, then the condition
        that |Bi - Bi+1| <= 1 for all 1 <= i <= N
        where |x| denotes the absolute value
        of x) should be met. Sherlock is not
        sure that a solution exists, so he asks you.
      ======================================
    */
    auto B = std::begin(frequencies);
    auto E = std::prev(std::end(frequencies));
    bool C1 = frequencies.size() <= 2;
    bool C2 = std::abs((*B).first - (*E).first) <= 1;
    bool C3 = B != E ? (*B).second + (*E).second == N : (*B).second + (*E).second == 2 * N;
    bool condition =  C1 && C2 && C3;
    std::cout << (condition ? "YES" : "NO") << std::endl;

  }
  return 0;
}
