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
    printf("\n\tProgram ini akan memberikan kata-kata secara acak yang dapat menguji mengetik user.\n");

    printf("\n\t\t\t\t{===========================}");
    printf("\n\t\t\t\t{      1. Mode Sulit        }");			  
    printf("\n\t\t\t\t{      2. Mode Mudah        }");       
    printf("\n\t\t\t\t{      3. Bantuan           }");
    printf("\n\t\t\t\t{      4. Exit              }");
    printf("\n\t\t\t\t{===========================}");
    printf("\n\nMasukan pilihanmu ! : ");
    scanf("%d",&nilai);
system("cls");

switch(nilai){
case 1:
	sulit();
	break;
case 2:
	mudah();
	break;
case 3:
	bantuan();
	break;
case 4:
	printf("Terimakasih telah menggunakan program kami!");
	return 0;
	
default:
printf("Anda memasukkan input yang salah");

printf("\n\ntekan enter untuk kembali ke menu");
    if(getch()){
     return main();
 		}
	}
}

bantuan(){
printf("\n\n{=================================LATAR BELAKANG=========================================}");
printf("\n{Selamat datang di program untuk mengukur seberapa cepat anda dalam mengetik             }");
printf("\n{Pembuatan program ini dilatarbelakangi oleh zaman modern yang selalu di berkembang      }");
printf("\n{Dengan ini, kami membuat program ini untuk melatih user agar bisa mengetik dengan baik  }");
printf("\n{========================================================================================}");

printf("\n\n{=====================================CARA MAIN==========================================}");
printf("\n{+Program ini cukup sederhana, user hanya perlu mengetik kembali yang kata yang muncul   }");
printf("\n{+User perlu mengetik secepat mungkin dalam waktu 60 detik                               }");
printf("\n{+Nanti pada akhir program akan diberi kesimpulan dari hasil penulisan oleh user         }");
printf("\n{+Selamat bermain !                                                                      }"); 
printf("\n{========================================================================================}");

printf("\n\ntekan enter untuk kembali ke menu");
    if(getch()){
     return main();
 }
}

mudah(){
    char s [100][2000] = {"ai","ba","ag","ku","ap","nd","re","st","jm","ri","an","aa","ks","st","bn",
	"ma","gn","an","mt","ba","ka","sr","tg","mt","l","an","py","ak","ku","ti","hj","gn",
	"mh","mn","mi","me","mi","kn","sp","og","hu","ma","ular","af","bn","ca","ga","lr",
	"la","kp","as","mi","ka","kr","im","pz","jx","ya","ba","hijau","ke","sn","to","ba", "px", 
	"ta", "sa", "zh", "bm", "hn", "pn", "ej", "lu", "kg", "kc", "ks", "ln", "ao", "m;","x[", "tg", 
	"dg", "st", "ah", "se", "bg", "rg", "ar", "cn", "la", "ha", "kn","la", "lx", "hz","pz"};
    char sc[300][2000]; //Membuat dummy untuk dibandingkan nantinya sebagai input dari user
    int hitungb=0;
    int hitungs=0;
    double waktu;
    double wpm;
    clock_t mulai_t, akhir_t, total_t;
    int y=0;
    int k,i;
    int sulit();
    int mudah();
    int nilai;
    int iCounter = 4;
    srand(time(0));
    
while(iCounter!=0){
     iCounter--;
     sleep(1);
     printf("\nProgram akan dimulai dalam waktu %d", iCounter);
 }

while(1){
     if(getchar()){
      mulai_t = clock();
             break;
        }
 }  
 
	for(i = 0 ; 1 ; i++){  
		system("cls");

		k = rand()%100;    //berfungsi untuk mengacak kata 
	    printf("\n===========Ketik Kembali!===========");
   	    printf("\n\t\t%s", s[k]);
	    printf("\n====================================");   //berfungsi untuk mencetak kata
   		
		akhir_t = clock();
	   	total_t = akhir_t-mulai_t;
		waktu = ((double)total_t)/CLOCKS_PER_SEC;
		
		if(waktu <= 60.0)
		{printf("\n\t\t%.0f:00", waktu);}
		else if(waktu >= 60.0)
		{printf("\n\t\t60:00\n\n\tSelesaikanlah\n");}
		
		printf("\nSilahkan untuk mengetik disini\n");
    	scanf("%s", &sc[i]);
    	
	    if(strcmp(s[k], sc[i])==0)
	      {hitungb++;}
        else
	      {hitungs++;}
 
  if(waktu>=60.0){break;}
  
  }
  
    wpm = (hitungb / 1);
    printf("\nkata yang benar = %d", hitungb);
    printf("\nkata yang salah = %d", hitungs);
    printf("\nWPM = %.2f", wpm);
    
    printf("\n\ntekan enter untuk kembali ke menu");
    if(getch()){
	memset(sc, '\0', sizeof(sc));
	printf("\n%s\n", sc[0]);
    return main();
    }

}


sulit(){
	char s [100][2000] = {"ayam","bebek","naga","kucing","sapi","mandiri","doremi","sehat","jasmani","rohani","jualan","kerangka","kubus","sepatu","balon",
	"meja","gelasan","berantakan","malaikat","bagaimana","kenapa","seharusnya","tanggung","melihat","lampu","25papan","pot","vas","kamu","ketika","hujan","mengapa",
	"malah","menyombongkan","menasihati","memberi35","mencari","kesalahan","setiap","orang","harus","memakan","ular","afrika","bahkan","45macan","gorengan","lemper",
	"laptop","kereta api","panas dalam","merica","mereka","kurang","ilmu","pola","jeruk","yang","bewarna","hijau","kemerahan","selain","tolak","bangga", "pemeras", 
	"tua", "sehingga", "lusuh", "buram", "hangus", "pakaian", "ejaan", "selusin", "kota", "keji", "kebenaran", "layang", "kelak", "kekeringan","betah", "terpotong", 
	"dorong", "semangat", "hadiah", "senandung"};
	char sc[300][2000]; //Membuat dummy untuk dibandingkan nantinya sebagai input dari user
    int hitungb=0;
    int hitungs=0;
    double waktu;
    double wpm;
    clock_t mulai_t, akhir_t, total_t;
    int y=0;
    int k,i;
    int sulit();
    int mudah();
    int nilai;
    int iCounter = 4;
    srand(time(0));
    
while(iCounter!=0){
     iCounter--;
     sleep(1);
     printf("\nProgram akan dimulai dalam waktu %d", iCounter);
 }

while(1){
     if(getchar()){
      mulai_t = clock();
             break;
        }
 }  
 
	for(i = 0 ; 1 ; i++){  
		system("cls");

		k = rand()%99;    //berfungsi untuk mengacak kata 
		printf("\n%d", k);

	    printf("\n===========Ketik Kembali!===========");
		printf("\n\t\t%d," &k)
	    if (s[k] != NULL || s[k] != ' '){
			printf("\n\t\t%d," k);
   	    	printf("\n\t\t%s", s);			//berfungsi untuk mencetak kata
    	}
	    printf("\n====================================");   //berfungsi untuk mencetak kata
   		
		akhir_t = clock();
	   	total_t = akhir_t-mulai_t;
		waktu = ((double)total_t)/CLOCKS_PER_SEC;
		
		if(waktu <= 60.0)
		{printf("\n\t\t%.0f:00", waktu);}
		else if(waktu >= 60.0)
		{printf("\n\t\t60:00\n\n\tSelesaikanlah\n");}
		
		printf("\nSilahkan untuk mengetik disini\n");
    	scanf("%s", &sc[i]);
    	
	    if(strcmp(s[k], sc[i])==0)
	      {hitungb++;}
        else
	      {hitungs++;}
 
  if(waktu>=60.0){break;}
  
  }
  
    wpm = (hitungb / 1);
    printf("\nkata yang benar = %d", hitungb);
    printf("\nkata yang salah = %d", hitungs);
    printf("\nWPM = %.2f", wpm);
    
    printf("\n\ntekan enter untuk kembali ke menu");
    if(getch()){
	memset(sc, '\0', sizeof(sc));
	printf("\n%s\n", sc[0]);
	return main();
	}

}
