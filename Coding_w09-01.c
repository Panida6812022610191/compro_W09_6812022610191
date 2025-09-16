#include <stdio.h>

int main() {
    int start, stop;

    // วนลูปรับค่าจนกว่าจะถูกต้อง (start < stop)
    while (1) {
        printf("Enter start number: ");                   //แสดง Enter start number
        scanf("%d", &start);

        printf("Enter stop number: ");                    //แสดง Enter stop number
        scanf("%d", &stop);

        if (start < stop) {
            break;                                         // เงื่อนไขถูกต้อง ออกจากลูป
        } else if (start == stop) {
            printf("Your Start number is equal to Stop number, please try again!\n\n");
        } else {
            printf("Your Start number is greater than Stop number, please try again!\n\n");
        }
    }

    // แสดงข้อมูล
    printf("\nStart number is %d and stop number is %d\n", start, stop);     // Start number is and stop number 
    printf("---------------\n");
    printf("Sequence from start to stop: ");              //แสดง Sequence from start to stop
    for (int i = start; i <= stop; i++) {                   
        printf("%d ", i);
    }

    printf("\nThank you.\n");                             //แสดง Thank you.

    return 0;
}