#include <iostream>
using namespace std;

class orang {
public:
    int umur;

    orang(int pumur) :
        umur(pumur)
    {
        cout << "orang di buat dengan umur " << umur << "\n" << endl;
    }
};

class pekerja : virtual public orang {
public:

    pekerja(int pumur) :
       orang(pumur)
    {
        cout << "pekerja dibuat\n" << endl;
    }
};

class pelajar : virtual public orang {
public:
  
    pelajar(int pumur) :
       orang(pumur)
    {
        cout << "pelajar dibuat\n" << endl;
    }
};

class budi : public pekerja, public pelajar {
public: 
    
    budi(int pUmur):
    pekerja(pUmur),
    pelajar(pUmur),
    orang(pUmur)
{
    cout << "budi di buat\n" << endl;
}

};

int main() {
    budi a(12);

    return 0;
}