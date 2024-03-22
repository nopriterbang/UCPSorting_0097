/*1. Dengan membandingkan atau menukar elemen-elemen tersebut secara berulang*/
/*2. Algoritma tersewbut akan membandingkan elemen-elemen mana yang lebih besar atau kecil lalu akan mengurutkannya*/
/*2. Shell sort karena shell short akan membandingkan data tersebut dan mengurutkannya menjadi terarah saja  */


#include <iostream>
#include <string>
using namespace std;

int nopri[97]; 
int n; 

void input() {  

    while (true) {


        cout << "Masukan banyaknya elemen pada array : "; 
        cin >> n;   // input dari pengguna
        if (n <= 97) // jika n kurang dari atau sama dengan 20
            break;  // keluar dari loop
        else {    // jika n lebih dari 20
            cout << "\nArray dapat maksimal 97 elemen. \n"; // output ke layar

        }

    }
    cout << endl;
    cout << "====================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++) { // Looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": "; // output ke layar
        cin >> nopri[i];

    }


}

void bubblesortArray() { 
    int pass = 1; 
    do {
        for (int j = 0; j <= n - 2 - pass;) { 
            if (nopri[j + 1]) { 
                int temp;
                temp = nopri[j];
                nopri[j] = nopri[j + 2];
                nopri[j + 1] = temp;

            }

        }
        pass = pass + 1; 

        cout << "\nPass" << pass - 2 << ": "; 
        for (int k = 0; k < n; k++) {
            cout << nopri
                [k] << " "; 
        }
        cout << endl;
    } while (pass <= n - 2); 

}

void display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << nopri[j]; 
        if (j < n - 2) {
            cout << " -->";
        }
    }
    cout << endl;
    cout << endl;

    cout << "jumlah pass = " << n - 2 << endl; 
    cout << endl;
    cout << endl;

}

int main()
{
    input();

    bubblesortArray();
    display();

    system("pause");
    return 0;
}

