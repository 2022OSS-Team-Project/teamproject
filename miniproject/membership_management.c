#include <stdio.h>
#include <stdlib.h>
#include "inc/personal_info.h"

int main() {
    Person p[100];
    int index = 0; //������ ��ȣ
    int count = 0; //������ ����
    int menu;

    while(1) {
        menu = selectMenu();
        if(menu == 0) break;
        if(menu == 1) {
            if(count > 0) {
                listMembership(p, index);
            }
            else
                printf("�����Ͱ� �����ϴ�.\n");
        }
        else if(menu == 2) {
            // p[index] = (Person *)malloc(sizeof(Person));
            // count += createInfo(p[index++]);
            count += createInfo(&p[index++]);
        }
        else if (menu == 3) {
            int no=selectDataNo(p, index);
            if(no==0){
                printf("=>��ҵ�!");
                continue;
            }
            updateInfo(&p[no-1]);
        }
        else if (menu == 4) {
            int no=selectDataNo(p, index);
            if(no==0){
                printf("=>��ҵ�!");
                continue;
            }
            int deleteok;
            printf("���� �����Ͻðڽ��ϱ�?(����: 1)");
            scanf("%d",&deleteok);
            if(deleteok == 1){
                if(deleteInfo(&p[no-1])) count --;       
           	 } 
        }
	}
    printf("�����!\n");

    return 0;
}
