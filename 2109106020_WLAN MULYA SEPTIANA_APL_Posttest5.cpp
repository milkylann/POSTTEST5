#include <iostream>

using namespace std;

//prosedur untuk menampilkan judul
void judul(){
	cout << "=================================================" << endl;
	cout << "|                SELAMAT DATANG                 |" << endl;
	cout << "|                  DI PROGRAM                   |" << endl;
	cout << "|         ~ PENDATAAN PESERTA VAKSIN ~          |" << endl;
	cout << "=================================================" << endl;
}

//prosedur untuk menampilkan menu
void menu(){
	cout << "\n*************************************************" << endl;
	cout << "*                  M  E  N  U                   *" << endl;
	cout << "*************************************************" << endl;
	cout << "*		[1] Tambah Data                 *" << endl;
	cout << "*		[2] Tampilkan Data              *" << endl;
	cout << "*		[3] Ubah Data                   *" << endl;
	cout << "*		[4] Hapus Data                  *" << endl;
	cout << "*		[5] Sorting/Mengurutkan Data    *" << endl;
	cout << "*		[6] Exit Program                *" << endl;
	cout << "*************************************************" << endl;
}

//deklarasi struct
struct vaksin{
	string nama,  jenis_vaksin;
	int umur, dosis;
};
	//struct dengan array
	vaksin batas[100];
	int a, c, banyakdata;

//prosedur untuk menambahkan data	
void tambahdata(){
	cout << "\nBanyaknya Data Yang Ingin Ditambahkan : "; cin >> banyakdata;
	for(c = 0; c < banyakdata; c++){		//perulangan tambah data
	cout << "\nData ke-" << c+1 << endl;
	cout << "Nama Peserta\t: "; cin >> batas[a].nama;
	cout << "Umur Peserta\t: "; cin >> batas[a].umur;
	cout << "Jenis Vaksin\t: "; cin >> batas[a].jenis_vaksin;
	cout << "Dosis ke\t: "; cin >> batas[a].dosis;
	cout<<"\n=========== Data Berhasil Ditambahkan ===========" << endl;
	a++;
	}
}

//prosedur untuk menamampilkan data
void tampildata(){
	int i;		//deklarasi variabel
	for(i = 0; i < a; i++){			//perulangan tampilkan data
	cout << "\nData ke-" << i+1 << endl;
	cout << "Nama Peserta\t: " << batas[i].nama << endl;
	cout << "Umur Peserta\t: " << batas[i].umur << endl;
	cout << "Jenis Vaksin\t: " << batas[i].jenis_vaksin << endl;
	cout << "Dosis ke\t: " << batas[i].dosis << endl;
	}
}

//prosedur untuk mengubah data
void ubahdata(){
	int dataperubahan, l;		//deklarasi variabel
	cout << "\nData Ke Berapa Yang Ingin Diubah : "; cin >> dataperubahan;
	l = dataperubahan-1;
	cout << "\nSILAHKAN MASUKKAN DATA BARU!!" << endl;
	cout << "Nama Peserta\t: "; cin >> batas[l].nama;
	cout << "Umur Peserta\t: "; cin >> batas[l].umur;
	cout << "Jenis Vaksin\t: "; cin >> batas[l].jenis_vaksin;
	cout << "Dosis ke\t: "; cin >> batas[l].dosis;
	cout<<"\n============= Data Berhasil Diubah =============" << endl;
}	

//prosedur untuk menghapus data
void hapusdata(){
	int hapus, y;		//deklarasi variabel
	cout << "Hapus data ke-"; cin >> hapus;
	y = hapus-1;
	a--;
	for(int i = y; i < a; i++)		//perulangan hapus data
	{batas[i] = batas[i+1];}
	cout<<"\n========== Data ke-"<< hapus <<" Berhasil Dihapus ===========" << endl;
}

//prosedur metode InsertionSort variabel umur
void sort_umur(){
	//menampilkan data sebelum disorting
	cout << "\n:::::::::::: Data Sebelum Disorting ::::::::::::" << endl;
	cout << "************************************************" << endl;
	tampildata();
	//perulangan untuk mengakses data
    for(int i = 1; i < a; i++)
    {
        int j = i;
        //perulangan untuk menukar posisi data yang akan ditukar
        while(batas[j].umur < batas[j-1].umur && j > 0)
        {
            swap(batas[j], batas[j-1]);
            j--;
        }
    }
    //menampilkan data setelah disorting
    cout << "\n:::: Data Setelah Disorting Dengan Metode Insertion Sort ::::" << endl;
	cout << "*************************************************************" << endl;
    tampildata();
}

//prosedur metode InsertionSort variabel dosis
void sort_dosis(){
		//menampilkan data sebelum disorting
	cout << "\n:::::::::::: Data Sebelum Disorting ::::::::::::" << endl;
	cout << "************************************************" << endl;
	tampildata();
	//perulangan untuk mengakses data
    for(int i = 1; i < a; i++)
    {
        int j = i;
        //perulangan untuk menukar posisi data yang akan ditukar
        while(batas[j].dosis < batas[j-1].dosis && j > 0)
        {
            swap(batas[j], batas[j-1]);
            j--;
        }
    }
    //menampilkan data setelah disorting
    cout << "\n:::: Data Setelah Disorting Dengan Metode Insertion Sort ::::" << endl;
	cout << "*************************************************************" << endl;
    tampildata();
}

//fungsi utama program	
int main(){
	judul();	//memanggil prosedur
	awal:
	menu();		//memanggil prosedur
	//deklarasi variabel
	int pilih, umur, dosis, pilihvariabel, pilihsorting;
	char keluar;
	string nama, jenis_vaksin;
	
	//percabangan pilihan menu
	cout << "\nMasukkan Pilihan : "; cin >> pilih;
	if(pilih==1){
		tambahdata(); goto awal;
	}
	else if(pilih==2){
		tampildata(); goto awal;
	}
	else if(pilih==3){
		ubahdata(); goto awal;
	}
	else if(pilih==4){
		hapusdata(); goto awal;
	}
	else if(pilih==5){
		int pilihvariabel;
		//tampilan menu variabel yang ingin disorting
		cout << "\nApa Yang Ingin Anda Sorting?" << endl;
		cout << "[1] Sorting Umur Peserta" << endl;
		cout << "[2] Sorting Dosis" << endl;
		cout << "\nMasukkan Pilihan Anda [1/2] : "; cin >> pilihvariabel;
		cout << endl;
		//percabangan pilihan variabel yang ingin disorting
		if(pilihvariabel==1){
			sort_umur(); goto awal;
		}		
		else if(pilihvariabel==2){
			sort_dosis(); goto awal;
		}
		else{
			cout << "\n------ Pilihan Yang Anda Masukkan Salah !!! ------" << endl; goto awal;
		}
	}
	else if(pilih==6){
    cout << "\nApakah Anda Yakin Keluar Dari Program?? [y/n] : "; cin >> keluar;
    cout << endl;
    	if(keluar=='y'||keluar=='Y'){
			cout << "\n========= ANDA TELAH KELUAR DARI PROGRAM =========" << endl;
			cout << "=== Terima Kasih Telah Menggunakan Program ^_^ ===" << endl;
		}
    	else if(keluar=='n'||keluar=='N'){
			goto awal;
		}
		else{
			cout << "\n------ Pilihan Yang Anda Masukkan Salah !!! ------" << endl; goto awal;
		}
	}
	else{
		cout << "\n------ Pilihan Yang Anda Masukkan Salah !!! ------" << endl;
		cout << "\nSilahkan Masukkan Pilihan Dengan Benar [1/2/3/4/5]" << endl; goto awal;
	}
}
