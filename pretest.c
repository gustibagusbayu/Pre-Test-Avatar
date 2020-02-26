#include <stdio.h>
int main()
{
    int lebar, i, j;

    printf("PROGRAM BENTUK JAM PASIR GANJIL\n");
    printf("Masukkan lebar jam : ");
    scanf("%d", &lebar);

	for(i=0;i<lebar;i++){
		for(j=0;j<lebar;j++){
			if(i<=j){
				printf("*");
			}
			else(" ");
		}
	printf("\n");
	}
	
	
    
    
    return 0;
}
