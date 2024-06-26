#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        Chef belongs to a very rich family
        which owns many gold coins. Today,
        he brought N gold coins and decided
        to form a triangle using these coins.
        Isn't it strange? Chef has an unusual
        way of forming a triangle using gold
        coins, which is described as follows -

        - He puts 1 coin in the 1st row.
        - Then puts 2 coins in the 2nd row.
        - Then puts 3 coins in the 3rd row.
        - And so on as shown in the problem.

        Chef is interested in forming a triangle
        with maximum possible height using at
        most N coins. Can you tell him the
        maximum possible height of the triangle?
      ======================================
    */

    int requirement = 1; int row = 1;
    while (N > 0) { if (N >= requirement) { N -= requirement; requirement = row + 1; if (N >= requirement) { row++; } else { break; } } else { break; } }
    std::cout << row << std::endl;
  }
  return 0;
}
