
// typedef with array
#include"stdio.h"

typedef int Arr[3];
int main(){
	int i;
	Arr temp={27,30,33};
	printf("typedef using an array\n");
	for(i=0;i<3;i++){
		printf("%d ",temp[i]);
	   		
	}
	return 0;
}
