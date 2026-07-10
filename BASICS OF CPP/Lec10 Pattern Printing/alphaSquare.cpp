#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of pattern:";
    cin>>size;
    char alpha='A';
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<alpha<<" ";
            alpha ++;
        }
        alpha = 'A';
        cout<<endl;
    }
}