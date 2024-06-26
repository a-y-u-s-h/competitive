#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> A;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        Chef loves to prepare delicious dishes.
        This time, Chef has decided to prepare
        a special dish for you, and needs to
        gather several apples to do so.

        Chef has N apple trees in his home garden.
        Each tree has a certain (non-zero) number
        of apples on it. In order to create his
        dish, Chef wants to pluck every apple
        from every tree.

        Chef has an unusual method of collecting
        apples. In a single minute, he can perform
        the following task:

        1) Pick any subset of trees such that every
           tree in the subset has the same number of apples.

        2) From each tree in the subset, pluck any
           number of apples, as long as the number
           of apples left on the tree equals the
           number of apples on a tree not in the subset.

        If all trees have the same number of
        apples left, Chef can pluck all of the
        apples remaining in a single minute.

        Chef does not want to keep you waiting,
        so wants to achieve this task in the
        minimum possible time. Can you tell him
        what the minimum time required is?
      ======================================
    */
    std::set distinct (std::begin(A), std::end(A));
    std::cout << distinct.size() << std::endl;
  }
  return 0;
}
