#include<iostream>
using namespace std;

class shape 
{
public:
    int l;
    int b;

    void get data() 
    {
        cout << "Enter the length of shape: ";
        cin >> l;
        cout << "Enter the breadth of shape: ";
        cin >> b;
    }
};

class circle : public shape 
{
public:
    void area() {
        // Assuming l is diameter for simplicity
        float radius = l / 2;
        float area = 3.1416 * radius * radius;
        cout << "Area of circle is: " << area << endl;
    }
};

class rectangle : public shape 
{
public:
    void area() {
        int area = l * b;
        cout << "Area of rectangle is: " << area << endl;
    }
};

int main() 
{
    circle c;
    rectangle r;

    cout << "\nCircle:\n";
    c.getdata();
    c.area();

    cout << "\nRectangle:\n";
    r.getdata();
    r.area();

    return 0;
}