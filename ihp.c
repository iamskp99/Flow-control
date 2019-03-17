#include <stdio.h>

int main() {
 //Inverted half pyramid.
	    
	int x,y,z;
	
	printf("Enter a no. : ");
	scanf("%d",&x);
	
	for(y=x;y>=0;y--){
	    
	    for(z=0;z<=y;z++){
	        
	        printf("* ");
	    }
	
	    
	 printf("\n");   
	}

	
	return 0;
}
