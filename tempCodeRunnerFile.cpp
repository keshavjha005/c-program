#include<iostream>
using namespace std;


class base {
    protected:
    int a;
    private:
    int b;

};
class derived : protected base {
};

int main() {
Base b;
Derived d;
 cout<<d.a;
 return0;
}