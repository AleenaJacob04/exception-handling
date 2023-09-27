#include<iostream>
using namespace std;
main()
{
	int age;
	cout<<"enter the age";
	cin>>age;
	try
	{
		if(age<18)
		throw("enter the age");
		cout<<"eligible";
	}
	catch(const char*age){
		cout<<age;
	}
	return 0 ;
	
}
