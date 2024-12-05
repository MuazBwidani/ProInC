#include <iostream>
using namespace std;
class Point {
private:
     float x, y, z;

public:
    float getX();
    float getY();
    float getZ();

    void setX(float x1);
    void setY(float y1);
    void setZ(float z1);
};
float Point::getX()
{
    return x;
};
float Point::getY()
{
    return y;
}
float Point::getZ()
{
    return z;
}

void Point::setX(float x1)
{
    x = x1;
}
void Point::setY(float y1)
{
    y = y1;
}
void Point::setZ(float z1)
{
    z = z1;
}
Point Space(Point a, Point b)
{
    Point m;
    m.setX((a.getX() + b.getX()) / 2);
    
    m.setY((a.getY() + b.getY()) / 2);
    
    m.setZ((a.getZ() + b.getZ()) / 2);
    
    return m;
}

int main() {
    float x_, y_, z_;
    Point p[3]{};

    for (int i = 0; i < 2; ++i)
    {
        cout << "Please enter x coordinate for p" << i + 1 << endl;
        cin >> x_;
        p[i].setX(x_);
        

        cout << "Please enter y coordinate for p" << i + 1 << endl;
        cin >> y_;
        p[i].setY(y_);
        
        cout << "Please enter z coordinate for p" << i + 1 << endl;
        cin >> z_;
        p[i].setZ(z_);
        
    }

    p[2] = Space(p[0], p[1]);

    cout << "Coordinations of middle point (p3) between p1 and p2 is x=" << p[2].getX() << ",y=" << p[2].getY() << ", z=" << p[2].getZ();

    return 0;
}

