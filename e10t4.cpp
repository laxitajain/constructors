#include <iostream>
using namespace std;
class rectangle{
 protected:
 float length,width;
 public:
 rectangle(){}
 rectangle(float l, float w)
 {
    length=l;
    width=w;
 }
 float area()
 {
   return length*width;
 }
};
class box: public rectangle{
 float depth;
 public:
 box(float x, float y, float d): rectangle(x,y)
 {
  depth=d;
 }
 float area()
 {
   return (2*((length*width)+(width*depth)+(depth*length)));
 }
};
int main()
{ rectangle K(2.0,3.0);
  box K1(2.0,3.0,4.0);
  cout<<"The area of the rectangle is: "<<K.area()<<endl;
  cout<<"The area of the cuboid is: "<<K1.area()<<endl;
  return 0;
}


