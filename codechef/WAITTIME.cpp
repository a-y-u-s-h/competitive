#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int K, X;
    std::cin >> K >> X;
    /*
      ======================================
        Chef is eagerly waiting for a piece
        of information. His secret agent told
        him that this information would be
        revealed to him after K weeks.

        X days have already passed and Chef
        is getting restless now. Find the
        number of remaining days Chef has
        to wait for, to get the information.

        It is guaranteed that the information
        has not been revealed to the Chef yet.
      ======================================
    */
   int answer = 7 * K - X;
   std::cout << answer << std::endl;
  }
  return 0;
}
