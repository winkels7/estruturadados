#include <stdio.h>

int main(){
	int i;
	
	for(i=0;i<10;i++){
		if (i==5){
			break;
		}
		
		printf("%d", i);
	}
	printf("acabou\n");
	return 0;
}
