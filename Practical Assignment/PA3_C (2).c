// Print My Name "RAJEEV RANJAN" using asterisk pattern
#include <stdio.h>
int main() {
    int i, j, n = 7;
    
    for (i = 0; i < n; i++){
      // Print letter R
        for (j = 0; j < n; j++){
            if (j == 0 || (i == 0 ||i == 3) && ( j > 1 && j < 5) || 
            (i == 1 || i == 2) && (j == 6) || (i == 4 && j == 2) || 
            (i == 5 && j == 4) || (i == 6 && j == 6))
                printf("*");
            else 
                printf(" ");
        }
        
        printf("   ");// Space between letters
        
        // Print letter A
        
        for (j = 0; j < n; j++) {
            if ((j == n / 2 - i || j == n / 2 + i) && i <= n / 2) // Upper part
                printf("*");
            else if (i == n / 2 && j > n / 2 - i && j < n / 2 + i) // Middle line
                printf("*");
            else if (i > n / 2 && (j == 0 || j == n - 1)){ // Lower part
                printf("*");
            }
            else
                printf(" ");
        }
        printf("   "); // Space between letters
        
        // Print letter j
        
        for (j = 0; j < 11; j++){
            if ((i == 0) && (j > 1 && j < 11) // Upper Part
            || (i > 0 && i < 6)  && (j == 6) // Middle Part
            || (i == 6) && (j > 0 && j < 6) || (i == 4 || i == 5) && (j == 0))// Lower Part
            {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        
         printf("   ");// Space between letters
         
         // print letter E

        for (j = 0; j < n; j++) {
            if (j == 0 || (i == 0 || i == n / 2 || i == n - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("   "); // Space between letters
        
        // print letter E

        for (j = 0; j < n; j++) {
            if (j == 0 || (i == 0 || i == n / 2 || i == n - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("   "); // Space between letters
        
        // Print letter V 
        
        for (j = 0; j < 13; j++) {
            if ((i == j) || (i == 0 && j == 12) || (i == 1 && j == 11) | 
            (i == 2 && j == 10) || (i == 3 && j == 9) || (i == 4 && j == 8) || 
            (i == 5 && j == 7))
                printf("*");
            else
                printf(" ");
        }
        
        printf("          ");// Space between letters
        
        // Print letter R
        
        for (j = 0; j < n; j++){
            if (j == 0 || (i == 0 ||i == 3) && ( j > 1 && j < 5) || 
            (i == 1 || i == 2) && (j == 6) || (i == 4 && j == 2) || 
            (i == 5 && j == 4) || (i == 6 && j == 6))
                printf("*");
            else 
                printf(" ");
        }
        
        printf("   ");// Space between letters
        
        // Print letter A
        
        for (j = 0; j < n; j++) {
            if ((j == n / 2 - i || j == n / 2 + i) && i <= n / 2) // Upper part
                printf("*");
            else if (i == n / 2 && j > n / 2 - i && j < n / 2 + i) // Middle line
                printf("*");
            else if (i > n / 2 && (j == 0 || j == n - 1)){ // Lower part
                printf("*");
            }
            else
                printf(" ");
        }
        printf("   "); // Space between letters
        
        // print letter N
        
        for (j = 0; j < 13; j++){
            if (j == 0 || j == 12)
                printf("*");
            else if (j == 2 * i)
                printf("*");
            else 
                printf(" ");
        }
        
        printf("   ");// Space between letters
        
        // Print letter j
        
        for (j = 0; j < 11; j++){
            if ((i == 0) && (j > 1 && j < 11) // Upper Part
            || (i > 0 && i < 6)  && (j == 6) // Middle Part
            || (i == 6) && (j > 0 && j < 6) || (i == 4 || i == 5) && (j == 0))// Lower Part
            {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        
         printf("   ");// Space between letters
         
         // Print letter A
        
        for (j = 0; j < n; j++) {
            if ((j == n / 2 - i || j == n / 2 + i) && i <= n / 2) // Upper part
                printf("*");
            else if (i == n / 2 && j > n / 2 - i && j < n / 2 + i) // Middle line
                printf("*");
            else if (i > n / 2 && (j == 0 || j == n - 1)){ // Lower part
                printf("*");
            }
            else
                printf(" ");
        }
        printf("   "); // Space between letters
        
        // print letter N
        
        for (j = 0; j < 13; j++){
            if (j == 0 || j == 12)
                printf("*");
            else if (j == 2 * i)
                printf("*");
            else 
                printf(" ");
        }
        
        printf("   ");// Space between letters
        
        printf("\n");
        
    }
    return 0;
}