#include <stdio.h>

int main() {
	//Half pyramid.
	int x,y,z;
	
	printf("Enter the number :");
	scanf("%d",&x);
	
	for(y=0;y<=x;y++){
	    
	    for(z=0;z<=y;z++){
	        
	        printf("* ");
	    }
	    
	    
	    printf("\n");
	    
	    
	}
	
	return 0;
}
