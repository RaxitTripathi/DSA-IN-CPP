/* 
        *
      *   *
    *       *
  *           *
*               *
  *           *
    *       *
      *   *
        *
*/


#include<iostream>
using namespace std;

int main(){
  int size;
  cout<<"Enter size: ";
  cin>>size;
  for(int i=1;i<=size;i++){
    //space triangle
    for(int k=1;k<=size-i;k++){
      cout<<"  ";
    }

    //first star

    cout<<"*";

    if(i!=1){
      //inner space triangle
      for(int j=1;j<=2*i-3;j++){
        cout<<"  ";
      }

      //second star
      cout<<"*";
    }
    cout<<endl;
  }

  //Lower body
  for(int i=size-1;i>=1;i--){
    //space triangle
    for(int k=1;k<=size-i;k++){
      cout<<"  ";
    }

    //first star

    cout<<"*";

    if(i!=1){
      //inner space triangle
      for(int j=1;j<=2*i-3;j++){
        cout<<"  ";
      }

      //second star
      cout<<"*";
    }
    cout<<endl;
  }

}