#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Chef has X dollars with him as he
        was sure that it would be enough to
        pay the bill on his date. At the end,
        waiter bought a bill for Y dollars.
        We need to find out whether Chef has
        enough dollars to pay the bill.
      ======================================
    */
   bool condition = X >= Y;
   std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
