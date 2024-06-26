#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Chef categorises an instagram account
        as spam, if, the following count of
        the account is more than 10 times the
        count of followers.

        Given the following and follower count
        of an account as X and Y respectively,
        find whether it is a spam account.
      ======================================
    */
    bool condition = X > 10 * Y;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
