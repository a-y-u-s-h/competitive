#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int x, y, z;
    std::cin >> x >> y >> z;
    /*
      ======================================
        We're given 3 numbers: x, y, z. We
        need to tell whether they can be written
        one of them can be written as sum of the
        other two.
      ======================================
    */
    std::vector<int> input = {x, y, z};
    std::sort(std::begin(input), std::end(input));
    bool possible = input[2] == input[1] + input[0];
    std::cout << (possible ? "YES" : "NO") << std::endl;
  }
  return 0;
}
