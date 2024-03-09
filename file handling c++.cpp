#include <iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{

ofstream datawriter("myfriend.txt",ios::out);//making a new file in the system

{
for(int i=1;i<2;i++)
{
datawriter<<i<<"\t";
string name;
cin>>name;
datawriter<<name<<"\t";
long phonenumber;
cin>>phonenumber;
datawriter<<phonenumber<<"\t";
long enroll;
cin>>enroll;
datawriter<<enroll<<"\t";
string branch;
cin>> branch;
datawriter<<branch<<endl;


}
datawriter.close();



}




return 0;
}
