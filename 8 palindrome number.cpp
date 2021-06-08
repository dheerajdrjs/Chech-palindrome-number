// WAP to chechk whether a number is Palindrome or not

#include<iostream>
using namespace std;

int main()
{
	int n,rem,sum=0,real;
	cout<<"Enter Number ";
	cin>>n;
	real=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(sum==real)
		cout<<endl<<real<<" is palindrome number";
	else
		cout<<endl<<real<<" is not palindrome number";
	
	return 0;
}
