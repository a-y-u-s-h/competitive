#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, X, S;
    std::cin >> N >> X >> S;
    std::vector<std::pair<int,int>> swaps; for (int s = 0; s < S; s++) { std::pair<int,int> Si; int a, b; std::cin >> a >> b; swaps.push_back(std::make_pair(a, b)); }



    /*
      ======================================
        When Chef was visiting a fair in Byteland,
        he met a magician. The magician had N boxes
        (numbered 1 through N) and a gold coin. He
        challenged Chef to play a game with him; if
        Chef won the game, he could have the coin,
        but if he lost, the magician would kidnap Chef.

        At the beginning of the game, the magician places
        the gold coin into the X-th box. Then, he
        performs S swaps. To win, Chef needs to
        correctly identify the position of the
        coin after all swaps.

        In each swap, the magician chooses two boxes
        A and B, moves the contents of box A (before
        the swap) to box B and the contents of box
        B (before the swap) to box A.
      ======================================
    */
    std::vector<int> boxes (N); boxes[X - 1] = 1;
    for (auto swap : swaps) { std::swap(boxes[swap.first - 1], boxes[swap.second - 1]); }
    int answer = std::find(std::begin(boxes), std::end(boxes), 1) - std::begin(boxes) + 1;
    std::cout << answer << std::endl;

  }
  return 0;
}
