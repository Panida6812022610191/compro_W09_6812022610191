#include <stdio.h>

void forLoopDemo() {
    printf("1) For loop with continue:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 6) continue;
        printf("%d ", i);
    }
    printf("\n\n");
}

void whileLoopDemo() {                                // Function: whileLoopDemo()
    printf("2) While loop with continue:\n");         // ใช้ while loop ร่วมกับ continue
    int i = 1;
    while (i <= 10) {
        if (i == 6) {
            i++;                                      
            continue;                                  //ป้องกันลูปไม่จบ
        }
        printf("%d ", i);
        i++;
    }
    printf("\n\n");
}

void doWhileLoopDemo() {                               // Function: doWhileLoopDemo()
    printf("3) Do-While loop with continue:\n");       // ใช้ do-while loop ร่วมกับ continue
    int i = 1;              
    do {
        if (i == 6) {
            i++;
            continue;
        }
        printf("%d ", i);
        i++;
    } while (i <= 10);
    printf("\n\n");
}

int main() {                                             // Main Function
    // เรียกใช้ทั้ง 3 ฟังก์ชันเพื่อเปรียบเทียบ
    forLoopDemo();
    whileLoopDemo();
    doWhileLoopDemo();

    return 0;
}