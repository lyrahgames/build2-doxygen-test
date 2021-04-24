/// @file
#include <iostream>

/**
 * @brief Compute square root of argument.
 * @details This function computes the square root of the given argument.
 * @see main
 */
template <typename T>
constexpr T sqrt(T x) {
  return x;
}

/// @brief    The main function.
/// @details  More details.
/// @see      sqrt
int main(int argc, char* argv[]) {
  using namespace std;

  if (argc < 2) {
    cerr << "error: missing name" << endl;
    return 1;
  }

  cout << "Hello, " << argv[1] << '!' << endl;
}
