#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

const int iterations = 10; //iterations

int main() {
  const long double roottwo = std::sqrt(2);
  
  std::vector<std::vector<long double>> posArray;
  std::vector<std::vector<long double>> nextArray;
  posArray.push_back({0, 0});

  long double area = 0;
  long double sideLength, sideSquared, sideHalf, inRadius;
  
  for (int i = 0; i < iterations; i++) {
    sideLength = 1 / pow(2, i);
    sideHalf = 0.5 * sideLength;
    sideSquared = sideLength * sideLength;
    inRadius = 1 - (roottwo * sideLength);

    for (std::vector<long double> & pos : posArray) {
      double posMag = std::sqrt(pos[0] * pos[0] + pos[1] * pos[1]);
      if (posMag <= inRadius) {
        if (pos[0] == pos[1]) {
          area += sideSquared * 0.5;
        } else {
          area += sideSquared;
        }
      } else if (posMag < 1) {
        nextArray.push_back({pos[0], pos[1]});
        nextArray.push_back({pos[0], pos[1] + sideHalf});
        nextArray.push_back({pos[0] + sideHalf, pos[1] + sideHalf});
        if (pos[0] != pos[1]) {
          nextArray.push_back({pos[0] + sideHalf, pos[1]});
        }
      }
    }
    posArray = nextArray;
    nextArray.clear();
    std::cout << std::setprecision(16) << area * 8 << "\n";
  }
}
