# include<iostream>
using namespace std;

int x= 10;
void  myFunction()
 {
    cout<<"the value of x is ..:"<<x;
    int x = 20;
 }
  main()
  {
    myFunction();
    int x = 38;
    cout<<"the value of x is ..."<<x;
    myFunction();
  }