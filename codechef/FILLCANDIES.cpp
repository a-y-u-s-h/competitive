#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    float N, K, M;
    std::cin >> N >> K >> M;
    /*
      ======================================
        Chef received N candies on his birthday.
        He wants to put these candies in some bags.
        A bag has K pockets and each pocket can
        hold at most M candies. Find the minimum
        number of bags Chef needs so that he can
        put every candy into a bag.
      ======================================
    */
   int answer = std::ceil(N / (K * M));
   std::cout << answer << std::endl;
  }
  return 0;
}
