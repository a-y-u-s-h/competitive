#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N;
  std::cin >> N;
  /*
    ======================================
      Here's a step-by-step process for
      deleting the minimum element (root)
      from a min-heap:

      Remove the Root:

      1. Swap the root with the last leaf
         (the rightmost leaf of the last level).
      2. Remove the last leaf.

      Heapify Down:

      1. Compare the new root with its children.

      2. Swap the root with the smaller of its
         two children (maintaining the
         min-heap property).

      3. Repeat this process recursively until
         the min-heap property is restored.

    ======================================
  */
  std::vector<int> A;
  for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
  std::make_heap(std::begin(A), std::end(A), std::greater<int>());
  while (A.size() > 0) {  std::pop_heap(std::begin(A), std::end(A), std::greater<int>()); A.pop_back(); for (auto i : A) { std::cout << i << " "; } std::cout << std::endl; }
  return 0;
}
