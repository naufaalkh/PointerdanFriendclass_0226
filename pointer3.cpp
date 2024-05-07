#include <iostream>
using namespace std;

class mahasiswa{
    public:
        string nim;
        void showNim()
        {
            cout << "No Induk = " << nim << endl;
        }
};

int main(){
    mahasiswa *mhs = new mahasiswa{1}; // Pointer Object mhs
    mhs->nim = 2;
    mhs->showNim();
    delete mhs;
    return 0;
}