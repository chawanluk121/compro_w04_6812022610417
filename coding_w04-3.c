#include <stdio.h>

int main() {
    char nameInitial = 'C';       // ตัวอักษรแรกของชื่อ
    int age = 18;                 // อายุ
    float weight = 50.5;          // น้ำหนัก
    char gender[] = "Male";       // เพศ

    printf("nameInitial = %c\n", nameInitial);
    printf("age = %d\n", age);
    printf("weight = %.2f\n", weight);
    printf("gender = %s\n", gender);

    return 0;
}