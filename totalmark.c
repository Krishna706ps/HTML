#include <stdio.h>

int main() {
    int c, html, ccna, book_keeping, math, total;
   
 
    printf("Enter marks for c: (out of 100): ",c);
    scanf("%d", &c);
    printf("Enter marks for html: (out of 100): ",html);
    scanf("%d", &html);
    printf("Enter marks for ccna: (out of 100): ",ccna);
    scanf("%d", &ccna);
    printf("Enter marks for book_keepimg: (out of 100): ",book_keeping);
    scanf("%d", &book_keeping);
    printf("Enter marks for math:(out of 100): ",math);
    scanf("%d", &math);
    

    total = c+html+ccna+book_keeping+math;
    printf("Total marks obtained: %d", total);
    float percentage;
    percentage = total/5;

    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
