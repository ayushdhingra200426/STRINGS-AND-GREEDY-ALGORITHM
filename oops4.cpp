// this is the example of the diamond problem
// when base class having multiple parent classes with a common ancestor 
// that's why parent class has been printed 2 times

#include<iostream>
using namespace std;
class Parent{
  public:
  Parent(){
    cout<<"in parent class"<<endl;
  }
};
class Child1:public Parent{
  public:
  Child1(){
    cout<<"in child1 process"<<endl;
  }
};
class Child2:public Parent{
  public:
  Child2(){
    cout<<"in child2 process"<<endl;
  }
};
class Grandchild:public Child1,public Child2{
  public:
  Grandchild(){
    cout<<"in grandchild process"<<endl;
  }
};
int main(){
    Grandchild gc;
    

}