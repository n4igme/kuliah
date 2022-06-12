#include <iostream>
using namespace std;
int main() {
    string nama_mhs[45];
    char nilai_abc[10];
    float ip[45];
    float nilai[10];
    float sks[10];
    float total_nilai, total_sks;
    int i=0;
    char y;
    bool tambah;

    printf("Menentukan Indeks Prestasi Mahasiswa\n");
    
    for (int x=0; x<45; x++) {
        //masukkan data
        cout << "Masukan Data Mahasiswa ke-" << x+1 <<endl;
        cout << "Nama : ";
        cin >> nama_mhs[x];
        do {
            //masukan nilai
            if(i>=10) break;
            cout << "Nilai Matakuliah ke-" << i+1 << " : ";
            cin >> nilai_abc[i];
            cout << "Jumlah SKS : ";
            cin >> sks[i];

            //seleksi nilai
            if (nilai_abc[i] == 'A') nilai[i] = 4;
            else if (nilai_abc[i] == 'B') nilai[i] = 3;
            else if (nilai_abc[i] == 'C') nilai[i] = 2;
            else if (nilai_abc[i] == 'D') nilai[i] = 1;
            else nilai[i] = 0;

            //hitung total_nilai dan jumlah sks
            total_nilai += nilai[i] * sks[i];
            total_sks += sks[i];

            cout << "Tambahkan nilai? [Y/T] ";
            cin >> y;
            switch (y){
                case 'Y': tambah = true; break;
                case 'T': 
                    //hitung index prestasi
                    ip[x] = total_nilai / total_sks; 
                    tambah = false; continue;
                default : tambah = true; break;
            }
            i++;
        } while(tambah);

        //menampilkan data
        cout << "Index Prestasi " << nama_mhs[x] << " = " << ip[x] <<endl;

        //reset variable
        total_nilai = 0;
        total_sks = 0;
        i = 0;
        printf("\n");
    }
}