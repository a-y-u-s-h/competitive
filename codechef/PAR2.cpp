#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        N chocolates have to be divided
        among two people equally (both should)
        get the same amount and Chocolates
        cannot be broken in pieces. We need
        to find out whether we can do that.
      ======================================
    */
    bool condition = (N % 2) == 0;
    std::cout << (condition ? "Yes" : "No") << std::endl;
  }
  return 0;
}
