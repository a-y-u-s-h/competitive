#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, B, M;
    std::cin >> N >> B >> M;
    std::vector<int> X;
    for (int m = 0; m < M; m++) { int Xi; std::cin >> Xi; X.push_back(Xi); }
    /*
      ======================================
        Chef has a memory machine. It has
        one layer for data storage and another
        layer for cache. Chef has stored an
        array with length N in the first
        layer. Let's denote its elements by
        A0, A1, A2...An-1. Now he wants to
        load some elements of this array into
        the cache.

        The machine loads the array in blocks
        with size B: A0, A1,...A(B-1) form a
        block, A(B), A(B+1)...A(2B-1) form
        another block and so on. THe last block
        may contain less than B elements of Chef's
        array. The cache may only contain at
        most one block at a time. Whenever Chef
        tries to access an element Ai, the
        machine checks if the block where Ai
        is located is already in the cache, and
        if it is not, loads this block into
        the cache layer, so that it can quickly
        access any data in it. However, as soon
        as Chef tries to access any element that
        is outside the block currently loaded
        in the cache, the block that was
        previously loaded into the cache is
        removed from the cache, since the machine
        loads new block containing the element
        that is being accessed.

        Chef has sequence of elements A(x1),
        A(x2),...A(xM) which is wants to access,
        in this order. Initially the cache is
        empty. Chef is wondering how many times
        the machine will need to load a block
        into the cache layer. Can you help him
        calculate this number?
      ======================================
    */
  }
  return 0;
}
