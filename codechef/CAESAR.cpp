#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int Q;
  std::cin >> Q;
  for (int q = 0; q < Q; q += 1) {
    int N;
    std::cin >> N;
    std::string S, T, U;
    std::cin >> S >> T >> U;
    /*
      ======================================
        In the ROT-K cipher, each character
        in the string is shifted a fixed
        number of positions down the alphabet.
        The value of K represents the number
        of positions to shift. For instance,
        in ROT-2, each character is shifted
        2 positions. The ROT-2 cipher of the
        string code is `eqfg`.

        Note that the rotation is performed
        in a circular manner, meaning that if
        the character 'z' is shifted by one
        position, we obtain character 'a'.

        You're given strings S, T, and U, each
        of length N, such that ROT-K cipher
        of string S is T. Find the ROT-K cipher
        of string U.
      ======================================
    */
    int Dt = (T.front() - 'a');
    int Ds = (S.front() - 'a');
    int K = (Dt > Ds) ? (Dt - Ds) : (26 - Ds) + Dt;
    std::transform(std::begin(U), std::end(U), std::begin(U), [K] (auto const &Ui) { return 'a' + (Ui - 'a' + K) % 26; });
    std::cout << U << std::endl;
  }

  return 0;
}
