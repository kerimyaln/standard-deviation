#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
void main(){
	int i,k,l,N;
	double ortalama=0,sonuc=0;
double eleman[400];
printf("How many members will enter ? \n");
scanf("%d",&N);
for(i=0;i<N;i++){
printf("%d.enter the number \n",i+1);
scanf("%lf",&eleman[i]);
}
for(k=0;k<N;k++)
	ortalama=ortalama+eleman[k];
ortalama=ortalama/N;
for(l=0;l<N;l++)
	sonuc=sonuc+pow((eleman[l]-ortalama),2);
sonuc=sqrt(sonuc/(N-1));

printf("result = %lf\n",sonuc);



}
