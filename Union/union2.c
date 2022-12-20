// union
#include"stdio.h"
#include"stdlib.h"
#include"string.h"
union student{
	int numara;
	float sinavnotu;
	char isim[20];	
};
int main(){
	union student veri;
	basla:
	printf("Enter your name:");
	scanf("%s",veri.isim);
	printf("Enter your number: ");
	scanf("%d",&veri.numara);
	printf("Enter your exam grade: ");
	scanf("%f",&veri.sinavnotu);
	if(veri.sinavnotu<50){
		printf("Your exam grade %.2f .You failed the exam.\n",veri.sinavnotu);
	}
	else{
		printf("Your exam grade %.2f .You passed the exam.\n",veri.sinavnotu);
	}
	goto basla;
	return 0;
}
