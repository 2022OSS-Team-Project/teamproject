#include <stdio.h>
#include <stdlib.h>
#include "inc/personal_info.h"

int main() {
    Person *p[20];
    int index = 0; //������ ��ȣ
    int count = 0; //������ ����
    int menu;

    //���� while���� menu == 3, menu == 4�� ��� �߰����ּ���
    while(1) {
        menu = selectMenu();
        if(menu == 0) break;
        if(menu == 1) {
            if(count > 0) {
                listMembership(p, index);
            }
            else
                printf("�����Ͱ� �����ϴ�.");
        }
        else if(menu == 2) {
            p[index] = (Person *)malloc(sizeof(Person));
            count += createInfo(p[index++]);
        }
    }
    printf("�����!\n");

    return 0;
}