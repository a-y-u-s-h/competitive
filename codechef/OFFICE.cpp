#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        In a company, employees have to work
        X hours each day from Monday to Thursday.
        Also, Friday is "Chill Day" - employees,
        only have to work for Y hours (Y < X)
        on Friday. Saturdays and Sundays are
        holidays. Determine total number of
        working hours in the week.
      ======================================
    */
    int answer = (4 * X + Y);
    std::cout << answer << std::endl;
  }
  return 0;
}
