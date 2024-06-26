#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, K;
    std::cin >> N >> K;
    std::vector<int> A;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        Your best friend has a very interesting
        necklace with N pearls. On each of the
        pearls of the necklace there is an
        integer. However, your friend wants
        to modify the necklace a bit and asks
        you for help. She wants to move the
        first pearl K spots to the left and
        (do so with all other pearls).

        For example, if the necklace was
        originally: [1, 5, 3, 4, 2] and k = 2,
        now it becomes [3, 4, 2, 1, 5]. Help
        your friend determine how the necklace
        will look after the modification.
      ======================================
    */
    std::rotate(std::begin(A), A.begin() + K,std::end(A));
    for (auto const &Ai : A) { std::cout << Ai << " "; } std::cout << std::endl;
  }
  return 0;
}
