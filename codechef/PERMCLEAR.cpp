#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, K;
    std::vector<int> A;
    std::vector<int> B;
    std::cin >> N; for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    std::cin >> K; for (int k = 0; k < K; k++) { int Bi; std::cin >> Bi; B.push_back(Bi); }
    /*
      ======================================
        Alice has an array A of length N which
        is initially a permutation. She dislikes
        K numbers which are B1, B2, ...Bk all
        of which are distinct. Therefore, she
        removes all the occurences of these
        numberes from A. The order of the
        remaining elements of the A does not
        change. Can you find out the resulting
        array A?

        Note: A permutation of length N is
        an array where every integer from 1 to
        N occurs exactly once.
      ======================================
    */

    A.erase(std::remove_if(std::begin(A), std::end(A), [B] (auto const &Ai) { return std::find(std::begin(B), std::end(B), Ai) != std::end(B); }), std::end(A));
    for (auto const &Ai : A) { std::cout << Ai << " "; } std::cout << std::endl;
  }
  return 0;
}
