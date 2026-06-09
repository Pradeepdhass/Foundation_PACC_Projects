#include <iostream>
using namespace std;

class Area
{
public:
    void area(float r)
    {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }

    void area(float l, float b)
    {
        cout << "Area of Rectangle = " << l * b << endl;
    }

    void area(float b, float h, int)
    {
        cout << "Area of Triangle = " << 0.5 * b * h << endl;
    }
};

int main()
{
    Area obj;
    obj.area(5);          
    obj.area(4, 6);       
    obj.area(4, 8, 0);    
    return 0;
}
