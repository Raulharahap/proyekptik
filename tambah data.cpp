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
  ofstream file_buku;

  // Buka file untuk menulis
  file_buku.open("data_buku.txt");

  // Input data buku
  cout << "Masukkan jumlah buku yang ingin ditambahkan: ";
  int jumlah_buku;
  cin >> jumlah_buku;
  for (int i = 0; i < jumlah_buku; i++) {
    // Deklarasikan variabel buku baru
    Buku buku_baru;

    // Input data buku baru
    cout << "Masukkan ID buku: ";
    cin >> buku_baru.id;
    cout << "Masukkan judul buku: ";
    cin >> buku_baru.judul;
    cout << "Masukkan pengarang buku: ";
    cin >> buku_baru.pengarang;
    cout << "Masukkan penerbit buku: ";
    cin >> buku_baru.penerbit;
    cout << "Masukkan tahun terbit buku: ";
    cin >> buku_baru.tahun_terbit;
    cout << "Masukkan jumlah halaman buku: ";
    cin >> buku_baru.jumlah_halaman;

    // Tambahkan buku baru ke vector
    buku.push_back(buku_baru);
  }

  // Tulis data buku ke file
  for (Buku buku_item : buku) {
    file_buku << buku_item.id << " " << buku_item.judul << " " << buku_item.pengarang << " " << buku_item.penerbit << " " << buku_item.tahun_terbit << " " << buku_item.jumlah_halaman << endl;
  }

  // Tutup file
  file_buku.close();

  // Tampilkan pesan berhasil
  cout << "Data buku berhasil disimpan!" << endl;

  return 0;
}