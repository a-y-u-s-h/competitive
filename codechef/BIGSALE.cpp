#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    double N;
    std::cin >> N;
    std::vector<std::tuple<double,double,double>> R;
    for (double i = 0; i < N; i += 1) { double Pi, Qi, Di; std::cin >> Pi >> Qi >> Di; R.push_back(std::make_tuple(Pi, Qi, Di)); }
    /*
      ======================================
        Chef recently opened a big e-commerce
        website where her recipes can be bought
        online. It's Chef's birthday month so
        she has decided to organize a big sale
        in which grand discounts will be provided.

        In this sale, suppose a recipe should have
        a discount of x percent and its original
        price (before the sale) is p. Statistics
        says that when people see a discount offered
        over a product, they are more likely to
        buy it. Therefore, Chef decides to first
        increase the price of this recipe by x% (from p)
        and then offera discount of x% to people.

        Chef has a total of N types of recipes.
        For each i (1 <= i <= N), the number of
        recipes of this type available for sale
        is quantity(i), the unit price (of one
        recipe of this type, before x% increase)
        is price(i) and the discount offered
        on each recipe of this type (the value of x)
        is discount(i). Please help Chef find
        the total loss incurred due to this sale,
        if all the recipes are sold out.
      ======================================
    */
    double losses = 0;
    for (auto &[Pi, Qi, Di]: R) { losses += Qi * Pi * (1 - (((100 - Di)*(100 + Di)) / (100 * 100))); }
    std::cout << std::fixed << std::setprecision(7) << losses << std::endl;
  }
  return 0;
}
