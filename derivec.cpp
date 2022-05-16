/*#include<iostream>
 using namespace std;

class base1
{
	protected:
	int i;
	public:
	base1(int x)
{
	i=x;
	cout << "contructing base1\n";
}

~base1()
{
	cout <<	"Destructing base1\n";
}
};
class base2 
{
	protected:
	int k;
	public:
	base2(int x)
{
	k=x;
	cout << "contructing base2\n";
}
~base2()
{
	cout <<	"Destructing base1\n";
}
};

class derived : public base1, public base2
{
	int j;
	public:
	derived(int x,int y,int z) : base1(y) , base2(z)
{
	j=x;
	cout << "Destructing Derived \n";
}
void show()
{
	cout <<i<< " " <<j<<" "<<k;
}
};
int main()
{
derived ob(3,4,5);
ob.show();
return 0;
}

*/

//pointer and obj cont....//

#include<iostream>
using namespace std;

class demo
{
	int i;
	public:
		demo(int x)
	{
	i=x;
	}
int getdata()
{
return i;
}
};

int main()
{
	demo d(55),*ptr;
	ptr=&d;
	cout<<ptr->getdata()<<endl;

return 0;
}
