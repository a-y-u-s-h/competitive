#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        It takes 30 minutes for Chef to reach
        Office from his Apartment. Chef left
        for office X minutes before Chef was
        supposed to reach. Determine whether
        or not Chef will be able to reach on time.
      ======================================
    */
    bool condition = X >= 30;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
