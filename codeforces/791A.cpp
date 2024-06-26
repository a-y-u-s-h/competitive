#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  long long a, b;
  std::cin >> a >> b;
  /*
    ======================================
      Bear Limak wants to become the largest
      of bears, or at least to become larger
      than his brother Bob. Right now, Limak
      and Bob weigh a and b respectively.
      It's guaranteed that Limak's weight
      is smaller than or equal to his brother's weight.

      Limak eats a lot and his weight is
      tripled after every year, while
      Bob's weight is doubled after every year.

      After how many full years will Limak
      become strictly larger (strictly
      heavier) than Bob?

      a ->  3a
      b ->  2b
    ======================================
  */
  long long answer = 0;
  while (a <= b) { a *= 3; b*= 2; answer++; }
  std::cout << answer << std::endl;
  return 0;
}
