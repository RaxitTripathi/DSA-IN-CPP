#include<iostream>
using namespace std;

class Cricketer{
    public:
    string name;
    int age;
    float avg;

    Cricketer(string name,
    int age,
    float avg){
        this->name=name;
        this->age=age;
        this->avg=avg;
    }
};

int main(){
    Cricketer c1("Virat kohli",38,75.4);
    Cricketer c2("Rohit Sharma",40,50.4);

    Cricketer *ptr = &c2;     
    (*ptr).age=49;      // change in ptr
    ptr->avg=70.4;      // or we can write like it

    cout<<c2.age<<endl;  // it will change in real also 
}



/* 


* vs ** 


int a = 10;

int *p = &a;

int **q = &p;

cout << q;    // Address of p
cout << *q;   // Address of a (stored in p)
cout << **q;  // 10 


*/