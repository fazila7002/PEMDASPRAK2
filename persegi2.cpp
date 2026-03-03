#include <iostream>
using namespace std;

int p, l;

void input(){
    cout << "Masukkan Panjang = ";
    cin >> p;
    cout << "Masukkan Lebar = ";
    cin >> l;
}

float jumlah(float a, float b, float c){
    return a + b + c;
}

int luasPersegiP(int a, int b){
    return a * b;
}

void output(){
    cout << "HAsilnya =" << luasPersegiP(p, l) << endl;
    cout <<"terimakasih" << endl;
}
int main(){
    input();
    output();
    cout << "Hasil penjumlahan=" << jumlah(15.1, 24.9, 67);
}
