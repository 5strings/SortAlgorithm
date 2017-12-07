//
//  main.c
//  BubbleSort
//
//  Created by Eun Jae Lee on 7/12/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int array[100];
    int n,i,j;
    int position, swap;
    
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    
    printf("Enter %d numbers:\n",n);
    
    for (i=0; i<n; i++)
        scanf("%d", &array[i]);
    
    for (i=0; i<(n-1); i++) {
        position = i;
        
        for (j = i+1; j<n; j++) {
            if (array[position] > array[j])
                position = j;
        }
        
            if (position != i) {
                swap = array[i];
                array[i] = array[position];
                array[position] = swap;
            }
        }
        
        printf("Sorted in ascending order: \n");
        
        for (i=0; i<n; i++) {
            printf("%3d", array[i]);
            printf("\n");
        
        }
    
    return 0;
}
