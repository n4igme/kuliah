#include <iostream>
using namespace std;
int main(){
    //Deklarasi variable
    string pelajaran;
    int nis[50];
    string nama[50];
    float nilai[50];
    string keterangan[50];
    float totalnilai;
    float reratakelas;
    int i=0;
    char y;
    bool isok;

    printf("Entry Nilai Siswa\n");
    cout << "Pelajaran : ";
    cin >> pelajaran;

    //Input Data
    do {
        if(i>=25) break;
        cout << "Siswa ke : " << i+1 <<endl;
        cout << "NIS : ";
        cin >> nis[i];
        cout << "Nama : ";
        cin >> nama[i];
        cout << "Nilai : ";
        cin >> nilai[i];
        if (nilai[i]>=80) keterangan[i] = "Sangat Baik";
        else if(nilai[i]>=70) keterangan[i] = "Baik";
        else if(nilai[i]>=60) keterangan[i] = "Cukup";
        else keterangan[i] = "Kurang";

        cout << "Tambah data lagi? [Y/T] ";
        cin >> y;
        switch (y){
            case 'Y': isok = true; break;
            case 'y': isok = true; break;
            case 'T': isok = false; break;
            case 't': isok = false; break;
            default : isok = false;
        }
        i++;
    } while (isok);

    //Output Data
    printf("Laporan Nilai Siswa");
    cout <<"Pelajaran "<<pelajaran<<endl;
    cout << "No" << " " << "NIS" << " "<< "Nama" << " " << "Nilai" << "Keterangan" << endl;
    for(int x=0; x<i; x++){
        cout << x+1 << "    " << nis[x] << "    " << nama[x] << "   " << nilai[x] << "  " << keterangan[x] << endl;
        totalnilai += nilai[x];
        reratakelas = totalnilai / (x+1);
    }
    cout << "Total Nilai" << "  " << "  " << "  " << "  " << totalnilai << endl;
    cout << "Rerata Kelas" << "  " << "  " << "  " << "  " << reratakelas << endl;
}