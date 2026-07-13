#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of pattern:";
    cin>>size;
    for(int i=0;i<size;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}