#include <iostream>
using namespace std;
class Employee{
    protected:
    int id;
    char name[20];
    public:
    void getData()
    {
        cout<<"Enter the ID of the Employee: ";
        cin>>id;
        cout<<"Enter the name of the Employee: ";
        cin>>name;
    }
    void display()
    {
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
    }
};
class Manager: public Employee{
    protected:
    int salary;
    public:
    void getData()
    { 
     Employee::getData();
     cout<<"Enter the salary of the Employee: ";
     cin>>salary;
    }
    void display()
    {
        Employee::display();
        cout<<"Salary: "<<salary<<endl;
    }
};
class project_manager: public Manager{
    int total_experience, projects;
    public:
    void getData()
    {
     Manager::getData();
     cout<<"Enter the total experience in years and the no. of projects handled: ";
     cin>>total_experience>>projects;
    }
    void display()
    {
        Manager::display();
        cout<<"Total Experience : "<<total_experience<<endl;
        cout<<"Projects: "<<projects<<endl;
    }
};
int main()
{
    project_manager K1;
    K1.getData();
    K1.display();
    return 0;
}
