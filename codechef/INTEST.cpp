#include <iostream>

int main(int argc, char const *argv[]) {
  /*
    ======================================
      Earlier C++ used to need extra lines
      to make big inputs work with std::cin,
      but now it doesn't. So we proceed
      as instructed.
    ======================================
  */

  int n, k, count = 0;
  std::cin >> n >> k;

  /*
    ======================================
      We could have stored these numbers
      in a vector and then did the computation
      later, but this is more imperative
      and concise. From competitive programming
      point of view this should work better
      as we're not consuming extra space.
    ======================================
  */
  for (int i = 0; i < n; i += 1) {
    int ti;
    std::cin >> ti;
    if (ti % k == 0) count++;
  }

  std::cout << count << std::endl;
  return 0;
}
