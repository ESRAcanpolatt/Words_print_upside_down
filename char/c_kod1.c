#include <stdio.h>

char y[]={'i','s','t','a','n','b','u','l'};


main(void){
    int i,a=8;
    
    while(a>0){
    	
	for(i=0;i<9;i++){
		if (i-a<0){}
		
		else{
			printf("%c",y[i-a]);
		}
     	}
     	
    printf("\n");
	a--;
}
}
	
