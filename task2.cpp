#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double x1, y1, x2, y2, x3, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  double A = sqrt(pow(x1, 2) + pow(y1, 2));
  double B = sqrt(pow(x2, 2) + pow(y2, 2));
  double C = sqrt(pow(x3, 2) + pow(y3, 2));

  if (((x1 == x2) and (y1 == y2)) or ((x2 == x3) and (y2 == y3)) or ((x3 == x1) and (y3 == y1)) or (A + B == C) or (B + C == A) or (C + A == B)) {
    cout << "This triangle does not exist!\n";
  } else {
    cout << sqrt((A + B + C) / 2 * ((A + B + C) / 2 - A) * ((A + B + C) / 2 - B) * ((A + B + C) / 2 - C));
  }
}