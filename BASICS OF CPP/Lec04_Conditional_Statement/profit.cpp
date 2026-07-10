#include<iostream>

using namespace std;
int main(){
    float cost_price,selling_price;
    cout<<"Enter Cost Price:";
    cin>>cost_price;
    cout<<"Enter Selling Price:";
    cin>>selling_price;

    if (selling_price > cost_price){
        cout<<"Profit\n";
        cout<<"Total profit:"<<selling_price-cost_price;
    } 
    else if(selling_price == cost_price){
        cout<<"Neither profit nor lose";
    }
    else{
        cout<<"Loss\n";
        cout<<"Total Loss:"<<cost_price-selling_price;
    }
}