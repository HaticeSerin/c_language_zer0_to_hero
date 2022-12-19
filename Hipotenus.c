// Hipotenüsü dik kenarlardan birinin uzunluğuna bağlı olarak hesaplamak için sadece dik kenar uzunluğunu √2 ile çarp. 
// Bu oranı bilmek özellikle sınav veya ödev sorusunda kenar uzunlukları tam sayı yerine değişkenler cinsinden verdiğinde kullanışlıdır.
// fonksiyon ile yapılmıştır

#include"stdio.h"
#include"math.h"

int main(){
	int kenar1,kenar2;
	float hypotenuse;
	printf("Enter a kenar1:\n");
	scanf("%d",&kenar1);
	printf("Enter a kenar2:\n");
	scanf("%d",&kenar2);
	hypotenuse=sqrt(kenar1*kenar1+kenar2*kenar2);
	printf("Hypotenuse :%.2f",hypotenuse);
	return 0;
}
