#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* add;

    Node(int val){
        this->val=val;
    }
};

int main(){
    Node a(7);
    Node b(11);
    Node c(13);

    a.add=&b;
    b.add=&c;
    

    cout<<(*(a.add)).val<<endl;    or    // cout<<(a.add)->val<<endl;            //Printing value of b using a
}