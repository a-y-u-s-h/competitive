#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N;
  std::cin >> N;
  /*
    ======================================
      A min-heap is a binary tree data
      structure that satisfies the heap
      property. Heap property refers to
      the specific ordering of elements in
      a binary heap. In a min heap, the
      value of any node is less than or
      equal to the values of its children.

      The binary tree representing the heap
      is always complete. This means that
      the tree is completely filled at all
      levels except possibly the lowest, which
      is filled from left to right.

      Min-heaps are often implemented using
      an array, where the children of the
      node at index i are located at indices
      2i + 1 (left child) and 2i + 2
      (right child). The parent of a node
      at index i is at index (i - 1) / 2.

      Insertion in Min Heap:

      In a binary heap, the elements are
      stored in an array. To insert a new
      element, you add it at the end of
      the array (as the last leaf in the
      binary tree). Then, you compare the
      new element with its parent and swap
      them if necessary until the heap
      property is restored.

      You're given an integer N and then N
      integers. You need to add these N
      integers in your heap. You have to
      print the array after each insertion.
    ======================================
  */

  std::vector<int> A;
  std::make_heap(std::begin(A), std::end(A));

  for (int n = 0; n < N; n++) {
    int Ai;
    std::cin >> Ai;
    A.push_back(Ai);
    std::push_heap(std::begin(A), std::end(A), std::greater<int>());
    for (auto i : A) { std::cout << i << " "; } std::cout << std::endl;
  }

  return 0;
}
