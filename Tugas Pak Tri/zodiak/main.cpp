#include <iostream>
using namespace std;

int main() {
    int tgl, bln;
    cout << "PROGRAM MENENTUKAN ZODIAK\n";
    cout << "--------------------------\n";

    cout << "Masukkan tanggal lahir (1-31): ";
    cin >> tgl;
    cout << "Masukkan bulan lahir (1-12): ";
    cin >> bln;

    // Validasi sederhana jumlah hari dalam bulan
    bool valid = true;
    if (bln < 1 || bln > 12) valid = false;
    else if ((bln == 4 || bln == 6 || bln == 9 || bln == 11) && (tgl < 1 || tgl > 30)) valid = false;
    else if (bln == 2 && (tgl < 1 || tgl > 29)) valid = false;
    else if (tgl < 1 || tgl > 31) valid = false;

    if (!valid) {
        cout << "Tanggal atau bulan tidak valid.\n";
        return 0;
    }

    string zodiak;

    if ((tgl >= 21 && bln == 3) || (tgl <= 19 && bln == 4))
        zodiak = "Aries";
    else if ((tgl >= 20 && bln == 4) || (tgl <= 20 && bln == 5))
        zodiak = "Taurus";
    else if ((tgl >= 21 && bln == 5) || (tgl <= 20 && bln == 6))
        zodiak = "Gemini";
    else if ((tgl >= 21 && bln == 6) || (tgl <= 22 && bln == 7))
        zodiak = "Cancer";
    else if ((tgl >= 23 && bln == 7) || (tgl <= 22 && bln == 8))
        zodiak = "Leo";
    else if ((tgl >= 23 && bln == 8) || (tgl <= 22 && bln == 9))
        zodiak = "Virgo";
    else if ((tgl >= 23 && bln == 9) || (tgl <= 22 && bln == 10))
        zodiak = "Libra";
    else if ((tgl >= 23 && bln == 10) || (tgl <= 21 && bln == 11))
        zodiak = "Scorpio";
    else if ((tgl >= 22 && bln == 11) || (tgl <= 21 && bln == 12))
        zodiak = "Sagitarius";
    else if ((tgl >= 22 && bln == 12) || (tgl <= 19 && bln == 1))
        zodiak = "Capricorn";
    else if ((tgl >= 20 && bln == 1) || (tgl <= 18 && bln == 2))
        zodiak = "Aquarius";
    else if ((tgl >= 19 && bln == 2) || (tgl <= 20 && bln == 3))
        zodiak = "Pisces";
    else
        zodiak = "Tidak diketahui";

    cout << "Zodiak kamu: " << zodiak << endl;

    return 0;
}
