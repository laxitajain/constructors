#include <iostream>
#include <string.h>
using namespace std;
class Employee{
    int Emp_id,Emp_sal;
    char Emp_name[20];
    public:
    Employee(int id, char k[20], int sal)
    {
       Emp_id=id;
       strcpy(Emp_name,k);
       Emp_sal=sal;
    }
    void display()
    {
        cout<<"ID: "<<Emp_id<<endl;
        cout<<"Name: "<<Emp_name<<endl;
        cout<<"Salary: "<<Emp_sal<<endl;
    }
};
int main()
{   int id1,id2,sal1,sal2;
    char n1[20],n2[20];
    cout<<"Enter the ID, name and salary of the first Employee: ";
    cin>>id1>>n1>>sal1;
    Employee K1(id1,n1,sal1);
    cout<<"Enter the ID, name and salary of the second Employee: ";
    cin>>id2>>n2>>sal2;
    Employee K2(id2,n2,sal2);
    cout<<"Details of employee 1: "<<endl;K1.display();
    cout<<"Details of employee 2: "<<endl;K2.display();
    return 0;
}
