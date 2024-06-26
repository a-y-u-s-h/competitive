#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  double n, m, a;
  std::cin >> n >> m >> a;
  /*
    ======================================
      There is a rectangular shape with size
      n x m. A decision was taken to pave the
      rectangle with square mini squares
      of size a x a. What is the least number of
      squares needed to pave the bigger one?
      It is allowed to cover the surface larger
      than the bigger rectangle, but the bigger
      rectangle has to be covered.
    ======================================
  */
  int64_t answer = std::ceil(n / a) * std::ceil(m / a);
  std::cout << answer << std::endl;
  return 0;
}
