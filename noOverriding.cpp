#include <iostream>
using namespace std;

class baseclass {
    public:
       virtual void perkenalan() {
          cout << "hallo saya funtion dari base class";

       }
};

class derivedclass : public baseclass {
    public:
       void perkenalan() {
          cout << "hallo saya function dari base class";

       }
};

int main() {
    derivedclass a;
    a.perkenalan();

    return 0;
}

