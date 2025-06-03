#include <iostream>
using namespace std;

class abstraksiklas {
    private: string x, y;

    public:
      //methpd untuk mengisi nilai
      //private member
    void setXY(string a, string b) {
        x = a;
        y = b;
    }
    //menampilkan nilai
    void display() {
        cout << "x = " << endl;
        cout << "y = " << endl;
    }
};

int main() {
    abstraksiklas ak;
    ak.setXY("yogyakarta", "kampus");
    ak.display();

    return 0;
}

