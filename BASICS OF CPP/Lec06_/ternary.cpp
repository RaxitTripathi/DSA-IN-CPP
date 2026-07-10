#include<iostream>
using namespace std;

int main(){
    int x,y;
    int n;
    cout<<"Enter a nnumber:";

    cin>>n;
    // (n%2==0) ? cout<<"Even" : cout<<"Odd";
    // or
    cout<< ((n%2==0) ?"Even" : "Odd");

    // Also can be use as
    x=6;
    y=x++>6 ? x+4 : x*4;
    cout<<"\ny="<<y<<endl;
}