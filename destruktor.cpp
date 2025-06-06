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

angka::~angka()
{ // destructor
    cout << endl;
    cetakData();
    delete[] arr;
    cout << "Alamat Array Sudah Dilepaskan" << endl;
}

void angka::cetakData()
{
    for (int i = 1; i <= panjang; i++)
    {
        cout << i << " = " << arr[i] << endl;
    }
}

void angka::isiData()
{
    for (int i = 1; i <= panjang; i++)
    {
        cout << i << " = ";
        cin >> arr[i];
    }
    cout << endl;
}

int main()
{
    angka belajarcpp(3);                 // constructor di panggil
    angka *ptrBelajarcpp = new angka(5); // constructor di panggil
    delete ptrBelajarcpp;                // destructor di panggil

    return 0;
} // destructor di panggil