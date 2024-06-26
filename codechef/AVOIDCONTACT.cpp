#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        A hostel has N rooms in a straight
        line. It has to accomodate X people.
        Unfortunately, out of these X people,
        Y of them are infected with Chickenpox.
        Due to safety norms, the following
        precaution must be taken:

        => No person should occupy a room
        directly adjacent to a room occupied
        by a chickenpox-infected person. In
        particular, two chickenpoxp-infected
        people cannot occupy adjacent rooms.

        For example, if room 4 has a chickenpox
        infected person, then nobody should occupy
        rooms 3 and 5. Similarly, if room 1 has
        a chickenpox-infected person, then nobody
        should occupy room 2.

        What is the minimum value of N for which
        all the people can be accomodated in the
        hostel, following the above condition?
      ======================================
    */

    /*
      ======================================
        D: Number of diseased people.
        S: Number of safe people.
        P: String initialized with all S together.
      ======================================
    */
    int D = Y;
    int S = X - Y;
    std::string P (X - Y, 'S');


    /*
      ======================================
        We'll insert D characters at their
        locations to signify "disease" people
        rooms and along with them E
        characters to signify "empty" rooms.
        S characters denote "safe" rooms.
      ======================================
    */
    while (D > 0) {

      /*
        ======================================
          If there are no safe people, then
          rooms will follow a patter:
          D, DED, DEDED, DEDEDE, DEDEDED, so
          a different pattern for even and odd D.
        ======================================
      */
      if (S == 0) {
        if (P.size() == 0) {
          P.insert(0, "D");
        }
        else {
          if (D % 2 == 0) { P.insert(0, "DE"); };
          if (D % 2 == 1) { P.insert(P.size(), "ED"); };
        }
      }

      /*
        ======================================
          If there are safe people, then they
          will all stick together and we will
          have to insert DE at the start, then
          ED at the end, and then keep it up for
          every D that remains.
        ======================================
      */
      if (S > 0) {
        if (D % 2 == 0) { P.insert(0, "DE"); };
        if (D % 2 == 1) { P.insert(P.size(), "ED"); };
      }

      D -= 1;
    }

    auto answer = P.size();
    std::cout << answer << std::endl;

  }
  return 0;
}
