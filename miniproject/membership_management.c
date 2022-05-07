#include <stdio.h>
#include "personal_info.h"

int main() {
    Person *p[20];
    int index = 0;
    int count = 0;
    int menu;

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