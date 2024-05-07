#include <iostream>
using namespace std;

class mahasiswa{
    public:
    string nim;

    void showNim(){
        cout << "No Induk = " << nim << endl;
    }
};

int main(){
    mahasiswa mhs{1}; //object mhs
    mhs.showNim(); //Member Access Operator

    mahasiswa &refMhs = mhs; // Pointer Reference refMhs
    refMhs.nim = 2; // Member Access Operator
    mhs.showNim();

    mahasiswa *pMhs = &mhs; //pointer deference pMhs
    pMhs->nim = 3; // Narrow Operator
    mhs.showNim();
    return 0;
}