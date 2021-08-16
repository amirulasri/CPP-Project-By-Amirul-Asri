#include <iostream>
using namespace std;

int main() {
    int pilihan, yuran = 250, taekwondo = 50, jumlah;
    cout<<"Yuran murid ini ialah: RM250/n (Tunas Kindergarten)";
    cout<<"\nAdakah murid ini menyertai Taekwondo? (1 = Ya, 0 = Tidak): ";

    cin>>pilihan;

    if(pilihan == 1){
        jumlah = yuran + taekwondo;
        cout<<"\nYuran perlu dibayar termasuk kelas Taekwondo: RM"<<jumlah;
    }else{
        cout<<"\nYuran perlu dibayar hanya: RM"<<yuran;
    }
}