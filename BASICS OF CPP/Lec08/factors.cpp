#include<iostream>
using namespace std;
int main(){
    int user;
    cout<<"Enter a number:";
    cin>>user;
    cout<<"Factor of "<<user<<"is:"<<endl;
    for(int i=1;i<=user/2;i++){
        if(user%i==0){
            cout<<i<<" ";
        }
    }
    cout<<user;
}



// Better approach
/* 

for(int i = 1; i * i <= n; i++)
{
    if(n % i == 0)
    {
        cout << i << " ";

        if(i != n / i)
            cout << n / i << " ";
    }
} */