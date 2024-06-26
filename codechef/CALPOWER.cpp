#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;

  for (int t = 0 ; t < T; t += 1) {
    std::string Si;
    std::cin >> Si;
    /*
      ======================================
        We'll simply create a utility function
        first to find out ord of a character,
        then sort the array so that all
        characters are mapped with maximum i,
        and then we find out the power.
      ======================================
    */
    int power = 0;
    std::sort(std::begin(Si), std::end(Si));
    auto ord = [&] (char c) -> int { return 1 + (int) c - (int) 'a'; };
    for (auto letter = std::begin(Si); letter != std::end(Si); letter += 1) { power += (1 + (letter - std::begin(Si))) * ord(*letter);}
    std::cout << power << std::endl;
  }
  return 0;
}
