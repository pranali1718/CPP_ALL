#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<char> v(10);
	vector<char>::iterator p;
	int i;
	p=v.begin();
	i=0;
	while(p != v.end())
		{
		*p=i+'a';
		p++;
		i++;
		}
cout<<"Original Contents:\n"<<endl;
p=v.begin();
	while(p != v.end())
		{
		cout<<*p<<" \n"; p++;
		}
p=v.begin();
	while(p != v.end())
		{
		*p=toupper(*p); p++;
		}
cout<<"Modified Contents:\n"<<endl;
p=v.begin();
	while(p != v.end())
		{
		cout<<*p<<" \n";  p++;
		}
		}
