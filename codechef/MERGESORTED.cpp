#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N, M;
  std::cin >> N >> M;
  std::vector<int> A;
  std::vector<int> B;
  for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
  for (int n = 0; n < M; n++) { int Bi; std::cin >> Bi; B.push_back(Bi); }
  /*
    ======================================
      You're given two sorted arrays A
      and B of size N and M respectively.
      You need to merge these two arrays
      and keep the final array sorted.
    ======================================
  */
  std::vector<int> AB;
  AB.reserve(A.size() + B.size());
  AB.insert(std::end(AB), std::begin(A), std::end(A));
  AB.insert(std::end(AB), std::begin(B), std::end(B));
  std::sort(std::begin(AB), std::end(AB));
  for (auto i : AB) { std::cout << i << " "; } std::cout << std::endl;
  return 0;
}
