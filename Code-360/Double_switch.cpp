#include <iostream>
#include <string>
#include <vector>

int solve(int N, std::string S) {
  // Step 1: Check if a solution is possible
  int ones = 0;
  for (char c : S) {
    if (c == '1') ones++;
  }
  if (ones % 2 != 0) return -1;  // If number of 1s is odd, it's impossible

  // Step 2: Set up the system of equations
  // We need to solve for x_i where x_i = 1 if we perform operation at index i
  // For each bulb j, sum of x_i affecting bulb j should equal S[j] (mod 2)
  // Use a vector to store the operations
  std::vector<int> x(N, 0);  // x[i] = 1 if we operate at index i

  // Step 3: Solve the system using Gaussian elimination over GF(2)
  // For simplicity, we'll solve directly based on the pattern we observed
  // Instead of full Gaussian elimination, we can use the fact that
  // the system can be solved by propagating constraints
  std::vector<int> target(N);
  for (int i = 0; i < N; i++) {
    target[i] = S[i] - '0';
  }

  // We'll try to solve by choosing x[0] and propagating
  // Let's try both x[0] = 0 and x[0] = 1 and take the minimum
  int min_ops = N + 1;  // More than maximum possible operations
  for (int x0 = 0; x0 <= 1; x0++) {
    std::vector<int> curr_x(N, 0);
    curr_x[0] = x0;

    // Build the solution iteratively
    bool possible = true;
    std::vector<int> bulb_state(N, 0);  // Number of toggles on each bulb

    // Compute the effect of each operation
    for (int i = 0; i < N - 1; i++) {
      // How many times is bulb i toggled so far?
      // Bulb i is affected by operation i-1 (if i > 0) and operation i
      int toggles = 0;
      if (i > 0) toggles ^= curr_x[i - 1];
      toggles ^= curr_x[i];

      // We need bulb i to match target[i] after all toggles
      // So, we decide curr_x[i+1] based on the need
      if (toggles != target[i]) {
        if (i < N - 1) {
          curr_x[i + 1] = 1;
        } else {
          // Last bulb, check if we can satisfy with curr_x[0]
          int last_toggles = curr_x[N - 1] ^ curr_x[0];
          if (last_toggles != target[N - 1]) {
            possible = false;
          }
        }
      }
    }

    if (!possible) continue;

    // Count operations
    int ops = 0;
    for (int i = 0; i < N; i++) {
      if (curr_x[i] == 1) ops++;
    }
    min_ops = std::min(min_ops, ops);
  }

  return min_ops == N + 1 ? -1 : min_ops;
}

int main() {
  int N;
  std::string S;
  std::cin >> N >> S;

  int result = solve(N, S);
  std::cout << result << std::endl;

  return 0;
}