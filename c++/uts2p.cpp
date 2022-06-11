#include <iostream>
using namespace std;
int main() {
    string mhs[45];
    char predikat[10];
    float ip[45];
    float nilai[10];
    float hitung;
    int i=0;
    char y;
    bool isok;

    printf("Menentukan Nilai Indeks Prestasi Mahasiswa\n");
    
    for (int x=0; x<45; x++) {
        //masukkan data
        cout << "Masukan Data Mahasiswa ke-" << x+1 <<endl;
        cout << "Nama : ";
        cin >> mhs[x];
        do {
            if(i>=10) break;
            cout << "Nilai Matakuliah ke-" << i+1 << " : ";
            cin >> predikat[i];
            if (predikat[i] == 'A' || predikat[i] == 'a') nilai[i] = 4;
            else if (predikat[i] == 'B' || predikat[i] == 'b') nilai[i] = 3;
            else if (predikat[i] == 'C' || predikat[i] == 'c') nilai[i] = 2;
            else if (predikat[i] == 'D' || predikat[i] == 'd') nilai[i] = 1;
            else if (predikat[i] == 'E' || predikat[i] == 'e') nilai[i] = 0;
            else nilai[i] = 0;
            hitung += nilai[i];

            cout << "Tambahkan nilai? [Y/T] ";
            cin >> y;
            switch (y){
                case 'Y': isok = true; break;
                case 'y': isok = true; break;
                case 'T': ip[x] = hitung / (i+1); isok = false; continue;
                case 't': ip[x] = hitung / (i+1); isok = false; continue;
                default : isok = true; break;
            }
            i++;
        } while(isok);

        //menampilkan data
        cout << "Indeks Prestasi " << mhs[x] << " = " << ip[x] <<endl;

        //reset variable
        hitung = 0;
        i = 0;
        printf("\n");
    }
}