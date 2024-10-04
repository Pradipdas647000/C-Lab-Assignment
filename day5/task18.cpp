#include <iostream>
#include <cmath>

class AreaCalculator {
public:
    double areaTriangle(double base, double height) {
        return 0.5 * base * height;
    }

    double areaCircle(double radius) {
        return M_PI * radius * radius;
    }

   double areaRectangle(double length, double width) {
        return length * width;
    }
};

int main() {
    AreaCalculator calc;

    double triangleBase = 5.0, triangleHeight = 10.0;
    std::cout << "Area of Triangle: " << calc.areaTriangle(triangleBase, triangleHeight) << std::endl;

    double circleRadius = 7.0;
    std::cout << "Area of Circle: " << calc.areaCircle(circleRadius) << std::endl;

    double rectangleLength = 8.0, rectangleWidth = 4.0;
    std::cout << "Area of Rectangle: " << calc.areaRectangle(rectangleLength, rectangleWidth) << std::endl;

    return 0;
}
