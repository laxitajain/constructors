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
    Complex(float r, float i)
    {
        real=r;
        imag=i;
    }
    void add(Complex C1, Complex C2)
    {

        real=C1.real+C2.real;
        imag=C1.imag+C2.imag;

    }
    void show()
    {   if(imag<0)
          cout<<real<<imag<<"i"<<endl;
        else
          cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main()
{
    Complex K1(2,-3);
    Complex K2(3,2),result;
    cout<<"First complex number: ";
    K1.show();
    cout<<"Second complex number: ";
    K2.show();
    result.add(K1,K2);
    cout<<"The addition of the two complex numbers is: ";
    result.show();
    return 0;
}
