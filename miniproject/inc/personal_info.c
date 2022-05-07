#include <stdio.h>
#include <stdlib.h>
#include "personal_info.h"

//'3.����', '4. ����' �׸� selectMenu()�� �߰����ּ���!
int selectMenu(){
    int menu;
    printf("1. ��ȸ\n");
    printf("2. �߰�\n");
    printf("0. ����\n\n");

    printf("���ϴ� �޴���?  ");
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
    printf("�̸���? ");
    scanf("%s", p -> name);

    printf("���̴�? ");
    scanf("%d", &p -> age);

    printf("������? ");
    scanf("%d", &p -> height);

    printf("��� ��¥(��): ");
    scanf("%d", &p -> startMonth);

    printf("��� ��¥(��): ");
    scanf("%d", &p -> startDay);
}

void readInfo(Person p) {
    printf("\t%s\t%d\t%d\t%d\t\t%d\n", p.name, p.age, p.height, p.startMonth, p.startDay);
}