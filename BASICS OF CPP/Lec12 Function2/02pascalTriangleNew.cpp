/* center pascal

        1
      1   1
    1   2   1
  1   3   3   1
1   4   6   4   1 */


#include<iostream>
using namespace std;


int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact *=i;
    }
    return fact;
}

int combination(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    
    
    for(int i=0;i<=n;i++){
        for(int k=0;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}