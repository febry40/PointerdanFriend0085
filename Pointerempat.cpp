#include <iostream>
using namespace std;

class mahasiswa
{
private:
    string nama;
public:
    friend void setNama(mahasiswa &a,string);

};

void setB=Nama(mahasiswa &a, string pNama)
{
    a.nama = pNama;
}

