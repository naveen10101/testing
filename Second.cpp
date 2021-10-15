#include <iostream>

using namespace std;

class data{

public:

int x,y;

data()

{

x=10;

y=20;

}

data (data & object)

{

x=100;

y=200;

cout<<object.x<<endl;

cout<<object.y<<endl;

}

void display()

{

cout<<"x="<<x<<endl;

cout<<"y="<<y<<endl;

}

};

int main (){

data d;

d.display();

data d1(d);

}
