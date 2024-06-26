#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        Rahul and Rashi are off to wedding
        of a close relative. This time they
        have to travel without their guardians.
        Rahul got very interested in arrangement
        of seats inside the train coach.
        The layout of coach is given in the
        problem statement (a pattern is provided).

        Entire coach could be viewed as an
        arrangement of consecutive blocks of
        size 8. So, birth numbers 1-8 is
        compartment 1, 9-16 is compartment 2,
        17-24 is compartment 3 and so on. Each
        of these. size-8 blocks are arranged as:
        1LB, 2MB, 3UB, 4LB, 5MB, 6UB, 7SL, 7SU.
        Here LB denotes lower birth and MB
        denotes middle birth and UB upper birth.

        3UB   |  6UB
        2MB   |  5MB
        1LB   |  4LB
        7SL   |  8SU

        Rahul and Rashi are playing this
        game of finding the train partner of
        each birth. We need to write a program
        that can do that.
      ======================================
    */

    int compartment = std::ceil((double) N / 8);

    std::map<std::string, std::string> neighbourship = {
      { std::to_string(8 * (compartment - 1) + 1) + "LB", std::to_string(8 * (compartment - 1) + 4) + "LB" },
      { std::to_string(8 * (compartment - 1) + 2) + "MB", std::to_string(8 * (compartment - 1) + 5) + "MB" },
      { std::to_string(8 * (compartment - 1) + 3) + "UB", std::to_string(8 * (compartment - 1) + 6) + "UB" },
      { std::to_string(8 * (compartment - 1) + 4) + "LB", std::to_string(8 * (compartment - 1) + 1) + "LB" },
      { std::to_string(8 * (compartment - 1) + 5) + "MB", std::to_string(8 * (compartment - 1) + 2) + "MB" },
      { std::to_string(8 * (compartment - 1) + 6) + "UB", std::to_string(8 * (compartment - 1) + 3) + "UB" },
      { std::to_string(8 * (compartment - 1) + 7) + "SL", std::to_string(8 * (compartment - 1) + 8) + "SU" },
      { std::to_string(8 * (compartment - 1) + 8) + "SU", std::to_string(8 * (compartment - 1) + 7) + "SL" }
    };

    std::map<std::string, bool> allotment = {
      { std::to_string(8 * (compartment - 1) + 1) + "LB", (N % 8 == 1) },
      { std::to_string(8 * (compartment - 1) + 2) + "MB", (N % 8 == 2) },
      { std::to_string(8 * (compartment - 1) + 3) + "UB", (N % 8 == 3) },
      { std::to_string(8 * (compartment - 1) + 4) + "LB", (N % 8 == 4) },
      { std::to_string(8 * (compartment - 1) + 5) + "MB", (N % 8 == 5) },
      { std::to_string(8 * (compartment - 1) + 6) + "UB", (N % 8 == 6) },
      { std::to_string(8 * (compartment - 1) + 7) + "SL", (N % 8 == 7) },
      { std::to_string(8 * (compartment - 1) + 8) + "SU", (N % 8 == 0) }
    };

    auto seat = *std::find_if(std::begin(allotment), std::end(allotment), [](auto const &condition) { return condition.second == true; });
    auto neighbour = neighbourship.at(seat.first);
    std::cout << neighbour << std::endl;
  }
  return 0;
}
