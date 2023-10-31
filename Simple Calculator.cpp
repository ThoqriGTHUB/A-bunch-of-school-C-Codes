#include<iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;
    
    cout<< "Please enter  operator i.e. +,-,*,/"<<endl;
    cin>>op;
    
    cout<<"And please enter two (2)numbers,one another!"<<endl;
    cin>> num1 >> num2;
    
    switch (op)
    {
    case '+':
      cout<< num1+num2;
      cout<<"\sayonara";
      break;
    
    case '-':
      cout<< num1-num2;
      cout<< "\sayonara";
      break;
    
    case '*':
      cout<< num1*num2;
      cout<<"\sayonara";
      break;
    
    case '/':
      cout<< num1/num2;
      cout<<"\sayonara!";
      break;
    
    default:
    cout<<"Error! Operator is incorrect"<<endl;
    break;
    
    }
    return 0;
    
}