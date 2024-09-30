#include <iostream>
#include "rectangle.h"
#include "triangle.h"
#include "square.h"
#include "circle.h"
#include "filewriter.h"

int main() {
    double x, y, width, height, side, radius;
    
    std::cout << "Enter rectangle's x, y, width, height: ";
    std::cin >> x >> y >> width >> height;
    Rectangle rect(x, y, width, height);

    std::cout << "Enter triangle's three points (x1, y1, x2, y2, x3, y3): ";
    double x1, y1, x2, y2, x3, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    Triangle tri(x1, y1, x2, y2, x3, y3);

    std::cout << "Enter square's x, y, side length: ";
    std::cin >> x >> y >> side;
    Square sq(x, y, side);

    std::cout << "Enter circle's x, y, radius: ";
    std::cin >> x >> y >> radius;
    Circle circ(x, y, radius);
    
    FileWriter writer("output.dat");

    rect.writeToFile(writer.getStream());
    tri.writeToFile(writer.getStream());
    sq.writeToFile(writer.getStream());
    circ.writeToFile(writer.getStream());

    std::cout << "Data written to output.dat. Use the following command to plot:\n";
    std::cout << "plot 'output.dat' with lines\n";

    return 0;
}
