#include <iostream>

int main(int argc, char const *argv[]) {
  int N;
  std::cin >> N;
  /*
    ======================================
      Chef has N notes of Rs. 2000 to pay
      his college fees. But goverment has
      banned Rs. 2000 notes. Chef wants
      to pay the same amount using Rs. 500
      notes only. Find the number of notes
      that Chef needs.
    ======================================
  */
  std::cout << (N * 2000 / 500) << std::endl;

  return 0;
}
