#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        In first attempt, Chef scores X marks.
        In second attempt, he scores Y marks.
        According to rules, best score out
        of two attempts is considered final.
        Determinal final score of Chef.
      ======================================
    */
   std::cout << (X > Y ? X : Y) << std::endl;
  }
  return 0;
}
