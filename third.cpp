
#include <iostream>
using namespace std;
class Box {
    private: double width;
             double length;
             double height;
   
    public: 
        Box() {

            cout << "Box is created by default constructor!" << endl;
        }
        Box(double w1, double h1, double l1)
        {
            set(w1, h1, l1);
            cout << "Box is created by parameterized constructor!\nVolume of the box is:" << w1 * l1 * h1 << endl;
        }
        ~Box() {

            cout << "Box destroyed by destructor!" << endl;

        }
        void SetWidth(int wi)
    {
        width = wi;
    }
        void SetLength(int le)
    {
        length = le;
    }
        void SetHeight(int he)
    {
        height = he;
    }
        double GetWidth()
    {
        return width;
    }
        double Getlength()
    {
        return length;
    }
        double Getheight()
    {
        return height;
    }
        void set(double wi, double le, double he) {
        length = le;
        height = he;
        width = wi;
    }
        double calculateVolume(Box x)
    {
        return x.Getheight() * x.Getlength() * x.GetWidth();
    }
};

int main()
{

    double wi, len, hi;
    for (int counter = 0; counter < 10; counter++)
    {
        
        if (counter % 2 == 0)
        {
            cout << "Enter the width" << endl; cin >> wi;
            cout << "Enter the length" << endl; cin >> len;
            cout << "Enter the height" << endl; cin >> hi;
            Box box(wi, len, hi);
           
        }
        else
        {
            cout << "Enter the width" << endl; cin >> wi;
            cout << "Enter the length" << endl; cin >> len;
            cout << "Enter the height" << endl; cin >> hi;
            Box box;
            box.SetWidth(wi);
            box.SetLength(len);
            box.SetHeight(hi);
            
            cout << "Volume of the box is : " << box.calculateVolume(box)<< endl;
        }
    }
}

