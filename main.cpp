#include <iostream>
using namespace std;

int main(){

int harga, jumlah, uang, total;
cout << "\n====kita akan belajar sistem pembelian====\n" << endl;
cout << "kamu membeli sebuah permen di warung\n" << endl;

cout << "harganya adalah : ";
cin >> harga;

cout << "\njumlah yang kamu ambil : ";
cin >> jumlah;

total = harga * jumlah;
cout << "\ntotal yang harus kamu bayar : " << total << endl;

cout << "uang yang kamu punya : ";
cin >> uang;

int kembalian = uang - total;

if (kembalian > 0){
cout << "kembalian anda : " << kembalian << endl;
}
if (kembalian == 0){
cout << "uang anda pas terima kasih :D" << endl;
}
else if(kembalian < 0){
	cout << "maaf uang anda masih kurang : " << kembalian << endl;
	cout << "silahkan masukan uang tambahan : ";
	int tambahan, total2;
	cin >>  tambahan;
	total2 = kembalian + tambahan;
	if (total2 == 0){
		cout << "uang anda pas terima kasih :D" << endl;
	}
	if (total2 > 0){
		cout << "kembalian anda : " << total2 << endl;
	}
	}
	return 0;

}
