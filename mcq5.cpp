#include <iostream>

using namespace std;

class Parent

{

public:

Parent (void)

{

cout << "Parent( )\n";

}

Parent (int i)

{

cout << "Parent("<< i << ")\n";

};

//Parent (void)
//
//{
//
//cout << "~Parent( )\n";
//
//};

};

class Child1 : public Parent { };

class Child2 : public Parent

{public:

Child2 (void)

{

cout << "Child2()\n";

}

Child2 (int i) : Parent (i)

{

cout << "Child2(" << i << ")\n";

}

~Child2 (void)

{

cout << "~Child2()\n";

}

};

int main (void)

{

Child1 a;

Child2 b;

Child2 c(42);

return 0;

}


