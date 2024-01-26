#include <iostream>
using namespace std;

class Point {
private:
    double x, y;

public:
    // Constructor 
    Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    void setX(double newX) {
        x = newX;
    }

    void setY(double newY) {
        y = newY;
    }

    // Method to calculate distance between two points
    double distance(const Point& other) const {
        double dx = x - other.x;
        double dy = y - other.y;
        return (dx * dx + dy * dy)*(dx * dx + dy * dy);
    }
};

int main() {

    Point p1(1.0, 2.0);
    Point p2(4.0, 6.0);

    cout << "Initial coordinates:\n";
    cout << "Point 1: " << p1.getX() << ", " << p1.getY() <<endl;
    cout << "Point 2: " << p2.getX() << ", " << p2.getY() << endl;

    // Calculate and display distance between points
    cout << "Distance between points: " << p1.distance(p2) << endl;

    return 0;
}
