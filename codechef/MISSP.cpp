#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        Chef is fan of pairs and he likes all
        things that come in pairs. He even has
        a doll collection in which the dolls
        come in pairs. One day while going
        through his collection, he found that
        there are odd number of dolls. Someone
        had stolen a doll. Help chef find
        which type of doll is missing.
      ======================================
    */
    std::map<int, int> frequencies;
    for (int n = 0; n < N; n++) { int Di; std::cin >> Di; frequencies[Di]++; }
    std::vector<std::pair<int, int>> filtered; std::copy_if(std::begin(frequencies), std::end(frequencies), std::inserter(filtered, std::end(filtered)), [](auto const &Fi) { return Fi.second % 2 == 1; });
    for (auto i : filtered) { std::cout << i.first << std::endl; }
  }
  return 0;
}
