#include<iostream>
using namespace std;

int main()
{
   int opt;
   float num1,num2;
   char choice;
   do{
   cout<<"Please select by typing 1,2,3 or 4:"
       <<"\n[1] Addition" 
       <<"\n[2] Subtraction" 
       <<"\n[3] Multiplication" 
       <<"\n[4] Division" 
       <<"\n Your choices";
   cin>>opt;
   cout<<"\nPlease Enter the Firts number:";
   cin>>num1;
   cout<<"\nAnd Enter the Second number:" ;
   cin>>num2;
   switch(opt)
{
  case 1:
  cout<<"The answer is:"<<endl;
  cout<<num1+num2;
  break;
  case 2:
  cout<<"The answer is:"<<endl;
  cout<<num1-num2;
  break;
  case 3:
  cout<<"The answer is:"<<endl;
  cout<<num1*num2;
  break;
  case 4:
  cout<<"The answer is:"<<endl;
  cout<<num1/num2;
  break;
  default:
  cout<<"Sorry sir/Ma'am Invalid Entry!:";
  break;
}



cout <<"\nWould you like to perform other calculations?>(Y/N)"<<endl;
cin >> choice;
   if (choice !='Y' && choice != 'y' && choice !='N' && choice !='n')
       cout << choice << "is not a valid option. Try again"<<endl;
    
    
    }while (choice!='N' && choice!='n' ); 
    
  return 0;
  system("pause");
}