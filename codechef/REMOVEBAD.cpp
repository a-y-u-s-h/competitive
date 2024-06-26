#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int64_t N;
    std::cin >> N;
    std::vector<int64_t> A;

    std::map<int64_t, int64_t> frequency;

    for (int64_t n = 0; n < N; n++) {
      int64_t Ai;
      std::cin >> Ai;
      A.push_back(Ai);
      frequency[Ai] += 1;
    }
    /*
      ======================================
        Chef has an array of length N.
        In one operation Chef can remove
        any one elemeent from the array.
        Determine the minimum number of
        operations required to make all
        the elements same.
      ======================================
    */
    std::pair <int64_t, int64_t> maximum = *std::max_element(std::begin(frequency), std::end(frequency), [](auto &a, auto &b) { return b.second > a.second; });
    int64_t answer = N - maximum.second;
    std::cout << answer << std::endl;
  }
  return 0;
}
