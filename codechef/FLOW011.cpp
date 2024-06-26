#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    double salary;
    std::cin >> salary;

    /*
      ======================================
        If basic salary is less than 1500,
        then HRA = 10% of basic, and DRA = 90%
        of basic.

        If basic salary is equal to or above 1500,
        then HRA = 500 and DA = 98% of basic salary.

        Gross salary = Basic + HRA + DA
      ======================================
    */

    double HRA, DA;
    if (salary < 1500) {
      HRA = (10 * 0.01) * salary;
      DA = (90 * 0.01) * salary;
    } else {
      HRA = 500;
      DA = (98 * 0.01) * salary;
    }

    double gross = salary + HRA + DA;
    std::cout << std::fixed << std::setprecision(2) << gross << std::endl;
  }
  return 0;
}
