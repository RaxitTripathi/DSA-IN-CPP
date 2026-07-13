/*  *
   **
  ***
 ****
***** */


#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of pattern:";
    cin>>size;
    for(int i=1;i<=size;i++){
        for(int j=1;j<=size-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}





/* best solution:


for(int i = 1; i <= size; i++) {
    for(int j = 1; j <= size; j++) {
        if(j <= size - i)
            cout << " ";
        else
            cout << "*";
    }
    cout << endl;
} */