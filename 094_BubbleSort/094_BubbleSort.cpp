#include <iostream>
#include <string>
using namespace std;

int arr[20]; //deklarasi global array a dengan ukuran data 20
int n;       //deklarasi variabel global n untuk menyimpan banyaknya elemen pada array

void input() { //prosedur untuk input
    
    while (true) {
        cout << "Masukan banyaknya elemen pada array  output ke layar"; // Output ke layar
        cin >> n;    // input dari pengguna
        if (n <= 20) // jika n kurang dari atau sama dengan 20
            break;   // keluar dari loop
        else {
            cout<< "\nArray dapat mempunyai maksimal 20 elemen.\n"; // output ke layar
        }
    }
    cout << endl;
    cout << "===============" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "===============" << endl;

    for (int i = 0; i < n; i++) {            //looping dengan i dimulai dari 0 hingga n-1 
        cout << "Data ke-" << (i + 1) << ":";// output ke layar
        cin >> arr[i];                       // memasukan output dari pengguna
    }
}








int main()
{
    std::cout << "Hello World!\n";
}