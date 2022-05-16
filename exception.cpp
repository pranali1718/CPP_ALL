
/*
#include<iostream>
using namespace std;

int main()
{
	int n1,n2,ans;
	cout<<"Enter 1st NO:\t";
	cin>>n1;
	cout<<"Enter 2nd NO:\t";
	cin>>n2;

	try 
	{
		if(n2==0)
		{
			throw n2;
		}
		else 
		{
			ans=n1/n2;
			cout<<"\nThe Result is:"<<ans;
		}
	}
	catch(int x)
	{
	cout<<"\nCan't devide by:"<<x;
	}
	cout<<"\nEnd of the prorgam.";
}

*/
/*
#include<iostream>
using namespace std;

int main()
{
	int n1,n2,ans;
	cout<<"Enter 1st NO:\t";
	cin>>n1;
	cout<<"Enter 2nd NO:\t";
	cin>>n2;

	try 
	{
		if(n2!=n1)
			{
			float div=(float)n2/n2;
			if(div<0)		
				throw 'e';
			cout<<"Deivison is :"<<ans;
			}
		else 
		{
			throw n2;
		}
	}
	catch(int e)
	{
		cout<<"\nException: divison by zero\n";
	}
	catch(char st)
	{
		cout<<"\nException: division is less than 1\n";
	}
	catch(...)
	{
		cout<<"\nException:Unknown\n";
	}
return 0;
}*/

//rethrowing//
/*
#include<iostream>
using namespace std;

int main()
	{
	int a=1;
	try
	{ 	
		try
		{
			throw a;
		}	
	
		catch(int x)
		{	
			cout<<"\Exception in inner try catch block .";
			throw x;	
		}

	}	




*/

/*
//restricting exception//

#include<iostream>
using namespace std;

int main()
{
try
{
void Demo();
}
	throw(int,double)
	{
	int a=2;
		if(a==1)
	throw a;
		else if(a==2)
	throw'A';
		else if(a==3)
	throw 4.5;
}
	catch(int n)
	cout<<"Welcome";
return 0;
}

*/
//exception handling in oop1//
/*
#include<iostream>
using namespace std;

class Test
{
	int x;
	public:
	void read()

	{
	cout<<"enter Number: ";
	cin>>x;
	}
class EVEN{};
class ODD{};
void check()
		{
		if(x%2==0)
			throw EVEN();
		else
		throw ODD();
}
};
int main()
{
	Test t;
	t.read();
	try 
	{
		t.check();
	}
	catch(Test::EVEN)
	{
		cout<<"Number is even";	
	}
	catch(Test::ODD)
	{
		cout<<"Number is odd";	
	}
	return 0;

}
*/



///exxception thrown outside the 'try' block//

/*
#include<iostream>
using namespace std;

void Xtest(int  test)
	{
	cout<<"Inside the Xtest,test is:"<<test<<"\n";
	if(test)throw test;
	}

int main()
{
	cout<<"Start\n";
	try
	{
		cout<<"INSIDE TRY BLOCK\n";
		Xtest(0);
		Xtest(1);
		Xtest(2);
	}
	catch(int i)
	{
	cout<<"Caught an exception--value is:";
	cout<<i<<"\n";
	}
	cout<<"End";
	return 0;
}

*/
/*
// standard exception//

#include<iostream>
#include<exception>
using namespace std;

int main()
{
	try 
	{
		int* myarray=new int[100];
	}
	catch(exception &e)
	{
		cout<<"Standard exception"<<e.what()<<endl;
	}
return 0;
}
*/

////
/*
#include<iostream>
#include<exception>
using namespace std;

class MyException:public exception
{
	public:
	const char *what() const throw()
	{
		return "Attempted to divide by zero!\n";
	}
};

int main()
{
	try 
	{
		int x,y;
		cout<<"Enter two number:\n";
		cin>>x>>y;
		if(y==0)
		{
			MyException z;
			throw z;
		}
		else
			cout<<"x/y="<<x/y<<endl;
	}
	catch (exception &e)
	{
		cout<<e.what();
	}
return 0;
}

*/
/*
//exception handling inheritance//
#include<iostream>
#include<exception>
using namespace std;


class Base{};
class Derived:public Base{};

int main()
{
	try
	{
		throw Derived();
	}
	catch(Base b)
	{
		cout<<"Base object caught";
	}
	catch (Derived d)
	{
		cout<<"Derived object caught";
	}
return 0;
}
*/
//exception handling in constructord and destructors//

#include<iostream>
#include<exception>
using namespace std;

class Divide
{
	private:
		int *x;
		int *y;
	public:
	Divide()
	{
		x=new int();
		y=new int();
		cout<<"Enter Two NUmbers:";
		cin>> *x>>*y;
	try
	{
		if(*y==0)
		{
			throw *x;
		}
	}
	catch(int)
	{
		delete x; delete y;
		cout<<"second number can't be zero!"<<endl;
		throw;
	}
}
~Divide()
{
	try
	{
	delete x;delete y;
	}
	catch(...)
	{
	cout<<"Eroor while deallocating memeory"<<endl;
	}
}
float division()
	{
		return(float)*x/ *y;
	}
};

int main()
{
	try
	{
		Divide d;
		float res=d.division();
		cout<<"Result of division is:"<<res;
	}
	catch(...)
	{
		cout<<"Unknown exception!"<<endl;
	}
return 0;
}





















