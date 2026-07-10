#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if(age <=0){
        cout<<"Age cannot be negative or 0";
    }
    if (age >=18){
        cout<<"Yes Valid for driving";
    }
    else{
        cout<<"Not valid for driving";
    }

}