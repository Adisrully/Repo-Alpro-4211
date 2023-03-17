#include <iostream>
using namespace std;

int a,b,hasil1;
int x,y,hasil2,i;
int asep[5] = {1,2,3,4,5};
int sum;

void tambah()
{
    cout << "Pertambahan"<<endl;
    cout << "Masukkan angka pertama : ";
    cin >> a;
    cout << "Masukkan angka kedua : ";
    cin >> b;

    hasil1 = a+b;
    cout << hasil1 << endl;

}
void kurang()
{
    cout << "Pengurangan"<<endl;
    cout << "Masukkan angka pertama : ";
    cin >>x;
    cout << "Masukkan angka kedua : ";
    cin >>y;
    hasil2=x-y;
    cout << "Hasilnya adalah : "<<hasil2<<endl<<endl;

}

int funcArr(int myArr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += myArr[i];
    }
    return sum;
}


float average(int myArr[], int size) {
    float sum = 0;
    float avg;
    for (int i = 0; i < size; i ++) {
        sum += myArr[i];
    }
    avg = sum / size;
    return avg;
}



int main ()
{
tambah();
kurang();
int myArr[] = {1, 3, 4 ,5 };
cout << "Jumlah array : " << funcArr(myArr, 4) << endl;
cout << "Rata rata dari nilai array: " << average(myArr, 4);
    return 0;


}

