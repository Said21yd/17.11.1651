#include <iostream>
using namespace std;
class Calculator {
public:
    void Tambah(int i, int a);// MEMASUKKAN FUNGSI TAMBAH
    void Kurang(int i, int a);// MEMASUKKAN FUNGSI KURANG
    void Kali(int i , int a); // MEMASUKKAN FUNGSI KALI
    void Bagi(int i, int a); //  MEMASUKKAN FUNGSI BAGI
    void menu(); //MEKASUKKAN FUNGSI MENU
    void driver(); //untuk mengaktifkan do 
    void driver2(); //untuk melanjutkan fungsi dengan while yang di isi reaksi oleh user 
    int a,x,y,result; //INISIASI YANG DI BUTUHKAN
    char choice;// MENGELUARAN PILIHAN
};
void Calculator::Tambah(int i, int a) {
    result = i + a; // i sebagai angka pertama di tambah dengan angka ke dua (a)
    cout << "JENG JENG! KIE HASILEEE:" << result << endl;
}
void Calculator::Kurang(int i, int a) {
    result = i - a; // i sebagai angka pertama di kurang dengan angka ke dua (a)
    cout << "JENG JENG! KIE HASILEEE:" << result << endl;									//KALKULATOR NGAPAK CODE BY ARMYOFGOD
}
void Calculator::Kali(int i, int a) {
    result = i * a; //i sebagai angka pertama di kali dengan angka ke dua (a)
    cout << "JENG JENG! KIE HASILEEE:" << result << endl;
}
void Calculator::Bagi(int i, int a) {
    result = i / a; //i sebagai angka pertama di bagi dengan angka ke dua (a)
    cout << "JENG JENG! KIE HASILEEE:" << result << endl;
}
void Calculator::menu() {
    cout<<"==============================================================="<<"\n";
    cout<<"                         MENU                                  "<<"\n";
    cout<<"==============================================================="<<"\n";
    cout<<"     1. PENAMBAHAN"<<"\n";
    cout<<"     2. PENGURANGAN"<<"\n";              // isi tampilan menu 
    cout<<"     3. PERKALIAN"<<"\n";
    cout<<"     4. PEMBAGIAN"<<"\n";
    cout<<"==============================================================="<<"\n";
    cout << endl;
    cout<<"==============================================================="<<"\n";
    cout << endl;
    cout << endl;
}
void Calculator::driver() {
    cout << "LEBOKNA PILIHANNE KOWEN" << endl; //memasukkan pilihan
    cin >> a;
    switch(a){ //menggunakan fungsi switch case karena lebih mudah untuk bentuk ini 
    case 1:
        cout << "LEBOKNA ANGKA KE SIJI WA" << endl; 
        cin >> x; //inisiasi angka pertama 
        cout << "LEBOKNA ANGKA KE LORO WA" << endl;
        cin >> y; //inisiasi angka kedua
        Tambah(x,y); //fungsi tambah angka pertama dan angka kedua 
        break;
    case 2:
        cout << "LEBOKNA ANGKA KE SIJI WA" << endl;
        cin >> x;
        cout << "LEBOKNA ANGKA KE LORO WA" << endl;
        cin >> y; 
        Kurang(x,y); //fungsi kurang angka pertama dan angka kedua 
        break;
    case 3:
        cout << "LEBOKNA ANGKA KE SIJI WA" << endl;
        cin >> x;
        cout << "LEBOKNA ANGKA KE LORO WA" << endl;
        cin >> y;
        Kali(x,y); //fungsi kali angka pertama dan angka kedua 
        break;
    case 4:
        cout << "LEBOKNA ANGKA KE SIJI WA" << endl;
        cin >> x;
        cout << "LEBOKNA ANGKA KE LORO WA" << endl;
        cin >> y;
        Bagi(x,y); //fungsi bagi angka pertama dan angka kedua 
        break;
    default:
        cout << "DASMAD!.SALAH NGELEBOKNA . ULANGI MANING!" << endl;
    }
}
void Calculator::driver2() {
    do {
        driver();
    cout << "NJENENGAN PAN LANJUT? Y/N" << endl;
    cin >> choice;
    }
    while(choice == 'Y' || choice == 'y'); //jika pilihan ya maka proses balik ke menu
}
int main () {
    Calculator imba;
    imba.menu(); 
    imba.driver2();
    return 0;
}
