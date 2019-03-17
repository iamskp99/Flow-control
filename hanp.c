#include <stdio.h>

int main() {
	//Number half pyramid.
	int x,y,z;
	
	
	printf("Enter the no.: ");
	scanf("%d",&x);
	
	for(y=0;y<=x;y++){
	    
	    for(z=1;z<=y;z++){
	        
	        printf("%d ",z);
	        
	        
	        
	    }
	    
	    printf("\n");
	    
	}
	
	return 0;
}
