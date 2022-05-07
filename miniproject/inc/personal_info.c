#include <stdio.h>
#include <stdlib.h>
#include "personal_info.h"

//'3.수정', '4. 삭제' 항목 selectMenu()에 추가해주세요!
int selectMenu(){
    int menu;
    printf("1. 조회\n");
    printf("2. 추가\n");
    printf("0. 종료\n\n");

    printf("원하는 메뉴는?  ");
    scanf("%d", &menu);

    return menu;
}

void listMembership(Person *p[], int count) {
    printf("\nNo.\tName\tAge\tHeight\tStarted Month\tStarted Day");
    printf("\n************************************************************\n");
    for(int i=0; i<count; i++) {
        if(p[i] == NULL)
            continue;
        printf("%2d", i+1);
        readInfo(*p[i]);
    }
    printf("\n");
}

int createInfo(Person *p) {
    printf("이름은? ");
    scanf("%s", p -> name);

    printf("나이는? ");
    scanf("%d", &p -> age);

    printf("신장은? ");
    scanf("%d", &p -> height);

    printf("등록 날짜(월): ");
    scanf("%d", &p -> startMonth);

    printf("등록 날짜(일): ");
    scanf("%d", &p -> startDay);
}

void readInfo(Person p) {
    printf("\t%s\t%d\t%d\t%d\t\t%d\n", p.name, p.age, p.height, p.startMonth, p.startDay);
}