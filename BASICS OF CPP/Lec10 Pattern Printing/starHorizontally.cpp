#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of pattern:";
    cin>>size;
    for(int i=5;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}