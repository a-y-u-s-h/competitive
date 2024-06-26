#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int64_t N, M;
    std::cin >> N >> M;
    /*
      ======================================
        N students want to go see a match,
        M tickets are available for the match.
        Determine how many students won't be
        able to book tickets.
      ======================================
    */
   std::cout << (N > M ? N - M : 0) << std::endl;
  }
  return 0;
}
