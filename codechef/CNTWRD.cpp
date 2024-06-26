#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int N, M;
    std::cin >> N >> M;
    /*
      ======================================
        There are N pages in a book, each page
        contains M words printed on it. We need
        to count to number of words in the book.
      ======================================
    */
   std::cout << (N * M) << std::endl;
  }
  return 0;
}
