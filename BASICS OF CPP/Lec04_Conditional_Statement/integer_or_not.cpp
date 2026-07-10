#include<iostream>

using namespace std;
int main(){
    float num;
    cout<<"Enter number:";
    cin>> num;
    int y = int(num);
    if(y==num){
        cout<<"Yes An integer";
    }
    else{
        cout<<"Not an Integer";
    }
}