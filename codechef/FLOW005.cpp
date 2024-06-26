#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int N;
    std::cin >> N;

    /*
      ======================================
        Put all denominations in a an ordered vector,
        with increasing denominations towards the end,
        and then iterate over that vector from the end
        so that we get the largest notes first, as we're
        going to take out its multiples and replace
        the amount N with whatever remains.
      ======================================
    */
    std::vector<int> denominations = {1, 2, 5, 10, 50, 100};
    int notes = 0;

    for (int i = denominations.size() - 1; i >= 0; i -= 1) {
      int denomination = denominations[i];
      notes += N / denomination;
      N = N % denomination;
    }

    std::cout << notes << std::endl;
  }
  return 0;
}
