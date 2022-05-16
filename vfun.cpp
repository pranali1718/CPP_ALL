//virtual funcations on 10th march//
/*
#include<iostream>
using namespace std;

class Base
{
	public:	
	virtual void show()
	{
	cout<<"Base\n";
	}
};
class Derv1 : public Base
{
	public:
	void show()
	{
	cout<<"Derv1\n";
	}
};
class Derv2 : public Base
{
	public:
	void show()
	{
	cout<<"Derv2\n";
	}
};

int main()
{
Derv1 dv1;
Derv2 dv2;
Base* ptr;
ptr =&dv1;
ptr->show();
ptr =&dv2;
ptr->show();
}*/


/*
///Pure virtual function//

#include<iostream>
using namespace std;

class Shape
{
	protected:	
	float x;
	public:
	void getData()
	{
	cin>>x;
	}
	virtual float calculateArea()=0;
};

class Square : public Shape
{ 
	public:
	float calculateArea()
	{
	return x*x;
	}
};

class Circle : public Shape
{ 
	public:
	float calculateArea()
	{
	return 3.14*x*x;
	}
};

int main()

{
Square s1;
Circle c1;
cout<<"enter lenght to caclulate area of square : \n";
s1.getData();
cout<<"area of square : \n"<<s1.calculateArea();
cout<<"\nenter radius to caclulate area of circle : ";
c1.getData();
cout<<"\narea of circle : "<<c1.calculateArea();
}
*/


#include<iostream>
using namespace std;


class convert
{
protected:
double var1, var2;
public:
convert(double i)
{
var1 = i;
}


double getconv()
{
return var2;
}


double getinit()
{
return var1;
}

virtual void compute() = 0;
};


//litlre to gallonns


class l_g : public convert
{
public:
l_g(double i) : convert(i) { }

void compute()
{
var2 = var1/3.7854;
}
};


class f_c : public convert
{
public:
f_c(double i) : convert(i) { }


void compute()
{
var2 = (var1-32)/1.8;
}
};

int main()
{
convert *p;
l_g lg(4);
f_c fc(70);


p=&lg;
cout << p->getinit() << " litres is: ";
p->compute();
cout << p->getconv() << " gallons\n";

p=&fc;
cout << p->getinit() << " Farehnite is: ";
p->compute();
cout << p->getconv() << " Celcius\n";



return 0;
}

