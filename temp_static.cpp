//prorgram for fun template and static varibles//
/*
#include<iostream>
using namespace std;

template<typename T>
void fun(const T &x)
{
	static int i=10;
	cout<<++i<<endl;
	return;
}

int main()

{
	fun<int>(1);
	fun<int>(2);
	fun<double>(10.1);
	return 0;
}
*/

#include<iostream>
using namespace std;
template<class X>
void Swap(X &a,X &b)
{
	X=temp;
	a=b;
	b=temp;
	cout<<"Inside Templlate swap"<<endl;	
}
void Swap(int &a,int &b)
{	
	int temp;
	temp=a;
	a=b;	
	b=temp;
	cout<<"Inside int specilization"<<endl
}
int main()
{
	int i=10,j=20;
	double x=10.1,y=23.3;
	char a='x';b='z';
	cout<< "Original i,j:"<< i <<' '<< j <<endl;
	cout<< "Original x,y:"<< x <<' '<< y <<endl;
	cout<< "Original a,b:"<< a <<' '<< b <<endl;
	Swap(i,j);
	Swap(x,y);
	Swap(a,b);
	cout << "Swapped i,j:"<< i <<' '<<j <<endl;
	cout << "Swapped x,y:"<< x <<' '<<y <<endl;
	cout << "Swapped a,b:"<< a <<' '<<b <<endl;
return 0;
}
