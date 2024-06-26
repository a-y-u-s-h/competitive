#include <iostream>

int main(int argc, char const *argv[]) {
  int X, Y;
  std::cin >> X >> Y;

  /*
    ======================================
      Chef classifies a day to be either -
      "rainy", "cloudy" or "clear". In a
      particular week, Chef finds X days to
      be rainy, Y days to be cloudy. Find
      the number of clear days in the week.
    ======================================
  */

  int solution = 7 - (X + Y);
  std::cout << solution << std::endl;

  return 0;
}
