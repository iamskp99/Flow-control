#include <stdio.h>

int main() {
	//Alphabet half pyramid.
	char x;
	int y,z;
	
	
	printf("Enter the alphabet in capitals: ");
	scanf("%c",&x);
	
	
	for(y=65;y<=x;y++){
	    
	    for(z=65;z<=y;z++){
	        
	        char chr = (char)z;
	        printf("%c",chr);
	        
	        
	    }
	    
	    printf("\n");
	    
	}
	
	return 0;
}
