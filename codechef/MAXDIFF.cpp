#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, K;
    std::cin >> N >> K;
    std::vector<int> W;
    for (int n = 0; n < N; n++) { int Wi; std::cin >> Wi; W.push_back(Wi); }
    /*
      ======================================
        Chef has gone shopping with his 5 y/o
        son. They have bought N items so far.
        The items are numbered from 1 to N,
        and the item i weighs Wi grams.

        Chef's son insists on helping his
        father in carrying the items. He wants
        his dad to give him a few items. Chef
        does not want to burden his son. But
        he won't stop bothering him unless he
        is given a few items to carry. So, Chef
        decides to give him some items. Obviously,
        Chef wants to give the kid less weight
        to carry.

        However, his son is a smart kid. To avoid
        being given the bare minimum weight to
        carry, he suggests that the items are
        split into two groups, and one group
        contains exactly K items. Then Chef will
        carry the heavier group, and his son
        will carry the other group.

        Help the Chef in deciding which items
        should the son take. Your task will be
        simple. Tell the Chef the maximum
        possible difference between the weight
        carried by him and the weight carried
        by the kid.
      ======================================
    */
    std::sort(std::begin(W), std::end(W));
    int Wt = std::accumulate(std::begin(W), std::end(W), 0);
    int W11 = std::accumulate(std::begin(W), std::begin(W) + K, 0);
    int W21 = std::accumulate(std::end(W) - K, std::end(W), 0);
    int Wd = std::max(std::abs(W11 - (Wt - W11)), std::abs(W21 - (Wt - W21)));
    std::cout << Wd << std::endl;
  }
  return 0;
}
