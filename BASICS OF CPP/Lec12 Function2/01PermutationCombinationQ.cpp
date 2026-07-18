//Take 'n' and 'r' and preint nCr and nPr

#include<iostream>
using namespace std;


int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact *=i;
    }
    return fact;
}
int main(){
    int n,r;
    cout<<"Enter n and r:";
    cin>>n>>r;

    int nCr=fact(n)/(fact(r)*fact(n-r));
    int nPr=fact(n)/(fact(n-r));

    cout<<"Permutation: "<<nPr<<endl;
    cout<<"Combination: "<<nCr<<endl;
}