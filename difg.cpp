#include<iostream>
using namespace std;
int count=0;

class num {
     public:
     num() {
    count++;
    cout<<"this is time when constructor is called For object number"<<count<<endl;
     }


};

int main() {
  cout<<"we are in side oF the member Function"<<endl;
  cout<<"creating First object n1"<<endl;
  num n2, n3;
  cout<<"exciting this block"<<endl;
}
cout<<"back to main"<<endl;
return0;

}
