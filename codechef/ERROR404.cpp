#include <iostream>

int main(int argc, char const *argv[]) {
  int X;
  std::cin >> X;
  /*
    ======================================
      Chef's website will give an error
      if and only if X is 404, for any
      other X, it'll succeed.
    ======================================
  */
  bool error = X == 404;
  std::cout << (error ? "NOT FOUND" : "FOUND") << std::endl;
  return 0;
}
