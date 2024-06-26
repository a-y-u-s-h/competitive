#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, M;
    std::cin >> N >> M;
    /*
      ======================================
        Santosh has a farm at Byteland. He has
        a very big family to look after. His
        life takes a sudden turn and he runs
        into a financial crisis. After giving
        all the money he has in his hand, he
        decides to sell his plots. The speciality
        of his land is that it is rectangular in
        nature. Santosh comes to know that he
        will get more money if he sells square
        shaped plots.

        So keeping this in mind, he decides to
        divide his land into minimum possible number
        of square plots, such that each plot has
        the same area, and the plots divide the
        land perfectly. He does this in order to
        get the maximum profit out of this.

        So your task is to find the minimum
        number of square plots with the same
        area, that can be formed out of the
        rectangular land, such that they
        divide it perfectly.
      ======================================
    */
    int answer = (M * N) / std::pow(std::gcd(M, N), 2);
    std::cout << answer << std::endl;
  }
  return 0;
}
