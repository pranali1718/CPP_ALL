#include<iostream>
using namespace std;

class Base
	{
	int x;
	public:
	Base()
{
	cout<< "Base default "<<endl;
}
};
class Derived : public Base
{
	int y;
	public:
Derived()
{
	cout << "Derived default" << endl;
}
Derived(int i)
{
	cout<< "Derived P C" << endl;
}
};
int main()
{
Base b;
Derived d1;
Derived d2(10);
return 0;
}
