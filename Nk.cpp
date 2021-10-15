#include <iostream>

using namespace std;

class a{

protected:

a(){

cout<<"a is running "<<endl;

}

};

class b: public a{

protected:

b(){

cout<<"b is running "<<endl;

}

};

class c{

protected:

c(){

cout<<"c is running "<<endl;

}

};

class d: public c,public b{

public:

d(){

cout<<"d is running "<<endl;

}

};

int main(){

 d d;

return 0;

}
