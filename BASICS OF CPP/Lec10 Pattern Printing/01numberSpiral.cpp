#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    
    for(int i=1;i<=size;i++){
        for(int j=1;j<=size;j++){
            if(i<=j) cout<<i;
            else cout<<j;
        }
        cout<<endl;
    }
}