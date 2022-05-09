#include <stdio.h>
#include <stdlib.h>
#include "personal_info.h"

int selectMenu(){
    int menu;
    printf("1. 조회\n");
    printf("2. 추가\n");
    printf("3. 수정\n");
    printf("4. 삭제\n");
    printf("0. 종료\n\n");

    printf("원하는 메뉴는?  ");
    scanf("%d", &menu);

    return menu;
}

void listMembership(Person *p, int count) {
    printf("\nNo.\tName\tAge\tHeight\tStarted Month\tStarted Day");
    printf("\n************************************************************\n");
    for(int i=0; i<count; i++) {
        if(p[i].age == -1 || p[i].height == -1)
            continue;
            printf("%2d", i+1);
            readInfo(&p[i]);
    }
    printf("\n");
}

int selectDataNo(Person *p, int count){
    int no;
    listMembership(p, count);
    printf("number (cancel:0)?");
    scanf("%d", &no);
    getchar();
    return no;
}

int createInfo(Person *p) {
    printf("이름: ");
    scanf("%s", p -> name);

    printf("연령: ");
    scanf("%d", &p -> age);

    printf("신장: ");
    scanf("%d", &p -> height);

    printf("등록 날짜(월): ");
    scanf("%d", &p -> startMonth);

    printf("등록 날짜(일): ");
    scanf("%d", &p -> startDay);

    return 1;
}

void readInfo(Person *p) {
    printf("\t%s\t%d\t%d\t%d\t\t%d\n", p->name, p->age, p->height, p->startMonth, p->startDay);
}

int updateInfo(Person *p) {
    printf("\n");
    printf("이름: ");
    scanf("%s",p->name);

    printf("연령: ");
    scanf("%d",&p->age);

    printf("신장: ");
    scanf("%d",&p->height);

    printf("등록 날짜(월): ");
    scanf("%d",&p->startMonth);

    printf("등록 날짜(일): ");
    scanf("%d",&p->startDay);

    printf("==> update!\n");
    return 1;
};

int deleteInfo(Person *p){
    p->age=-1;
    p->height=-1;
    printf("=>삭제됨!\n");
    return 0;
}
