#include<iostream>
using namespace std;

class test
{
    static int count;
    public:
	   test()
	    {
	        count++;
			cout<<"\n \n Constructor Msg: Object Number"<<count<<"created..";
		}
		
		~test()
		{
		    cout<<"\n \n Destructor Msg:Object Number"<<count<<"destroyed..";
			count--;
		}
};
int main()
{
     cout<<"Inside the main block.."<<endl;
	 cout<<"\n \nCreating First Objects..T1"<<endl;
	 test T1;
	 {    
	      //Block1
	      cout<<"\n \n Inside Block 1..";
		  cout<<"\n \n Creating two more objects T2 and T3..";
		  test T2,T3;
		  cout<<"\n \n Leaving Block 1..";
		  
	 }
	 cout<<"\n \n Inside the main block";
	 return 0;
}
		  

