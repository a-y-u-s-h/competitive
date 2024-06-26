#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, M;
    std::cin >> N >> M;
    std::vector<int> F;
    std::vector<int> P;
    for (int n = 0; n < N; n++) { int Fi; std::cin >> Fi; F.push_back(Fi); }
    for (int n = 0; n < N; n++) { int Pi; std::cin >> Pi; P.push_back(Pi); }
    /*
      ======================================
        Chef went to Australia and saw the
        destruction caused by bushfires, which
        made him sad, so he decided to help
        the animals by feeding them fruits.
        First, he went to purchase fruits
        from Pintu.

        Pintu sells M different types of fruits
        (numbered 1 through M). He sells them in
        N baskets (numbered 1 through N) where
        for each valid i, the i-th basket costs
        Pi and it contains fruits of type Fi.
        Chef does not have too much money, so
        he cannot afford to buy everything;
        instead, he wants to choose one of the
        M available types and purchase all the
        baskets containing fruits of that type.

        Help Chef choose the type of fruit to
        buy such that he buys at least one basket
        and the total cost of the baskets he
        buys is the smallest possible.
      ======================================
    */
  }
  return 0;
}
