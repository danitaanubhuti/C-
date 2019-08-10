#include<iostream>
using namespace std;
float area(int);
int area(int, int);
int area(int,int,int);
int main()
{
  int r,a,l,b,m;
  float f;
  cout<<"enter the shape to find area"<<"\n 1.Circle \n 2. Rectangle \n 3.Cube";
  cin>>m;
  switch(m)
  {
     case 1: cout<<"enter radius of circle";
	         cin>>r; 
			 f=area(r);
			 cout<<"the area of cirle with radius "<<r<<"is "<<f;
			 break;
			 
	 case 2: cout<<"enter length and breadth of rectangle";
	         cin>>l>>b; 
			 f=area(l,b);
			 cout<<"the area of rectangle with length "<<l<<"and breadth "<<b<<"is "<<f;
			 break;
	
	 case 3: cout<<"enter side of square";
	         cin>>a; 
			 f=area(a,a,a);
			 cout<<"the area of cube with side length "<<a<<"is "<<f;
			 break;
			 
	default: cout<<"error";
	}
	return 0;
}
float area(int r)
{
     float area;
	 area=(r*r)*3.14;
	 return area;
}
int area(int lenght, int breadth)
{
     int area;
	 area=lenght*breadth;
	 return area;
}
int area(int side,int b, int h)
{
     int area;
	 area=side*b*h;
	 return area;
}	  
	
			 
			 
			 
	 
			 

