#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N;
  std::cin >> N;
  /*
    ======================================
      Let's implement the matrix. Task:
      1. Choose whatever programming language
         you're comfortable in, and declare
         a 2D array for a square matrix.
      2. Store all the integers from 1 to N^2.
      3. Print all the integers from left
         to right going down in the matrix.
    ======================================
  */
  std::vector<std::vector<int>> matrix (N, std::vector<int> (N)); int counter = 1;
  for (int i = 0; i < N; i++) { for (int j = 0; j < N; j++) { matrix[i][j] += counter; counter++; }}
  for (int i = 0; i < matrix.size(); i++) { for (int j = 0; j < matrix[i].size(); j++) { std::cout << matrix[i][j] << " "; }; }
  return 0;
}
