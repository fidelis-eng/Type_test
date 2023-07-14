#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
int nilai;
int sulit();
int mudah();
system("cls");
    printf("\t_____________________   ______      ______    ______________  _______________");
    printf("\n\t|                   |   |    |      |    |    |   _____    |  |             |");
    printf("\n\t|                   |   |    |______|    |    |  |     |   |  |     ________|");
    printf("\n\t|                   |   |                |    |  |_____|   |  |    |          ");
    printf("\n\t|______      _______|   |_____      _____|    |            |  |    |________ ");
    printf("\n\t      |      |                |    |          |     _______|  |             |");
    printf("\n\t      |      |                |    |          |     |         |     ________|");
    printf("\n\t      |      |                |    |          |     |         |    |         ");
    printf("\n\t      |      |                |    |          |     |         |    |________ ");
    printf("\n\t      |      |                |    |          |     |         |             |");
    printf("\n\t      |______|                |____|          |_____|         |_____________|");
    printf("\n\n\t     Program untuk mengetes dan mengetahui kecepatan mengetik dalam 1 menit.");
    printf("\n\tProgram ini akan memberikan kata-kata secara acak yang dapat menguji mengetik user.");

    printf("\n\n\ntekan enter untuk memulai.");
    printf("\n=============================");
    printf("\n1. Mode Sulit");
    printf("\n2. Mode Mudah");
    printf("\n3. Bantuan");
    printf("\n4. Exit");
    printf("\n=============================");
    printf("\n\n\nMasukan pilihanmu ! : ");
    scanf("%d",&nilai);

switch(nilai){
case 1:
	sulit();
case 2:
	mudah();
case 3:
	break;
default:
	printf("Kamu memasukkan menu yang salah!");
	break;
	}
}

mudah(){
    static char s [100][2000] = {"ai","ba","ag","ku","ap","nd","re","st","jm","ri","an","aa","ks","st","bn",
	"ma","gn","an","mt","ba","ka","sr","tg","mt","l","an","py","ak","ku","ti","hj","gn",
	"malah","menyombongkan","menasihati","memberi35","mencari","kesalahan","setiap","orang","harus","memakan","ular","afrika","bahkan","45macan","gorengan","lemper",
	"laptop","kereta api","panas dalam","merica","mereka","kurang","ilmu","pola","jeruk","yang","bewarna","hijau","kemerahan","selain","tolak","bangga", "pemeras",
	"tua", "sehingga", "lusuh", "buram", "hangus", "pakaian", "ejaan", "selusin", "kota", "keji", "kebenaran", "layang", "kelak", "kekeringan","betah", "terpotong",
	"dorong", "semangat", "hadiah", "senandung", "belalang", "ruang", "berkomentar", "cermin", "lepaskan", "halaman", "kelembutan","landa", "landak", "hadang","alkohol",
	"suntik","klasik","keyboard","pointer","selesai"};
    char sc[500][2000]; //Membuat dummy untuk dibandingkan nantinya sebagai input dari user
    int hitungb=0;
    int hitungs=0;
    double time_taken;
    double waktu;
    double wpm;
    clock_t t;
    int y=0;
    char k,j;
    int i;
    int sulit();
    int mudah();
    int nilai;
    int iCounter = 4;
    srand(time(0));				// ini baru jaaa
    
    while(iCounter!=0){
    	iCounter--;
    	sleep(1);
    	printf("\nProgram akan dimulai dalam waktu %d", iCounter);
	}

	while(1){
    	if(getchar()){
    		t = clock();
            	break;
        }
	}
	while(1){
    for(i = 0 ; 1 ; i++){			// for nya juga baru ampe tak hingga misal kalo ada yang lebih dari 100 kata gitu
        system("cls");
		k = rand()%100;				//berfungsi untuk mengacak kata 
        printf("%s", s[k]);			//berfungsi untuk mencetak kata
        
     printf("\nSilahkan untuk mengetik disini %d\n", i);
  		scanf("%s", &sc[i]);
  		if(strcmp(s[k], sc[i])==0)
    		{
       		hitungb++;
    		}
    		else
    		{
       		hitungs++;
    		}

	t = clock()-t;
    waktu = ((double)t)/CLOCKS_PER_SEC;
 	if(waktu>=60.00){break;}

		}
	if(waktu>=60.00){break;}
	}
		wpm = (hitungb / 1);
    printf("\nkata yang benar = %d", hitungb);
    printf("\nkata yang salah = %d", hitungs);
    printf("\nwaktu yang telah dilalui = %.2f", waktu);
    printf("\nWPM = %.2f", wpm);
    
    printf("\n\ntekan enter untuk kembali ke menu");
    if(getch()){
    	return main();
	}
	
}

sulit(){
static char s [100][2000] = {"ayam","bebek","naga","kucing","sapi","mandiri","doremi","sehat","jasmani","rohani","jualan","kerangka","kubus","sepatu","balon",
	"meja","gelasan","berantakan","malaikat","bagaimana","kenapa","seharusnya","tanggung","melihat","lampu","25papan","pot","vas","kamu","ketika","hujan","mengapa",
	"malah","menyombongkan","menasihati","memberi35","mencari","kesalahan","setiap","orang","harus","memakan","ular","afrika","bahkan","45macan","gorengan","lemper",
	"laptop","kereta api","panas dalam","merica","mereka","kurang","ilmu","pola","jeruk","yang","bewarna","hijau","kemerahan","selain","tolak","bangga", "pemeras",
	"tua", "sehingga", "lusuh", "buram", "hangus", "pakaian", "ejaan", "selusin", "kota", "keji", "kebenaran", "layang", "kelak", "kekeringan","betah", "terpotong",
	"dorong", "semangat", "hadiah", "senandung", "belalang", "ruang", "berkomentar", "cermin", "lepaskan", "halaman", "kelembutan","landa", "landak", "hadang","alkohol",
	"suntik","klasik","keyboard","pointer","selesai"};
    char sc[500][2000]; //Membuat dummy untuk dibandingkan nantinya sebagai input dari user
    int hitungb=0;
    int hitungs=0;
    double time_taken;
    double waktu;
    double wpm;
    clock_t t;
    int y=0;
    char k,j;
    int i;
    int sulit();
    int mudah();
    int nilai;
    int iCounter = 4;
    srand(time(0));				//ini baru jaaaa

    while(iCounter!=0){
    	iCounter--;
    	sleep(1);
    	printf("\nProgram akan dimulai dalam waktu %d", iCounter);
	}

	while(1){
    	if(getchar()){
    		t = clock();
            	break;
        }
	}
	while(1){
    for(i = 0 ; 1 ; i++){			// for nya juga baru ampe tak hingga misal kalo ada yang lebih dari 100 kata gitu
        system("cls");
		k = rand()%100;				//berfungsi untuk mengacak kata 
        printf("%s", s[k]);			//berfungsi untuk mencetak kata
        
     printf("\nSilahkan untuk mengetik disini %d\n", i);
  		scanf("%s", &sc[i]);
  		if(strcmp(s[k], sc[i])==0)
    		{
       		hitungb++;
    		}
    		else
    		{
       		hitungs++;
    		}

	t = clock()-t;
    waktu = ((double)t)/CLOCKS_PER_SEC;
 	if(waktu>=60.00){break;}

		}
	if(waktu>=60.00){break;}
	}
		wpm = (hitungb / 1);
    printf("\nkata yang benar = %d", hitungb);
    printf("\nkata yang salah = %d", hitungs);
    printf("\nwaktu yang telah dilalui = %.2f", waktu);
    printf("\nWPM = %.2f", wpm);
    
    printf("\n\ntekan enter untuk kembali ke menu");
    if(getch()){
    	return main();
	}


}

