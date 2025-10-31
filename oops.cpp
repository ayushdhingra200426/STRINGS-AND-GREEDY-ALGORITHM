#include<iostream>
using namespace std;
class Rectangle{
  public:
  int l;
  int b;
  Rectangle(){ // defualt constructor
    l=0;
    b=0;
  }
  Rectangle(int x,int y){ // Parameterized Constructor
    l=x;
    b=y;
  }
  Rectangle(Rectangle& r){ // Copy Constructor
    l=r.l;
    b=r.b;
  }
  ~Rectangle(){
    cout<<"Destructor is called"<<endl;
  }
};
int main(){
  Rectangle r1;
  cout<<r1.l<<endl;

  Rectangle r2(3,4);
  cout<<r2.l<<" "<<r2.b<<endl;

  Rectangle r3=r2;
  cout<<r3.l<<" "<<r3.b<<endl;
}