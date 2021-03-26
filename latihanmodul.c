#include <stdio.h>

int main (){
	int x, y, jumlah;
	char garis []="\n--------------------------------------------------------------------\n";
	char garis1 []="\n===================================================================";
	char nama[50] ;
	
	printf ("Isi nama lengkap anda : ");
	gets (&nama);
	
	printf ("Masukkan nomor berikut \t\t\t Rp. ");
	scanf ("%d",&x);
	printf ("\nMasukkan nomor kedua \t\t\t Rp. ");
	scanf ("%d",&y);
	jumlah = x + y;
	printf (garis);
	printf (garis1);
	printf ("\nJadi yang harus dibayar oleh %s adalah sebesar \t Rp. %d",nama, jumlah);
	printf (garis);
	
	return 0;
}
