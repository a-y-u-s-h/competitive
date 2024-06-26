#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  std::string colors;
  std::getline(std::cin, colors);

  int R = std::count(std::begin(colors), std::end(colors), 'R');
  int G = std::count(std::begin(colors), std::end(colors), 'G');
  int B = std::count(std::begin(colors), std::end(colors), 'B');

  std::string answer = (R >= 1 && G >= 1 && B == 0) ? "R"
                     : (R >= 1 && G == 0 && B >= 1) ? "R"
                     : (R >= 1 && G == 0 && B == 0) ? "R"
                     : (R == 0 && G >= 1 && B >= 1) ? "B"
                     : (R == 0 && G >= 1 && B == 0) ? "G"
                     : (R == 0 && G == 0 && B >= 1) ? "B"
                     : "";

  std::cout << answer << std::endl;
  return 0;
}
