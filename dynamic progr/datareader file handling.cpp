#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
	ifstream datareader("myfriend.txt",ios::in);
	{if (datareader)
	{ string name,s;int k;
	long phonenumber;
	long enroll;
	string branch;
	cin>>s;
	for(int i=1;i<2;i++){
	

	datareader>>k>>name>>phonenumber>>enroll>>branch;
	if(s==name)
	{
	cout<<i;
	cout<<i<<"\t"<<name<<"\t"<<phonenumber<<"\t"<<enroll<<"\t"<<branch;
		break;
		
		}
		
		}
		
		
		}	
		
	

	else
	cout<<"file not found";
	
	datareader.close();}return 0;}
