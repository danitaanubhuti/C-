#include<iostream>
using namespace std;
class shape
{
   private:
     float a;
   public:
      float area(int );
      int area(int, int );
      int area(int ,int ,int );
};
float shape::area(int r)
{
    a=r*r*3.14;
	return a;
}
int shape::area(int l,int b)
{
    a=l*b;
	return a;
}
int shape:: area(int l, int b, int h)
{
    a=l*b*h;
	return a;
}
int main()

{
  int r,a,l,b,m;
  shape c1;
  float f;
  cout<<"enter the shape to find area"<<"\n 1.Circle \n 2. Rectangle \n 3.Cube";
  cin>>m;
  switch(m)
  {
     case 1: cout<<"enter radius of circle";
	         cin>>r; 
			 f=c1.area(r);
			 cout<<"the area of cirle with radius "<<r<<"is "<<f;
			 break;
			 
	 case 2: cout<<"enter length and breadth of rectangle";
	         cin>>l>>b; 
			 f=c1.area(l,b);
			 cout<<"the area of rectangle with length "<<l<<"and breadth "<<b<<"is "<<f;
			 break;
	
	 case 3: cout<<"enter side of square";
	         cin>>a; 
			 f=c1.area(a,a,a);
			 cout<<"the area of cube with side length "<<a<<"is "<<f;
			 break;
			 
	default: cout<<"error";
	}
	return 0;
}

