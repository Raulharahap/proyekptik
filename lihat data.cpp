#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Buku {
  int id;
  string judul;
  string pengarang;
  string penerbit;
  int tahun_terbit;
  int jumlah_halaman;
};

int main() {
  // Deklarasi variabel
  vector<Buku> buku;
  ifstream file_buku;

  // Buka file untuk membaca
  file_buku.open("data_buku.txt");

  // Membaca data buku dari file
  while (!file_buku.eof()) {
    Buku buku_item;
    file_buku >> buku_item.id >> buku_item.judul >> buku_item.pengarang >> buku_item.penerbit >> buku_item.tahun_terbit >> buku_item.jumlah_halaman;
    buku.push_back(buku_item);
  }

  // Tutup file
  file_buku.close();

  // Tampilkan data buku
  for (Buku buku_item : buku) {
    cout << "ID buku: " << buku_item.id << endl;
    cout << "Judul buku: " << buku_item.judul << endl;
    cout << "Pengarang buku: " << buku_item.pengarang << endl;
    cout << "Penerbit buku: " << buku_item.penerbit << endl;
    cout << "Tahun terbit buku: " << buku_item.tahun_terbit << endl;
    cout << "Jumlah halaman buku: " << buku_item.jumlah_halaman << endl;
  }

  return 0;
}