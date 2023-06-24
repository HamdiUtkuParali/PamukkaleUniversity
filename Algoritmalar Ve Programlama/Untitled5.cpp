#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int x,y,z,cevap=0 ;
	
	while(true) {
		srand(time(NULL)) ;
		x= 1 + ( rand() %9) ;
		y= 1 + ( rand() %9) ;
		z=x*y ;
		while(z != cevap) {
			printf("%d kere %d kactir?\n",x,y);
			scanf("%d",&cevap);
			printf("%d\n",cevap);
			if(cevap==z) {
				printf("Cok guzel!\n");
			}
			else {
				printf("Lutfen tekrar deneyin.\n") ;
			}
		}		
	}
}
