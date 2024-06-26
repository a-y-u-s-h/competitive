#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int A, B;
    std::cin >> A >> B;
    /*
      ======================================
        You are given two numbers A and B.
        You need to output the number of
        match sticks required to represent
        the number (A + B).

        Next, we find out the string representation
        of the number that we want to represent by
        match sticks, i.e. A + B as string, and then
        we count the number of sticks needed to represent
        the digits of that number in a loop or something.
      ======================================
    */
    std::string addition = std::to_string(A + B);

    int sticks = 0;
    for (auto digit : addition) {
      /*
      ======================================
        From the image that's given to us in the
        problem, we can figure out how many
        match sticks are required to write the digits -

        (1)        requires 2 sticks
        (7)        requires 3 sticks
        (8)        requires 7 sticks
        (4)        requires 4 digits
        (0, 6, 9)  requires 6 sticks
        (2, 3, 5)  requires 5 sticks
      ======================================
    */
      sticks +=
            digit == '1' ? 2
          : digit == '7' ? 3
          : digit == '8' ? 7
          : digit == '4' ? 4
          : digit == '0' || digit == '6' || digit == '9' ? 6
          : digit == '2' || digit == '3' || digit == '5' ? 5
          : 0;
    }
    std::cout << sticks << std::endl;
  }
  return 0;
}
