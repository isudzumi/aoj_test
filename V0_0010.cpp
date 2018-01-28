/**
 * Circumscribed Circle of a Triangle
 */
#include <cmath>
#include <iomanip>
#include <iostream>
#include <memory>
#include <utility>
using namespace std;
using Point = pair<double, double>;

constexpr double EPS = 1e-5;

class Triangle {
 private:
  Point x, y, z;
  double ex, ey, ez;  // Length
  double ax, ay, az;  // Radian

  double getLength(Point& a, Point& b) {
    // return sqrt(powf(a.first - b.first, 2) + powf(a.second - b.second, 2));
    return hypot((a.first - b.first), (a.second - b.second));
  }

  double getRadian(double& a, double& b, double& c) {
    // Use of law of cosines
    return acos((pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2.0 * b * c));
  }

  double getCircumscribedPoint(double x, double y, double z) {
    double A = sin(2.0 * ax);
    double B = sin(2.0 * ay);
    double C = sin(2.0 * az);
    return ((x * A + y * B + z * C) / (A + B + C));
  }

 public:
  Triangle(Point& a, Point& b, Point& c)
      : x(a),
        y(b),
        z(c),
        ex(getLength(y, z)),
        ey(getLength(z, x)),
        ez(getLength(x, y)),
        ax(getRadian(ex, ey, ez)),
        ay(getRadian(ey, ez, ex)),
        az(getRadian(ez, ex, ey)) {}

  Point getCircumscribedCircle() {
    return make_pair(getCircumscribedPoint(x.first, y.first, z.first),
                     getCircumscribedPoint(x.second, y.second, z.second));
  }

  double getRadius() { return ex / sin(ax) / 2.0; }
};

int main() {
  int n;
  cin >> n;
  unique_ptr<Triangle> triangle;
  double x, y;
  Point coodinate[3];
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < 3; ++j) {
      cin >> x >> y;
      coodinate[j] = make_pair(x, y);
    }
    triangle = make_unique<Triangle>(coodinate[0], coodinate[1], coodinate[2]);

    Point cc = triangle->getCircumscribedCircle();
    double rad = triangle->getRadius();

    cout << fixed << setprecision(3) << cc.first << " " << cc.second << " "
         << rad << endl;
  }
}
