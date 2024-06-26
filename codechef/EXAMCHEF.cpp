#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int64_t t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    float X, Y, Z;
    std::cin >> X >> Y >> Z;
    /*
      ======================================
        There are X schools & each school
        has Y students. After results, Z
        students have passed the exam. Assuming
        all students appeared for the exams,
        find whether the number of students
        who passed in the town was strictly
        greater than 50%.
      ======================================
    */

    bool condition = (100 * Z / (X * Y)) > 50;
    std::cout << (condition ? "YES" : "NO") << std::endl;

  }
  return 0;
}
