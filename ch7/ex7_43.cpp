#include <vector>
#include <iostream>
using namespace std;


class NoDefault {
public:
    NoDefault(int i) {}
};

class C {
public:
    C() : def(0) {} // define the constructor of C.
private:
    NoDefault def;
};

int main()
{
    C c;

    vector<C> vec(10);


    return 0;
}
