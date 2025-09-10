#include <iostream>
using namespace std;

int empcount = 0;
string name;

class Employee
{
    public:
    void empadd(string empname)
    {
        name = empname;
        empcount++;
        cout << "Employee added: " << name << endl;
        cout << "Total count: " << empcount << endl;
    }
};

int main()
{
    Employee e1,e2;
    
    cout << "Enter employee name: ";
    cin >> name;
    e1.empadd(name);
    
    cout << "Enter employee name: ";
    cin >> name;
    e2.empadd(name);
    
    
    return 0;
}