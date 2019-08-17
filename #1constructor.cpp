//constructor in a class
#include<iostream>
using namespace std;
class point
{
	int x,y;
	public:
	     point(int x,int y);   //contructors (has same name as class name)
		 void display()
		 {
		 	cout<<"("<<x<<","<<y<<")\n"<<endl;
		 }
};
point::point(int a,int b)//declaring constructor outside the class
		 {
		 		x=a;
				y=b;
		 }
int main()
{       
        int a ,b;
		cout<<"enter 2 values";
		cin>>a>>b;       
 		point p1(a,b);  //implicit call          
		point p2=point(5,10);  //explicit call (class_name obj_name= class_name(parameters))
		cout<<"Point p1= ";
		p1.display();
		cout<<"Point p2= ";
		p2.display();
		return 0;
}

