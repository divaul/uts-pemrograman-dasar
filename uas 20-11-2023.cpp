#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    int jumlahMotor, jumlahMobil, jamMasuk, jamKeluar;
    const int biayaPerJamMotor = 2000;
    const int biayaPerJamMobil = 5000;

    // Input jumlah motor
    cout << "Masukkan jumlah motor: ";
    cin >> jumlahMotor;

    // Input jumlah mobil
    cout << "Masukkan jumlah mobil: ";
    cin >> jumlahMobil;

    // Input jam masuk
    cout << "Input jam masuk (format 24 jam): ";
    cin >> jamMasuk;

    // Input jam keluar
    cout << "Input jam keluar (format 24 jam): ";
    cin >> jamKeluar;

    // Menghitung durasi parkir
    int durasiParkir = (jamKeluar - jamMasuk + 24) % 24;

    // Menghitung total biaya parkir
    int totalBiayaParkir = (jumlahMotor * biayaPerJamMotor + jumlahMobil * biayaPerJamMobil) * durasiParkir;

    // Output hasil
    cout << "Total biaya parkir: Rp " << totalBiayaParkir << " (" << durasiParkir << " jam)" << endl;

    return 0;
}