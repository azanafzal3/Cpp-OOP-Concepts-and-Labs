#include <iostream>
#include<cmath>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    Point() : x(0), y(0)
	 {}

    Point(int xx, int yy) : x(xx), y(yy)
	 {}

    // Copy constructor
    Point(const Point &p) : x(p.x), y(p.y)
	 {}

    // Accessors
    int getX() const
	 { return x; }
    int getY() const
	 { return y; }
};


class Line {
private:
    Point point1;
    Point point2;

public:
    Line() : point1(Point(4,6)), point2(Point(2,4)) 
	{}

    Line(int x1, int y1, int x2, int y2) : point1(Point(x1, y1)), point2(Point(x2, y2)) 
	{}

    Line(const Point &p1, const Point &p2) : point1(p1), point2(p2)
	 {}

    // Find slope
    float findSlope() {
        float slope = 0.0;
        int x1 = point1.getX();
        int y1 = point1.getY();
        int x2 = point2.getX();
        int y2 = point2.getY();

        if (x1 == x2) {
            cout << "Slope is undefined." << endl;
        }
        else {
            slope = (float)(y2 - y1) / (float)(x2 - x1);
        }

        return slope;
    }
    
    float findLength() {
        float length = 0.0;
        int x1 = point1.getX();
        int y1 = point1.getY();
        int x2 = point2.getX();
        int y2 = point2.getY();

        length = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

        return length;
    }

    Point& findMidPoint() {
        int x1 = point1.getX();
        int y1 = point1.getY();
        int x2 = point2.getX();
        int y2 = point2.getY();

        int midx = (x1 + x2) / 2;
        int midy = (y1 + y2) / 2;

        Point *midpoint = new Point(midx, midy);

        return *midpoint;
    }
};

int main() 
{
    Line l1;
    Line l2(2, 3, 4, 5);
    Point p1(1, 2);
    Point p2(3, 4);
    Line l3(p1, p2);
    Point p3 = p2;
     
    float slope1 = l1.findSlope();
    float slope2 = l2.findSlope();
    float slope3 = l3.findSlope();
    float length1 = l1.findLength();
    float length2 = l2.findLength();
    float length3 = l3.findLength();
    Point& mid1 = l1.findMidPoint();
    Point& mid2 = l2.findMidPoint();
    Point& mid3 = l3.findMidPoint();


    cout << "Coordinates of p1 are : (" << p1.getX() << ", " << p1.getY() << ")" << endl;
    cout << "Coordinates of p2 are : (" << p2.getX() << ", " << p2.getY() << ")" << endl;
    cout << "Coordinates of p3 are : (" << p3.getX() << ", " << p3.getY() << ")" << endl;
    cout << "Slope of l1: " << slope1 << endl;
    cout << "Slope of l2: " << slope2 << endl;
    cout << "Slope of l3: " << slope3 << endl;
    cout << "Line 1 Midpoint: (" << mid1.getX() << ", " << mid1.getY() << ")" << endl;
    cout << "Line 2 Midpoint: (" << mid2.getX() << ", " << mid2.getY() << ")" << endl;
    cout << "Line 3 Midpoint: (" << mid3.getX() << ", " << mid3.getY() << ")" << endl;
    
    delete &mid1;
    delete &mid2;
    delete &mid3;


    return 0;
}
