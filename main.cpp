#include <iostream>
#include <string>
using namespace std;

int  arr{20};  //Deklarasi variable global array dengan panjang 20
int n; // Deklarasi variable global n untuk menyimpan elemen pada array

void input(){ // Prosedur input
    int d;
    while (true){
        if (n <=20){
        
        else {
            cout << "\nArray maksimal 20 elemen.\n";
        }
    }
}
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan elemen array" << endl;
    cout << "=====================" << endl;

    for (int i=0;i<n;i++){
        cout << "Data ke-" << (i+i) << " = "
        cin >> arr{i};
    }
    
}

void bubbleSortArray(){
    int pass = 1; //step 1
    do {
        for (int j=0;j<=n-1-pass;j++){
            if (arr[j] > arr[j+1]) {
                int temp;
                temp = arr [j];
                arr[j] = arr [j=1];
                arr[j=1] = temp;
            }
        }
    }
}

cout << endl;
cout << "======================================" << endl;
cout << "Element Array yang telah tersusun" << endl;
cout << "======================================" << endl;
cout << endl;
for (int j=0;j<n;j++){
    cout << arr{j};
    if (j<n-1) {
        cout << " --> ";
    }
}
}

int main(){

}