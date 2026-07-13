#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of pattern:";
    cin>>size;
    char alpha='A';
    for(int i=1;i<=size;i++){
        for(int j=1;j<=i;j++){
            if(i%2!=0){
                cout<<i<<" ";
            }
            else cout<<alpha<<" ";
            alpha ++;
        }
        cout<<endl;
        alpha = 'A';
    }
}