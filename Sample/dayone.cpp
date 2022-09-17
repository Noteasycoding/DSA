#include <iostream>
using namespace std; 

int main() {
  
  // *********SIMPLE INTREST *********
  /*
  int P = 100;
  int R = 15;
  int T = 30;
  
  int SI = (P*R*T)/100;
    cout<<"Simple Intrest:"<<" "<< SI<< endl;
  */
  // *********AVERAGE OF THREE NUMBERS******
  /*
  int a = 35;
  int b = 45;
  int c = 55;
  int avg = (a+b+c)/3;
  cout<<"Average of three numbers:"<<" "<<avg<<endl;
  */
  //**********Greater number***********
  /*
  int a = 10;
  int b = 15;
  if(a>b){
    cout<<"A is greater."<<endl;
    }
  else
  {
    cout<<"B is greater."<<endl;
  }
  */
  // *********Odd and Even numbers*****
  /*
  int number;
  cout<<"Enter the number: ";
  cin>>number;
  if(number%2==0){
    cout<<"The number is Even."<<endl;
  }
  else{
    cout<<"the number "<<number<<" is odd"<<endl;
  }
  */
  //**********Number Check*********
  /*
  int num = 0;
  cout<<"Enter the number:";
  cin>>num;
  if(num>0){
    cout<<"The number "<<num<<" is Positive.";
  }
  else if (num<0){
    cout<<"The number "<<num<<" is Negative.";
  }
  else {
    cout<<"The number "<<num<<" is Zero.";
  }
  */
  //**********Triangle Valid or not******
  /*
  int a1 = 10;
  int a2 = 20;
  int a3 = 40;

  if(a1+a2>a3){
    cout<<"Valid";
  }
  else if(a1+a3>a2){
    cout<<"Valid";
  }
  else if(a2+a3>a1){
    cout<<"Valid";
  }
  else{
    cout<<"Invalid";
  }
  */
  //*********while loop 1 to N print***********
  /*
  int num = 0;
  cout<<"Enter number:";
  cin>>num;
  int i = 1;
  while(i<=num){
    cout<<"\n"<<i<<endl;
    i++;
  }
  */
  //**********For loop 1 to N print*******
  /*
  int num = 0;
  cout<<"Enter the number:";
  cin>>num;
  int i = 1;
  for(i=1;i<=num;i++){
    cout<<"\n"<<i<<endl;
  }
  */
  //**********While Loop 1 to N even ********
  /*
  int num = 0;
  cout<<"Enter the number:";
  cin>>num;

  int i = 2;
  while(i<=num){
    cout<<i<<endl;
    i = i+2;
  }
  */
  
  //**********For loop 1 to N even*******
  /*
  int num = 0;
  cout<<"Enter the number:";
  cin>>num;

  int i = 2;
  for(i = 2;i<=num;i=i+2){
    cout<<i<<endl;
  }
  */

  //******while loop 1 to N odd********
  /*
  int limit = 0;
  cout<<"Enter limit:";
  cin>>limit;
  int i = 1;
  while(i<=limit){
    cout<<i<<endl;
    i = i + 2;
  }
  */
  //*******for loop 1 to N odd**********
  /*
  int limit = 0;
  cout<<"Enter limit:";
  cin>>limit;
  int i = 1;
  for(i=1;i<=limit;i=i+2){
    cout<<i<<endl;
  }
  */

  //*******while loop 1 to N sum*********
  /*
  int limit = 0;
  cout<<"Enter limit:";
  cin>>limit;
  int sum = 0;
  int i = 1;
  while(i<=limit){
    sum = sum + i;
    i = i + 1;    
  }
  cout<<"\nThe sum is:"<<sum;
  */

  //********* for loop 1 to N sum************
  /*
  int limit = 0;
  cout<<"Enter limit:";
  cin>>limit;
  int sum = 0;
  int i = 1;
  for(i=1;i<=limit;i=i+1){
    sum = sum + i;
  }
  cout<<"\nThe Sum is: "<<sum;
  */
  //***** while loop factorial**********
  /*
  int num = 0;
  cout<<"Enter Number:";
  cin>>num;
  int fact = 1;
  int i = 1;
  while(i<=num){
    fact = fact * i;
    i = i + 1;
  }
  cout<<"The factorial of "<<num<<" is: "<<fact;

  */
  //***********for loop factoral**********
  /*
  
  int num = 0;
  cout<<"Enter number:";
  cin>>num;
  int fact = 1;
  int looper = 1;
  for(looper = 1; looper<=num;looper = looper + 1){
    fact = fact*looper;
    cout<<looper<<"*";
  }
  cout<<"\nThe factorial of "<<num<<" is "<<fact;
  
*/
  //******while loop check prime or not*********
 /* 
  int num;
  cout<<"Enter number:";
  cin>>num;

  int looper = 2;

  while(looper<num)
  { 

    if(num%looper==0)
    {
        // divide hogaya Not prime
      cout<<"Not prime"<<endl;
    }
    else{
        cout<<"Prime"<<endl;
    }

    looper = looper + 1;
    
  }
  */  
//************Check ASCII********
/*
int a;
a = cin.get();
cout<<"Values is: "<<a<<endl;
*/  
 
 
 
 
 
  }
