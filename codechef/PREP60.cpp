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
        You're given an array A of size N.
        We define the previous smaller element
        Ai as the element Aj such that Aj < Ai
        and j is the maximum possible. Find
        the previous smaller element of every
        element Ai in the array. Output -1
        for the elements which have no previous
        smaller element.
      ======================================
    */
    std::stack<int> B;

    for (auto Aj = std::rbegin(A); Aj != std::rend(A); Aj += 1) {
      bool found = false;
      for (auto Ai = Aj + 1; Ai != std::rend(A); Ai += 1) { if (*Aj > *Ai) { B.push(*Ai); found = true; break; } }
      if (!found) B.push(-1);
    }

    while (!B.empty()) { std::cout << B.top() << " "; B.pop(); } std::cout << std::endl;


  }
  return 0;
}
