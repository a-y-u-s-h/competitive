#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int N, A, B, C;
    std::cin >> N >> A >> B >> C;
    /*
      ======================================
        Chef will have N guests in his house today.
        He wants to serve at least one dish to each
        of the N guests. Chef can make two types of
        dishes - D1, D2. He has 3 kinds of ingredients with him:
        Fruit (F), Vegetable (V), Fish (P).

        For D1, he needs only F + V as ingredients.
        For D2, he needs only V + P as ingredients.

        Chef has A fruits, B vegetables and C fishes
        in his house. Can he prepare at least N dishes?

        Let x be number of D1 type of dishes and y be
        the number of D2 type of dishes. Tn be the total
        number of ingredients required to make N dishes. And
        Ta be the total number of ingredients available. So:

        Tn = xD1 + yD2;
        Tn = x(F + V) + y(V + P)
        Tn = Fx + V(x + y) + Py
        Ta = FA + VB + PC

        For  (N <= x + y) & (Ta >= Tn) to be true =>
        We have,
        1) x <= A,
        2) y <= C,
        3) x + y <= B

        1.1) x + y <= A + C (adding (1) & (2))
        1.2) N <= B (from (3) & because N <= x + y)
        1.3) N <= A + C (from (1.1) & because N <= x + y)

      ======================================
    */

    bool condition = (N <= A + C) && (N <= B);
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
