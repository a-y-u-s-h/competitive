#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<std::vector<int>> A;

    for (int i = 0; i < N; i += 1) {
      std::vector<int> Ai;
      for (int j = 0; j < N; j += 1) {
        int Aij; std::cin >> Aij;
        Ai.push_back(Aij);
      }
      A.push_back(Ai);
    }

    /*
      ======================================
        Chef is learning linear algebra.
        Recently, he learned that for a square
        matrix M, trace(M) is defined as the
        sum of all elements on the main diagonal
        of M (an element lies on the main
        diagonal if its row index and column index
        are equal). Now Chef wants to solve some
        exercises related to this new quantity,
        so he wrote down a square matrix A with
        size N x N.

        A square submatrix with size
        L x L is a contiguous block of L x L
        elements of A. Formally, if B is a submatrix
        of A with size L x L, then there must
        be integers r and c (1 <= r, c <= N + 1 - L)
        such that Bij = A(r + i - 1, c + j - 1) for
        1 <= i, j >= L. Help Chef find the
        maximum trace of a square submatrix of A.
      ======================================
    */

    /*
      ======================================
        Check diagonals starting from first
        row, and then from first column while
        keeping a track of maximum trace.
      ======================================
    */

    int maximum = 0;

    for (int K = 0; K < N; K += 1) {
      int trace = 0; for (int i = 0, j = K; i < N && j < N; i++, j++) { trace += A[i][j]; }
      maximum = std::max(trace, maximum);
    }

    for (int K = 0; K < N; K += 1) {
      int trace = 0; for (int j = 0, i = K; j < N && i < N; j++, i++) { trace += A[i][j]; }
      maximum = std::max(trace, maximum);
    }

    std::cout << maximum << std::endl;

  }
  return 0;
}
