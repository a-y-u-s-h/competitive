#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int N, X;
    std::cin >> N >> X;
    /*
      ======================================
        Chef wants to host a party with N
        people but party hall has a capacity
        of X people. Find whether Chef can
        host the party.
      ======================================
    */
    bool condition = X >= N;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
