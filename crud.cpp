#include <iostream>
#include <string>
using namespace std;
struct dataMahasiswa{
    int no;
    string nama;
    string nim;
    string tglLahir;
    string mataKuliah;
};

int jumlahMahasiswa = 0;
struct dataMahasiswa mahasiswa[150];

void addNewData(int no){
    cin.ignore(); 
    cout<<"Isilah data-data berikut !"<<endl;
    cout<<"Nama : "; getline(cin,mahasiswa[no].nama);
    cout<<"NIM  : "; getline(cin,mahasiswa[no].nim);
    cout<<"Tanggal lahir : "; getline(cin,mahasiswa[no].tglLahir);
    cout<<"Mata Kuliah : "; getline(cin,mahasiswa[no].mataKuliah);
}

void create(){
    addNewData(jumlahMahasiswa);
    mahasiswa[jumlahMahasiswa].no = jumlahMahasiswa+1;
    jumlahMahasiswa++;
}

void read(){
    cout<<"Data yang tersimpan";
    puts("+-------------------------------------------------------+");
    puts("| No  | Nama\t| NIM\t| Tgl Lahir\t| Mata Kuliah\t|");
    puts("+-------------------------------------------------------+");

    for (int i = 0; i < jumlahMahasiswa; i++) {
    if(!mahasiswa[i].no)
      continue;
    printf("| %d   | %s\t| %s\t| %s\t| %s\t\t|\n", mahasiswa[i].no, mahasiswa[i].nama.c_str(), mahasiswa[i].nim.c_str(), mahasiswa[i].tglLahir.c_str(), mahasiswa[i].mataKuliah.c_str());
  }
  puts("+-------------------------------------------------------+\n");

}

void update(){
    int no;
    cout<<"Perbarui data"<<endl;
    cout<<"Masukkan no mahasiswa : "; cin>>no;
    addNewData(no-1);
}

void ddelete(){
    int no;
    cout<<"Hapus data"<<endl;
    cout<<"Masukkan no mahasiswa yang ingin dihapus : "; cin>>no;
    no--;
    mahasiswa[no].no = 0;
    mahasiswa[no].nama = "";
    mahasiswa[no].nim = "";
    mahasiswa[no].tglLahir = "";
    mahasiswa[no].mataKuliah = "";
}
int main(){
    while(true){
    int operasi;
    cout<<"CRUD DENGAN STRUKTUR DATA STATIS"<<endl;
    cout<<"================================="<<endl;
    cout<<"1.Tambahkan data baru(Create)"<<endl;
    cout<<"2.Tampilkan data(Read)"<<endl;
    cout<<"3.Perbarui data(Update)"<<endl;
    cout<<"4.Hapus data(Delete)"<<endl;
    cout<<"Pilih operasi yang ingin anda lakukan!"<<endl;
    cin>>operasi;

    switch (operasi){
        case 1:
        create();
        break;
        case 2:
        read();
        break;
        case 3:
        update();
        break;
        case 4:
        ddelete();
        break;
        default:
        cout<<"Opsi yang anda pilih tidak ada";
        return 0;
    
    }
    }
}