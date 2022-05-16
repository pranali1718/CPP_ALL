/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream outfile;
	outfile.open("data.txt");
	outfile<<"This is my file";
	long pos =outfile.tellp();
	outfile.seekp(pos+6);
	outfile<<"Again my file";
	outfile.close();
	cout<<"Done";
return 0;
}
*/

//read and write example//
/*
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream fp;
	char buff[100];
	int pos;
	fp.open("data.txt",ios::out|ios::ate);
	cout<<"Writing to a fiile"<<endl;
	fp<<"Liiine one "<<endl;
	fp<<"Line two "<<endl;
	pos=fp.tellg();
	cout<<"Current position:"<<pos<<endl;
	fp.seekp(-7,ios::cur);
	fp<<endl<<"random data";
	fp.seekp(7,ios::beg);
	fp<<" hello world ";
fp.close();
cout<<"Done  Wrting"<<endl;
fp.open("data.txt");
cout<<"reading the file"<<endl;
fp.seekg(0);
while(fp.getline(buff,100))
	cout<<buff<<endl;
pos=fp.tellg();
cout<<"poijnter is at:"<<pos<<endl;
return 0;
}*/
