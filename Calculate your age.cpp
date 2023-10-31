//This Program will calculate your age
#include<iostream>
using namespace std;
int main()
{

char name [25];
int yob,yt,an;
cout<<"This program will calculate your age:\n";
cout<<"Please enter your name:"<<endl;
cin>>name;
cout<<"Please enter your year of of birth:"<<endl;
cin>>yob;
cout<<"Enter the year today:"<<endl;
cin>>yt;
an=yt-yob;
cout<<"Okay,"<<name<<endl;
cout<<"Your age now is:"<<an<<endl;
cout<<"All done, thank you for using my program"<<endl;
return 0;

}
