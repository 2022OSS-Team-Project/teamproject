#include <stdio.h>
#include "personal_info.h"

int createInfo(Person *p) {
    printf("�̸���? ");
    scanf("%s", p -> name);

    printf("���̴�? ");
    scanf("%s", &p -> age);

    printf("������? ");
    scanf("%d", &p -> height);
}

void readInfo(Person p) {
    
}