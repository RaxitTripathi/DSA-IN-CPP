#include<iostream>
using namespace std;
int main(){
    int number,count=0;
    cout<<"Enter number: ";
    cin>>number;
    if(number==0){
        count=1;
    }
    while(number!=0){
        number/=10;
        count+=1;
    }
    cout<<"No of digit in the Given number is: "<<count<<endl;
}