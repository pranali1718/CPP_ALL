//21 march//
/*
#include<iostream>
using namespace std;

template<class T1,class T2>
class sample
{
	T1 a;T2 b;		
	public:void getdata()
	{
		cout<<"Enter A & B"<<endl;
		cin>>a>>b;
	}
	void display()
	{
		cout<<"the values:"<<endl;
		cout<<"a:"<<a<<"b:"<<b<<endl;
	}
};
int main()
{
	sample<int,int>s1;
	sample<int ,double>s2;
	sample<double, double>s3;
	cout<<"Integer data:"<<endl;
	s1.getdata();
	s1.display();

	cout<<"Int and Double data:"<<endl;
	s2.getdata();
	s2.display();

	cout<<"Double and Double data:"<<endl;
	s3.getdata();
	s3.display();


return 0;
}
*/

//template overloading program://

#include<iostream>
using namespace std;

template<class T1>
void sum(T1 a,T1 b,T1 c)
{
	cout<<"sum:"<<a+b+c<<endl;
}

template<class T1,class T2>
void sum(T1 a,T2 b,T1 c)
{
	cout<<"sum:"<<a+b+c<<endl;
}

void sum(int a,int b)
{
	cout<<"sum:"<<a+b <<endl;
}

int main()
{
	int a,b;
	float x,y,z;
	cout<<"Enter 2 in int's"<<endl;
	cin>> a >> b; 
	cout<<"Enter 3 in double"<<endl;
	cin>> x >> y >>z; 
	sum(x,y,z);
	sum(a,b);
	sum(a,x,b);
		
	return 0;
}


