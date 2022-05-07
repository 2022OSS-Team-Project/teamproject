#include <stdio.h>
#include "personal_info.h"

int main() {
    Person *p[20];
    int index = 0; //데이터 번호
    int count = 0; //데이터 개수
    int menu;

    //여기 while문에 menu == 3, menu == 4인 경우 추가해주세요
    while(1) {
        menu = selectMenu();
        if(menu == 0) break;
        if(menu == 1) {
            if(count > 0) {
                listMembership(p, index);
            }
            else
                printf("데이터가 없습니다.");
        }
        else if(menu == 2) {
            p[index] = (Person *)malloc(sizeof(Person));
            count += createInfo(p[index++]);
        }
    }
    pritnf("종료됨!\n");

    return 0;
}