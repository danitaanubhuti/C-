//Swapping using pointers
#include<iostream>
using namespace std;
class swapping
{
    int a,b;
	public:
	  int swap(int *,int *);
	  
};
int swapping::swap(int *p, int *q)
{
     int temp;
	 temp=*p;
	 *p=*q;
	 *q=temp;
}	  

int main()
{
     swapping s1;
	 int a,b;
	     cout<<"enter two numbers";
         cin>>a>>b;
	     cout<<"Before Swap: \n a="<<a<<"  "<<"b="<<b<<endl;
	     s1.swap(&a,&b);
	     cout<<"After  Swap: \n a="<<a<<"  "<<"b="<<b;
	 return 0;
	 
	 
}

