#include<iostream>
using namespace std;
class Student{  /* Class */
public:
    int age;  /* attributes */
    string name;
    float cgpa;
};

int main(){
    Student x;  /* Object */
    x.name="Raxit";
    x.age=17;
    x.cgpa=9.1;

    cout<<x.name<<endl;


    Student y={18,"HP",9.1};
    cout<<y.name<<endl;


}