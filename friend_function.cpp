// using friend function to find sum in two different classes
#include<iostream>
using namespace std;
class ABC; //forward declaration
class XYZ
{
	int data;
	public:
		void setdata(int value)
		{
		    data=value;
		}
		friend void add(XYZ,ABC);
};
class ABC
{
    int data;
	public:
		void setdata(int value)
		{
		    data=value;
		}
		friend void add(XYZ,ABC);
};
void add(XYZ obj1, ABC obj2)
{
		cout<<obj1.data+obj2.data;
}
int main()
{
		XYZ X;
		ABC A;
		X.setdata(5);
		A.setdata(50);
		add(X,A);
		return 0;
}

