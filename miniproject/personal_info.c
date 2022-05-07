#include <stdio.h>
#include "personal_info.h"

int createInfo(Person *p) {
    printf("이름은? ");
    scanf("%s", p -> name);

    printf("나이는? ");
    scanf("%s", &p -> age);

    printf("신장은? ");
    scanf("%d", &p -> height);
}

void readInfo(Person p) {
    
}