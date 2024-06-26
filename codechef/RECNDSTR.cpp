#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string S;
    std::cin >> S;
    /*
      ======================================
        We just need to check if for the
        given string left rotation and
        right rotation is equal.
      ======================================
    */
    std::string LS (S);
    std::string RS (S);
    std::rotate(std::begin(LS), std::begin(LS) + 1, std::end(LS));
    std::rotate(std::rbegin(RS), std::rbegin(RS) + 1, std::rend(RS));
    bool condition = LS == RS;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
