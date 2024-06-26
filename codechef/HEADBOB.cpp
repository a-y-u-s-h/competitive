#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N; std::string G;
    std::cin >> N;
    std::cin >> G;
    /*
      ======================================
        Tanu has got interested in signs and
        gestures that we use for communication.
        One such gesture is the head-bob.
        When we want to signal "Yes" to someone,
        we move the head up-and-down. For "No",
        the head is moved left-and-right,
        rotating about the vertical axis.

        There is a peculiar way of gesturing "Yes",
        commonly seen in India, by moving head
        sideways (rotating about the forward-back
        axis). This is called the Indian head-bob.

        Tanu observed many people on the railways
        station, and made a list of gestures that
        they made. Usual "Yes" gesture is recorded
        as "Y", no as "N" and Indian "Yes" gesture
        as "I". (Assume no foreigner uses the Indian
        "Yes" gesture and vice-versa). Identify which
        of them were Indians, which were not Indian,
        and which one you cannot be sure about.
      ======================================
    */
    int Cy = std::count(std::begin(G), std::end(G), 'Y');
    int Ci = std::count(std::begin(G), std::end(G), 'I');

    std::string answer = Ci > Cy ? "INDIAN"
                       : Ci < Cy ? "NOT INDIAN"
                       : "NOT SURE";

    std::cout << answer << std::endl;
  }
  return 0;
}
