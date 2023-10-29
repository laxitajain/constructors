#include <iostream>
using namespace std;
class Complex
{
    float real;
    float imag;
    public: 
    Complex(){
        real=0.0;imag=0.0;
    }
    void input()
    {
        cin>>real;
        cin>>imag;
    }
    Complex operator+(const Complex &C2)
    {
        Complex temp;
        temp.real=real+C2.real;
        temp.imag=imag+C2.imag;
        return temp;
    }
    void output()
    {   if(imag<0)
          cout<<real<<imag<<"i"<<endl;
        else
          cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main()
{
    Complex K1,K2,result;
    cout<<"Enter the real and imaginary parts of the first complex number: ";
    K1.input();
    cout<<"Enter the real and imaginary parts of the second complex number: ";
    K2.input();
    cout<<"First complex number: ";
    K1.output();
    cout<<"Second complex number: ";
    K2.output();
    result=K1+K2;
    cout<<"The addition of the two complex numbers is: ";
    result.output();
    return 0;
}