#include <iostream>
using namespace std;

class angka
{
private:
    int *arr;
    int panjang;

public:
    angka(int); // construction
    ~angka();   // destruction
    void cetakData();
    void isiData();
};
// definisi member function
angka::angka(int i)
{ // constructor
    panjang = i;
    arr = new int[i]; // alokasi memori
    isiData();
}

