//file handling on 15b th march//

/*
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream myfile;
	myfile.open("file.txt",ios::in);
	
if(!myfile)
	cout<<"cant open the file"<<endl;
else
{
	cout<<"File opened"<<endl;
}
}*/

//all characters comes in one line//
/*
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream input;string str;
	input.open("file.txt");
	
if(!input)
	cout<<"file didnt open"<<endl;
else
{
while(getline(input,str))
	{
	cout <<str <<endl;
	}
}
}
*/


/*
//count the no fo words in file//
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
fstream fin;
fin.open("file.txt");
int count =0;
char word[30];
if(!fin)
	cout << "file did not open" << endl;
else
	{
	while(fin>>word)
		count++;
	}
cout << "Total Words:"<< count<<endl;
fin.close();
}
*/


/*
//count the no of line in file//
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
fstream fin;
fin.open("file.txt");
int count =0;
string str;
if(!fin)
	cout << "file did not open" << endl;
else
	{
	while(getline(fin,str))
		count++;
	}
cout << "Total Line:"<< count <<endl;
fin.close();
}
*/
/*
//copy content of one file to another file//
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream fin,fout;
	fin.open("file.txt");
	fout.open("file1.txt",ios::app);
	char ch;
	while(!fin.eof())
	{	
		fin.get(ch);
		fout<<ch;
	}

	cout << "copy done" << endl;

fin.close();
fout.close();
}
*/
//write()//
#include<iostream>
#include<fstream>
using namespace std;

class student
	{
		int roll;char name[25];float marks;
		void getdata()
		{
			cout<<"Enter Roll No :";
			cin>>roll ;
			cout<<"Enter Name :";
			cin>> name;
			cout<<"Marks :";
			cin>>marks;
		}
public:void AddRecord()
		{	
			fstream f; student stu;
		 	f.open("student.dat",ios::app|ios::in|ios::ate);
			stu.getdata();
		f.write((char*)&stu,sizeof(stu));
		f.close();
		}
void display()
	{	
			fstream f;student s;
			f.open("student.dat",ios::app|ios::in|ios::ate);
			f.read((char*) &s,sizeof(s));
			cout<<"Roll No:"<<s.roll<<"Name:"<<s.name<<"Marks:"<<s.marks<<endl;
			f.close();
	}
};
int main()
{
	student s;
	char ch='n';
	do
		{
		s.AddRecord();
		cout<<"Want add more?(y/n)"<<endl;
		char temp=getchar();
		ch=getchar();
		}
	while(ch=='y' ||ch=='Y');
	cout<<"Updated!!"<<endl;
}












