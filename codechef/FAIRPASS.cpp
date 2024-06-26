#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int N, K;
    std::cin >> N >> K;
    /*
      ======================================
        Chef has N friends, Chef manages to
        get K passes for the fair. Will
        Chef be able to enter the fair with
        all his N friends? A person can
        enter the fair with one pass, and each
        pass can be used by only one person.
      ======================================
    */
    bool condition = K >= N + 1;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
