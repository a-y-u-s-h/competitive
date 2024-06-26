#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int A, B, C;
    std::cin >> A >> B >> C;
    /*
      ======================================
        Chef defines a group of three friends
        as a perfect group if the age of
        one person is equal to the sum of
        the age of remaining two people.
        Given that, the ages of three people
        in a group are A, B and C respectively,
        find whether the group is perfect.
      ======================================
    */
    bool condition = (A == B + C) || (B == A + C) || (C == A + B);
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
