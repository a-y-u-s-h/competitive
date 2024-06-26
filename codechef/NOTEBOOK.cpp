#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        You know that 1 kg of pulp can be
        used to make 1000 pages and 1 notebook
        consists of 100 pages. Suppose a
        notebook factory receives N kg of pulp,
        how many notebooks can be made from that?
      ======================================
    */
    int answer = (N * 1000 / 100);
    std::cout << answer << std::endl;
  }
  return 0;
}
