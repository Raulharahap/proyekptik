#include <iostream>
#include <string>

using namespace std;

struct Buku {
  string judul;
  string pengarang;
  string penerbit;
  int tahun_terbit;
  int jumlah_halaman;
};

int main() {
  // Deklarasi variabel
  Buku buku;
  string judul_baru;
  string pengarang_baru;
  string penerbit_baru;
  int tahun_terbit_baru;
  int jumlah_halaman_baru;

  // Membaca data buku
  cout << "Masukkan judul buku: ";
  getline(cin, buku.judul);
  cout << "Masukkan pengarang buku: ";
  getline(cin, buku.pengarang);
  cout << "Masukkan penerbit buku: ";
  getline(cin, buku.penerbit);
  cout << "Masukkan tahun terbit buku: ";
  cin >> buku.tahun_terbit;
  cout << "Masukkan jumlah halaman buku: ";
  cin >> buku.jumlah_halaman;

  // Membaca data yang akan diubah
  cout << "Masukkan judul buku baru: ";
  getline(cin, judul_baru);
  cout << "Masukkan pengarang buku baru: ";
  getline(cin, pengarang_baru);
  cout << "Masukkan penerbit buku baru: ";
  getline(cin, penerbit_baru);
  cout << "Masukkan tahun terbit buku baru: ";
  cin >> tahun_terbit_baru;
  cout << "Masukkan jumlah halaman buku baru: ";
  cin >> jumlah_halaman_baru;

  // Mengubah data buku
  buku.judul = judul_baru;
  buku.pengarang = pengarang_baru;
  buku.penerbit = penerbit_baru;
  buku.tahun_terbit = tahun_terbit_baru;
  buku.jumlah_halaman = jumlah_halaman_baru;

  // Menampilkan data buku yang telah diubah
  cout << endl;
  cout << "Data buku yang telah diubah:" << endl;
  cout << "Judul: " << buku.judul << endl;
  cout << "Pengarang: " << buku.pengarang << endl;
  cout << "Penerbit: " << buku.penerbit << endl;
  cout << "Tahun terbit: " << buku.tahun_terbit << endl;
  cout << "Jumlah halaman: " << buku.jumlah_halaman << endl;

  return 0;
}