#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    double X1, X2, X3, V1, V2;
    std::cin >> X1 >> X2 >> X3 >> V1 >> V2;
    /*
      ======================================
        X1 is location of Chef's restaurant.
        X2 is location of Kefa's restaurant.
        X3 is location of secret recipe.
        X3 is located between X1 and X2.
        V1 is speed of Chef.
        V2 is speed of Kefa.
        Figure out who reaches the recipe 1st.
      ======================================
    */
    std::string answer = std::abs(X3 - X2) / V2  < std::abs(X3 - X1) / V1 ? "Kefa"
                       : std::abs(X3 - X2) / V2  > std::abs(X3 - X1) / V1 ? "Chef"
                       : "Draw";

    std::cout << answer << std::endl;
  }
  return 0;
}
