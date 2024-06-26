#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string S;
    std::cin >> S;
    /*
      ======================================
        Lately, Chef has been inspired by
        the "Pawri" meme. There, he decided
        to take a string S and change each
        of its substrings that spells "party"
        to "pawri". Find the resulting string.
      ======================================
    */
    S = std::regex_replace(S, std::regex("party"), "pawri");
    std::cout << S << std::endl;
  }
  return 0;
}
