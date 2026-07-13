#include<iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"Enter row of pattern:";
    cin>>row;
    cout<<"\nEnter column of pattern:";
    cin>>column;
    char alpha='A';
    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            if(i == row || i==1 || j==column || j ==1){
                cout<<"*"<<" ";
            }
            else cout<<" "<<" ";
            
        }
        cout<<endl;
        
    }
}