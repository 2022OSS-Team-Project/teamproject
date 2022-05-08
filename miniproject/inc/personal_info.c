#include <stdio.h>
#include <stdlib.h>
#include "personal_info.h"

//'3.수정', '4. 삭제' 항목 selectMenu()에 추가해주세요!
int selectMenu(){
    int menu;
    printf("1. read\n");
    printf("2. add\n");
    printf("3. update\n");
    printf("4. delete\n");
    printf("0. end\n\n");

    printf("choice?  ");
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
    printf("name? ");
    scanf("%s", p -> name);

    printf("age? ");
    scanf("%d", &p -> age);

    printf("height? ");
    scanf("%d", &p -> height);

    printf("month: ");
    scanf("%d", &p -> startMonth);

    printf("day: ");
    scanf("%d", &p -> startDay);

    return 1;
}

void readInfo(Person *p) {
    printf("\t%s\t%d\t%d\t%d\t\t%d\n", p->name, p->age, p->height, p->startMonth, p->startDay);
}

int updateInfo(Person *p) {
    printf("\n");
    printf("name? ");
    scanf("%s",p->name);

    printf("age? ");
    scanf("%d",&p->age);

    printf("height? ");
    scanf("%d",&p->height);

    printf("month ");
    scanf("%d",&p->startMonth);

    printf("day ");
    scanf("%d",&p->startDay);

    printf("==> update!\n");
    return 1;
};

int deleteInfo(Person *p){
    p->age=-1;
    p->height=-1;
    printf("==> delete!\n");
    return 0;
}
