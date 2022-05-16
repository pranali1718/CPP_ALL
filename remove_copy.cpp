#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	char str[]="i love c++";
	vector<char>v,v2(30);
	int i;
	for(i=0;str[i];i++)
		v.push_back(str[i]);
	cout<<"Input sequence:\n";
	for(i=0;i<v.size();i++)
		cout<<v[i];
		cout<<endl;

remove_copy(v.begin(),v.end(),v2.begin(),' ');
		cout<<"Result after remove spaces:\n";
	for(i=0;i<v2.size();i++)
		cout<<v2[i];
		cout<<endl<<endl;


//now here use it for replace_copy
	//cout<<"Input Sequnce:\n";
	//for(i=0;i<v.size();i++)
	//cout<<v[i];
	//cout<<endl;
replace_copy(v.begin(),v.end(),v2.begin(),' ',':');
	cout<<"final result after replce space with colons:\n";
	for(i=0;i<v2.size();i++)
		cout<<v2[i];
		cout<<endl;
	return 0;
}	
