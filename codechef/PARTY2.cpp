#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int N, X, K;
    std::cin >> N >> X >> K;
    /*
      ======================================
        Chef wants to give a burger party to
        all his N friends, i.e. he wants to buy
        one burger for each of his friends.

        The cost of each burger is X, while
        chef has K. Determine whether he has
        enough money to buy a burger for each
        of his friends.
      ======================================
    */
    bool condition = (N * X) <= K;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
