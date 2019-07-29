#include<iostream>
using namespace std;
class temp
{
   int f,c;
   public:
        void display(int x);
		int tempcov(int a)
		{
		   f=a;
		   c=(f-32);
           c=c/2;
		   return c;
		}
};
void temp::display(int x)
{
   cout<<"entered value is=  "<<x;
}
int main()
{
  int a,k;
  cout<<"enter a temperature in fareinheit";
  cin>>a;
  temp d1;
  k=d1.tempcov(a);
  d1.display(k);
  return 0;
}
   
 

