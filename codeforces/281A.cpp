#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  std::string S;
  std::cin >> S;
  /*
    ======================================
      We just need to capitalize the first
      letter of the string. The remaining
      string must remain unchanged.
    ======================================
  */
  S[0] = std::toupper(S[0]);
  std::cout << S << std::endl;
  return 0;
}
