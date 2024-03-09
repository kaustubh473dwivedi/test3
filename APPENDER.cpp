#include <iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{

ofstream appender("myfriend.txt",ios::app);//making CHANGES  in the system FILE
{
	if(appender)
	{
for(int i=1;i<3;i++)
{
	appender<<i<<"\t";
string name;
cin>>name;
appender<<name<<"\t";
long phonenumber;
cin>>phonenumber;
appender<<phonenumber<<"\t";
long enroll;
cin>>enroll;
appender<<enroll<<"\t";
string branch;
cin>> branch;
appender<<branch<<endl;
	

		}		
		
	}
else
cout<<"file not found";
appender.close();
}


return 0;

}

