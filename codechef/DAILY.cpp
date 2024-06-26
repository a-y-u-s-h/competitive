#include <bits/stdc++.h>

long long choose(long long n, long long r) {
  /*
    ======================================
      nCr is a utility function, renamed
      to `choose` because we're already
      using the word C for "cars" in the
      main function. Also, in the first
      line: if r > n - r, r = n - because
      C(n, r) == C(n, n - r)
    ======================================
  */
  if(r > n - r) r = n - r;
  long long answer = 1;
  for (long long i = 1; i <= r; i++) { answer *= n - r + i; answer /= i; }
  return answer;
}

int main(int argc, char const *argv[]) {
  long long X, N;
  std::cin >> X >> N;
  std::vector<std::string> C;
  for (long long n = 0; n < N; n++) { std::string Ci; std::cin >> Ci; C.push_back(Ci); }

  /*
    ======================================
      Here, I create a utility function
      that calculates the compartment
      number based on seat number given to it.
    ======================================
  */
  auto compartment = [&] (double seat) { return seat <= 36 ? std::ceil(seat / 4) : std::ceil((54 - seat + 1) / 2); };

  /*
    ======================================
      Here, I make an availability map that
      stores: per car, per compartment, how
      many seats are available.
    ======================================
  */
  std::map<long long,std::map<long long,long long>> availability;

  for (auto Ci = std::begin(C); Ci != std::end(C); Ci += 1) {
    long long car = Ci - std::begin(C) + 1;
    for (auto Si = std::begin(*Ci); Si != std::end(*Ci); Si += 1) {
        long long seat = Si - std::begin(*Ci) + 1;
        availability[car][compartment(seat)] += (*Si == '1' ? 0 : 1);
      }
  }

  /*
    ======================================
      In order to find out the total
      number of ways, we need to iterate
      over every compartment and check if
      available seats meet the criteria
      aand then choose X seats out of available
      ones in that particular compartment, and
      then add it to the total.
    ======================================
  */
  long long total = 0;
  for (auto const &[car, compartments] : availability) {
    for (auto const &[compartment, seats] : compartments) {
      if (seats >= X) { total += choose(seats, X); continue; }
    }
  }

  /*
    ======================================
      Finally, we output the total as asked.
    ======================================
  */
  std::cout << total << std::endl;
  return 0;
}
