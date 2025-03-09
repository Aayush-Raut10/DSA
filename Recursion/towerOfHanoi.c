
#include <stdio.h>

// Recursive funtion to solve Tower of Hanoi
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {

    if (n == 1) {
    
         printf("Disk 1 is being shifted from rod %c to rod %c.\n", from_rod, to_rod);
    
    return;
    
    }
    //Move top n-1 disks from 'from_rod' to 'aux_rod' using 'to_rod' as auxiliary
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);

    //Move the nth disk from 'from_rod' to 'to_rod'
    printf("Disk %d is being shifted from rod %c to rod %c.\n", n, from_rod, to_rod);
    

    //Move n-1 disks from 'aux_rod' to 'to_rod' using 'from_rod' as auxiliary
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
    
    }

int main() {

    int n ; //number of disks

    printf("Enter the no. of disks: ");
    scanf("%d", &n);
    
    printf("\nRecursive solution to the \nTower of Hanoi problem with %d disks:\n", n);
    
    towerOfHanoi(n, 'A', 'C', 'B'); // Call the recursive function
    
    return 0;
    
    }




