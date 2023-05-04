#include <iostream>
using namespace std;
// fungsi untuk mencetak *  seberapa banyak nilai n kali
void bentukBintang(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "* ";
    }
}
// fungsi untuk mencetak spasi seberapa banyak nilai n kali
void bentukSpasi(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "  ";
    }
}
int main()
{
    // Isi program

    // Nama integer digunakan
    
    int n;
    int totalSpasi = 0;
    // Meminta input

    cout << "Masukkan nilai input : ";
    cin >> n;

    // Mencetak bagian atas belah ketupat
    for (int i = n - 1; i > 0; i--)
    {
        bentukBintang(i);
        bentukSpasi(2 * totalSpasi);
        bentukBintang(i);
        totalSpasi++;
        cout << endl;
    }

    totalSpasi = n - 1;
    // mencetak bagian bawah belah ketupat
    for (int i = 1; i < n; i++)
    {
        bentukBintang(i);
        bentukSpasi(2 * n - 2 * i - 2);
        bentukBintang(i);
        totalSpasi--;
        cout << endl;
    }

    return 0;
}
