#include<stdio.h>
using namespace std;

class ABC{
public:
	void setProtbMemb(int i){
	m_protMemb = =i; }
void Display(){
	cout<<m_protMemb<<endl;}
protected:
int m_protMemb;
void Protfunc(){
cout<<"\n Access Modifer \n";}
};

class XYZ : public ABC{
public:
	void useProtfunc()
	Protfunc() };
};


int main(){
ABC a; 
XYZ x;
a.m_protMemb();
a.setProtMemb(0);
a.Display();
a.Protfunc();
return 0;
}

