#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  std::vector<int> years = {2010, 2015, 2016, 2017, 2019};
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        Chef is interested in the history of
        SnackDown contests. He needs a program
        to verify if SnackDown was hosted
        in a given year.

        SnackDown was hosted by CodeChef in the
        following years: 2010, 2015, 2016,
        2017 and 2019.
      ======================================
    */
    bool hosted = std::count(std::begin(years), std::end(years), N);
    std::cout << (hosted ? "HOSTED" : "NOT HOSTED") << std::endl;
  }
  return 0;
}
