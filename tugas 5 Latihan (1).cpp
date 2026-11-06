#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nama;
    float nilai1, nilai2, nilai3, rata;

    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    cout << endl;

    cout << "Nama Siswa            : ";
    getline(cin, nama);

    cout << "Nilai Pertandingan I  : ";
    cin >> nilai1;

    cout << "Nilai Pertandingan II : ";
    cin >> nilai2;

    cout << "Nilai Pertandingan III: ";
    cin >> nilai3;

    rata = (nilai1 + nilai2 + nilai3) / 3;

    cout << endl;
    cout << "Siswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata " << rata
         << " dari hasil perlombaan yang diikutinya." << endl;

    if (rata >= 85)
    {
        cout << "Hadiah yang didapat adalah Seperangkat Mobil." << endl;
    }
    else if (rata >= 70)
    {
        cout << "Hadiah yang didapat adalah Uang sebesar Rp. 500.000." << endl;
    }
    else
    {
        cout << "Hadiah yang didapat adalah Hiburan." << endl;
    }

    return 0;
}