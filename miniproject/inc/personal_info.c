#include <stdio.h>
#include "personal_info.h"

int createInfo(Person *p) {
    printf("이름은? ");
    scanf("%s", p -> name);

    printf("나이는? ");
    scanf("%s", &p -> age);

    printf("신장은? ");
    scanf("%d", &p -> height);

    printf("등록 날짜(월): ");
    scanf("%d", &p -> startMonth);

    printf("등록 날짜(일): ");
    scanf("%d", &p -> startDay);
}

void readInfo(Person p) {
    printf("\t%s\t%d\t%d\t%d\t%d\n", p.name, p.age, p.height, p.startMonth, p.startDay);
}