#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N;
  std::cin >> N;
  std::cin.ignore(1, '\n');
    /*
      ======================================
        Write a program to perform the
        following operations:

        1) Initialize an array
        2) Given an integer N, perform N
           queries over this array.
        3) Given a query "+ x", insert x
           in your array.
        4) Given a query "-", remove the
           maximum element of the array.
        5) After each query print the maximum
           element left in the array.
      ======================================
    */
  std::priority_queue<int> heap;

  for (int n = 0 ; n < N; n += 1) {
    std::string query;
    char operation; std::cin >> operation;
    if (operation == '+') { int operand; std::cin >> operand; heap.push(operand); }
    if (operation == '-') { if (!heap.empty()) { heap.pop(); }  }
    std::cout << (heap.empty() ? 0 : heap.top()) << std::endl;

  }
  return 0;
}
