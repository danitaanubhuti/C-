#include<iostream>
#include<cstring>
using namespace std;
class palindrome
{
   char string[30];
   int check(char *);
   public:
      int display()
	  {
	      cout<<"enter a string";
		  cin>>string;
		  if(check(string))
		       cout<<"palindome";
		  else
		  cout<<"not palindrome";
		  return 0;
	  }
};
int palindrome::check(char string[])
{
    int length,i;
	length=strlen(string);
	for(i=0;i<length/2;i++)
	   if(string[i]!=string[length-1-i])
	      return 0;
	return 1;
}
int main()
{
    palindrome p1;
	p1.display();
	return 0;
}

