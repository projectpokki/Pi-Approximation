#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>

const int iterations = 20; //change value to how many iterations you want to run

int main() {
  std::map<double, double> heightOfX;
  heightOfX[0] = 1;

  double area = 1;
  for (int i = 1; i <= iterations; i++) {
    int slices = pow(2, i);
    for (int j = 1; j < slices; j += 2) {
      double xPos = static_cast<double>(j) / slices;
      heightOfX[xPos] = sqrt(1.0 - pow(xPos, 2));
      area -= ((heightOfX[xPos - (1.0 / slices)] - heightOfX[xPos]) / slices);
    }
    std::cout << "iteration " << i << ":\t" << std::setprecision(16) << area * 4 << "\n";
  }
  return 0;
}
