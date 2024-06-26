#include <iostream>

int main(int argc, char const *argv[]) {
  int N, M, X, Y;
  std::cin >> N >> M;
  std::cin >> X >> Y;
  /*
    ======================================
      There are two sectors "Bones" & "Blood".
      They have N and M people respectively.
      Each person in "Bones" will hand out X
      treats on Halloween and each in "Blood"
      will hand out Y treats. We need to
      figure out how many treats will we get if
      we visit everyone in neighbourhood in total.
    ======================================
  */
  std::cout << (N * X  + M * Y) << std::endl;
  return 0;
}
