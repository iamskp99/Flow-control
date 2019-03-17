#include <stdio.h>

int main() {
 //Full Pyramid.
	    
	int x,y,z,o;
	
	printf("Enter a no. : ");
	scanf("%d",&x);
	
	for(y=0;y<=x;y++){
	    
	    for(z=x-y;z>=0;z--){
	        printf(" ");
	   }
	    for(o=0;o<=y;o++){
	        printf("* ");
	    }     
	        
	    printf("\n");
	}

	return 0;
}
