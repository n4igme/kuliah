#include <iostream>
using namespace std;
int main() {
    string mhs[45];
    char nilai[10];
    float ipk[45];
    float ip[10];
    float hitung;
    int i=0;
    char y;
    bool isok;

    printf("Menentukan Nilai IPK\n");
    
    for (int x=0; x<45; x++) {
        //masukkan data
        cout << "Masukan Data Mahasiswa ke-" << x+1 <<endl;
        cout << "Nama : ";
        cin >> mhs[x];
        do {
            if(i>=10) break;
            cout << "Nilai Matakuliah ke-" << i+1 << " : ";
            cin >> nilai[i];
            if (nilai[i] == 'A' || nilai[i] == 'a') ip[i] = 4;
            else if (nilai[i] == 'B' || nilai[i] == 'b') ip[i] = 3;
            else if (nilai[i] == 'C' || nilai[i] == 'c') ip[i] = 2;
            else if (nilai[i] == 'D' || nilai[i] == 'd') ip[i] = 1;
            else ip[i] = 0;
            hitung += ip[i];

            cout << "Tambahkan nilai? [Y/T] ";
            cin >> y;
            switch (y){
                case 'Y': isok = true; break;
                case 'y': isok = true; break;
                case 'T': ipk[x] = hitung / (i+1); isok = false; continue;
                case 't': ipk[x] = hitung / (i+1); isok = false; continue;
                default : isok = true; break;
            }
            i++;
        } while(isok);

        //menampilkan data
        cout << "IPK " << mhs[x] << " = " << ipk[x] <<endl;

        //reset variable
        hitung = 0;
        i = 0;
        printf("\n");
    }
}