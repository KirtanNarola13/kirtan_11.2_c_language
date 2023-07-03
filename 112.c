#include <stdio.h>

void main() {
    int a[5];

    printf("\nEnter array elements:\n");
    int i;
    for ( i = 0; i < 5; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
				
    int *ptr = a;
    int *ptr2 = a + 5 - 1;
	
	int ptr3;
	
		for(i=0;i<5;i++){
		if(ptr < ptr2){
		
         ptr3 = *ptr;
        *ptr = *ptr2;
        *ptr2 = ptr3;

        ptr++;
        ptr2--;
    }
    
    }

    printf("\nReversed array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d  ", a[i]);

    }


}
