#include <iostream>
using namespace std;

// class 1
class Shape 
{
public:
    int l, b;

    void getData() 
    {
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter breadth: ";
        cin >> b;
    }
};

// class 2
class Display 
{
public:
    void showArea(float area) 
    {
        cout << "Area is: " << area << endl;
    }
};

class Rectangle : public Shape, public Display 
{
public:
    void area() 
    {
        int a = l * b;
        showArea(a); 
    }
};

class Circle : public Shape, public Display 
{
public:
    void getData() 
    {
        cout << "Enter diameter of circle: ";
        cin >> l;
    }

    void area() 
    {
        float radius = l / 2.0;
        float a = 3.1416f * radius * radius;
        showArea(a);  
    }
};

int main() 
{
    Circle c;
    Rectangle r;

    cout << "\n   Circle   \n";
    c.getData();
    c.area();

    cout << "\n   Rectangle   \n";
    r.getData();
    r.area();

    return 0;
}
