#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N;
  std::cin >> N;
  std::vector<int> A;
  for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
  /*
    ======================================
      Write a program to input an array
      and sort it in ascending order using
      the heap sort algorithm.
    ======================================
  */
  std::make_heap(std::begin(A), std::end(A));
  std::sort_heap(std::begin(A), std::end(A));
  for (auto const &Ai : A) { std::cout << Ai << " "; } std::cout << std::endl;
  return 0;
}
