#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N, M;
  std::cin >> N >> M;
  std::vector<std::vector<int>> A (N, std::vector<int> (M));
  for (int i = 0; i < N; i++) { for (int j = 0; j < M; j++) { std::cin >> A[i][j]; }}
  /*
    ======================================
      Given a N x M matrix, sort its
      elements diagonally. For eg. see the
      following matrix and its diagonal
      sorting as shown in the statement.

      Basically, you need to iterate such
      that you get access to each diagonal
      as a vector and then you can sort it.
    ======================================
  */

  for (int d = 0; d < N + M - 1; d++) {

    /*
      ======================================
        There are a total of N + M - 1
        diagonals. For each diagonal the sum
        of indices is equal to that diagonal's
        number or (row - number - 1) or
        (col - number - 1) or both depending on
        which diagonals we want to consider,
        for our use case, we want diagonals
        such that (N - i - 1) + j = d.
      ======================================
    */
    std::vector<int> diagonal;

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
        if (N - i - 1 + j == d) {
          diagonal.push_back(A[i][j]);
        }
      }
    }

    /*
      ======================================
        We'll then sort that diagonal in
        reverse order and place its elements
        back into the matrix. We're sorting
        it in reverse so that when we put
        these elements back, we get the matrix
        in desired order (because we'll be
        popping back items from the vector).
      ======================================
    */
    std::sort(std::begin(diagonal), std::end(diagonal), std::greater<int>());

    /*
      ======================================
        Here, one by one, we put the diagonal
        elements back to their places by
        popping back the last element to be
        more efficient.
      ======================================
    */
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
        if (N - i - 1 + j == d) {
          A[i][j] = diagonal.back();
          diagonal.pop_back();
        }
      }
    }

  }

  /*
    ======================================
      Finally, we print the modified A.
    ======================================
  */
  for (int i = 0; i < A.size(); i++) {
    for (int j = 0; j < A[i].size(); j++) {
      std::cout << A[i][j] << " ";
    } std::cout << std::endl;
  }

  return 0;
}
