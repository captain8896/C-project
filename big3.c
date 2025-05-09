#include <stdio.h>

biggest3() {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("\nThe largest number is: %d \n", a);
    } else if (b >= a && b >= c) {
        printf("\nThe largest number is: %d \n", b);
    } else {
        printf("\nThe largest number is: %d \n", c);
    }

   // return 0;
}

