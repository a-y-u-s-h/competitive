#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, A, B;
    std::cin >> N >> A >> B;
    /*
      ======================================
        MoEngage has 3 decks. Each deck
        consists of N cards, numbered from
        1 to N. He draws out 1 card from each
        deck randomly with each card having
        an equal probability of being drawn.

        MoEngage drew cards numbered A and B
        from the decks 1 and 2 respectively.
        Now, he wonders what is the probability
        that he will end up with a funny
        hand after drawing the third card.

        A funny hand is when 3 consecutive
        numbered cards are present in your
        hand. Help MoEngage calculate the
        probability of ending up with a
        funny hand after drawing the third
        card. If the final probability of
        ending up with a funny hand is P,
        you need to print the value P * N.
        It can be shown that this value
        is an integer.
      ======================================
    */
    int L = std::min(A, B);
    int R = std::max(A, B);
    int D = std::abs(A - B);

    if (D > 2 || D == 0) { std::cout << 0 << std::endl; continue; }

    if (D == 2) { std::cout << 1 << std::endl; }

    if (D == 1) {
      if (L == 1 && R == N) { std::cout << 0 << std::endl; continue; }
      if (L == 1 && R  < N) { std::cout << 1 << std::endl; continue; }
      if (L  > 1 && R == N) { std::cout << 1 << std::endl; continue; }
      if (L  > 1 && R  < N) { std::cout << 2 << std::endl; continue; }
    }


  }
  return 0;
}
