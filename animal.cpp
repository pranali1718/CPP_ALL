#include<iostream>

using namespace std;

class Animal
{	
	public:
		int legs=4;
		 void disp1()
		{
	cout << "inside animal";
}
};

class Dog : public Animal
{
	public:
		int tail=1;
		void disp2()
		{
	cout << "insdie dog";
}
};

main()

{
	Animal A1;Dog d1;
 A1.disp1();
 //A1.disp2();
 d1.disp1();
 d1.disp2();
}	
