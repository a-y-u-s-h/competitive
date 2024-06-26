#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    /*
      ======================================
        Instead of taking in the numbers
        directly, I'll just keep a track
        of them and their frequencies in
        a map, and then check if their
        frequencies are 2 or more. The
        total count of such elements should
        be either 2 or 4. That'll give us
        a condition that'll check for
        rectangles.
      ======================================
    */
    std::map<int, int> sides;
    for (int n = 0; n < 4; n++) { int side; std::cin >> side; sides[side] += 1; }

    auto condition = std::count_if(std::begin(sides), std::end(sides), [](auto const &side) { return side.second == 2; }) == 2
                  || std::count_if(std::begin(sides), std::end(sides), [](auto const &side) { return side.second == 4; }) == 1;

    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
