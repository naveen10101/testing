#include<iostream>

using namespace std;

class point;

class point 

{

public:

int x,y;

point(int x1,int x2)

{

x=x1;

y=x2;

}

};

int main()

{

point p(20,67);

cout<<"p.x1="<<p.x<<endl;

cout<<"p.x2="<<p.y<<endl;

}
