#include <iostream>
#include<fstream>
#include<cstring>
using namespace std;
int p;
int main()
{

ofstream datawriter("gaandu madarchod",ios::out);//making a new file in the system

{
	for(int i=1;i<10;i++)
{
		string t;
	cin>>t;
	datawriter<<t<<endl;
	
}
datawriter.close();
}
cout<<endl<<endl<<endl;

ifstream datareader("gaandu madarchod",ios::in);
{

if(datareader)
{  	
string jatin_dekhe_piya_ko;
for(int i=1;i<=10;i++)
{

	datareader >> jatin_dekhe_piya_ko ;
	cout << jatin_dekhe_piya_ko<<endl;
	
	
	
}}
else
{
	cout<<"file hi exist nahi kar rahi hai fatherjaat";
	
}
datareader.close();
}

ofstream dataappender("gaandu madarchod", ios::app);
{ 
cout<<"enter the number of added strings";
cout<<endl;
cin>>p;
	for(int i=1;i<=p;i++)
	{
	
	string laude;
	cin>>laude;
	dataappender<<laude;
	
}
	
dataappender.close();	
	
} cout<<endl<<endl<<endl;
ifstream datareader2("gaandu madarchod",ios::in);
{

if(datareader2)
{  	
string beta;
for(int i=1;i<=(10+p);i++)
{

	datareader2 >> beta;
	cout << beta << endl;
	
	
	
}
}

}



return 0;
}
