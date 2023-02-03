#include<iostream>
using namespace std;


class base1 {
    public :
    void greet()
    {
        cout<<"how are you?"<<endl;
    }
};
    class Derived : public Base1, public Base2,{
        int a;
        public :
        void greet(){
            base2:: greet();
        };

        int main (){
        Base1 Base01obj;
        Base2 Base02obj;

        Base1 obj.greet();
        Base2 obj.greet();

        Derived d;
        d.greet();
         return0;

        }
