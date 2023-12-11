#include <iostream>

using namespace std;

struct Buku {
  string judul;
  string pengarang;
  string penerbit;
  int tahun_terbit;
  int jumlah_halaman;
};

void hapus_data_buku(Buku *buku) {
  // Cek apakah buku kosong
  if (buku == nullptr) {
    return;
  }

  // Set judul buku menjadi kosong
  buku->judul = "";

  // Set pengarang buku menjadi kosong
  buku->pengarang = "";

  // Set penerbit buku menjadi kosong
  buku->penerbit = "";

  // Set tahun terbit buku menjadi 0
  buku->tahun_terbit = 0;

  // Set jumlah halaman buku menjadi 0
  buku->jumlah_halaman = 0;
}

int main() {
  // Deklarasi variabel
  Buku buku;

  // Masukan data buku
  cout << "Masukkan judul buku: ";
  cin >> buku.judul;
  cout << "Masukkan pengarang buku: ";
  cin >> buku.pengarang;
  cout << "Masukkan penerbit buku: ";
  cin >> buku.penerbit;
  cout << "Masukkan tahun terbit buku: ";
  cin >> buku.tahun_terbit;
  cout << "Masukkan jumlah halaman buku: ";
  cin >> buku.jumlah_halaman;

  // Tampilkan data buku sebelum dihapus
  cout << "Data buku sebelum dihapus:" << endl;
  cout << "Judul: " << buku.judul << endl;
  cout << "Pengarang: " << buku.pengarang << endl;
  cout << "Penerbit: " << buku.penerbit << endl;
  cout << "Tahun terbit: " << buku.tahun_terbit << endl;
  cout << "Jumlah halaman: " << buku.jumlah_halaman << endl;

  // Hapus data buku
  hapus_data_buku(&buku);

  // Tampilkan data buku setelah dihapus
  cout << "Data buku setelah dihapus:" << endl;
  cout << "Judul: " << buku.judul << endl;
  cout << "Pengarang: " << buku.pengarang << endl;
  cout << "Penerbit: " << buku.penerbit << endl;
  cout << "Tahun terbit: " << buku.tahun_terbit << endl;
  cout << "Jumlah halaman: " << buku.jumlah_halaman << endl;

  return 0;
}