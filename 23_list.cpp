#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int>lst;
	int i;
	for(i=0;i<10;i++)
		lst.push_back(i);
	cout<<"Size= "<<lst.size()<<endl;
	cout<<"Contents: ";
	list<int>::iterator p=lst.begin();
	while(p!=lst.end())
	{
		cout<<*p<<" \n";
		p++;
	}
	cout<<"\n\n";
	p=lst.begin();
	while(p!=lst.end())
		{
			*p=*p+100;
			p++;
		}
	cout<<"Contents Modified: ";
	p=lst.begin();
	while(p!=lst.end())
		{
			cout<<*p<<" \n";
			p++;
		}
	//for(i=10;i>0;i--)
	//cout<<"reverse Contents : ";
	//p=lst.begin();
	//while(p!=lst.end())
		//{
		//	cout<<*p<<" \n";
			//p--;
		//}
	return 0;
}

