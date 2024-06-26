#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int a, b;
  std::cin >> a >> b;
  /*
    ======================================
      Height of a fraction a/b is the
      maximum of its numerator and denominator.
      So, for example, the height of 3/19
      is 19. Given a and b, find the height.
    ======================================
  */
  int answer = a > b ? a : b;
  std::cout << answer << std::endl;
  return 0;
}
