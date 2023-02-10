#include <stdio.h>
#include <stdlib.h>

//Program 1: klaveyden girilen degerin asal olup olmadigini bulan algoritma
//Program 2: klavyeden girilen degerin carpanlarini bulan algoritma

int main()
{

//Program 1:    
    int i,j,sayi,sakla,sayi2,kontroldegisgeni=0;
    printf("1.Program: Girilen sayinin asal olup olmadigini bulma\n\n");
	printf("Bir sayi giriniz:");
    scanf("%d",&sayi);
	
	for(i=2; i<sayi; i++){

        if (sayi%i==0 ){
        printf("\nGirdiginiz sayi asal sayi degildir.\n");
           kontroldegisgeni=1;
           break;
        }
    }
    if(sayi==0 || sayi==1) printf("sayi asal degil\n");
    else if(kontroldegisgeni==0) printf("\nGirdiginiz sayi asal sayidir\n");

	printf("\n-------------------------------------------");
//Program 2:
    printf("\n\n2.Program: Girilen sayinin carpanlarini bulma\n");
    printf("\nLutfen bir deger giriniz:"); scanf("%d",&sayi2);

	for(j=2;sayi2>1; j++){
	
	    while(sayi2%j==0){
            printf("%d ",j);
            sayi2=sayi2/j; }

    }



    return 0;
}
