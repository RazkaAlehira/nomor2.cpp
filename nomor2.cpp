#include <iostream>

using namespace std;

int binarySearch(int data[], int elemen, int batasBawah, int batasAtas) {
  // 3. Selama batas bawah tidak melebihi batas atas:
  while (batasBawah <= batasAtas) {
    // Hitung elemen tengah.
    int tengah = (batasBawah + batasAtas) / 2;

    // Jika data[tengah] sama dengan elemen yang dicari, cetak indeks tengah dan selesai.
    if (data[tengah] == elemen) {
      return tengah;
    }

    // Jika elemen yang dicari lebih kecil, atur batas atas menjadi tengah - 1.
    else if (elemen < data[tengah]) {
      batasAtas = tengah - 1;
    }

    // Jika elemen yang dicari lebih besar, atur batas bawah menjadi tengah + 1.
    else {
      batasBawah = tengah + 1;
    }
  }

  // 4. Cetak pesan bahwa elemen tidak ditemukan.
  return -1;
}

int main() {
  // 2. Inisialisasi array data, elemen yang dicari, dan batas-batas pencarian
  int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int elemen = 5;
  int batasBawah = 0;
  int batasAtas = sizeof(data) / sizeof(data[0]) - 1;

  // Panggil fungsi binarySearch()
  int indeks = binarySearch(data, elemen, batasBawah, batasAtas);

  // Cetak hasil pencarian
  if (indeks != -1) {
    cout << "Elemen " << elemen << " ditemukan di indeks " << indeks << endl;
  } else {
    cout << "Elemen " << elemen << " tidak ditemukan." << endl;
  }

  return 0;
}