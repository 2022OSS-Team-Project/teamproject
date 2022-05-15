#include <stdio.h>
#include <stdlib.h>
#include "personal_info.h"

int main() {
    Person p[100];
    int index = 0; //데이터 번호
    int count = 0; //데이터 개수
    int menu;

    while(1) {
        menu = selectMenu();
        if(menu == 0) break;
        if(menu == 1) {
            if(count > 0) {
                listMembership(p, index);
            }
            else
                printf("no data.\n");
        }
        else if(menu == 2) {
            // p[index] = (Person *)malloc(sizeof(Person));
            // count += createInfo(p[index++]);
            count += createInfo(&p[index++]);
        }
        else if (menu == 3) {
            int no=selectDataNo(p, index);
            if(no==0){
                printf("=>cancel!");
                continue;
            }
            updateInfo(&p[no-1]);
        }
        else if (menu == 4) {
            int no=selectDataNo(p, index);
            if(no==0){
                printf("=>cancel!");
                continue;
            }
            int deleteok;
            printf("really?(delete: 1)");
            scanf("%d",&deleteok);
            if(deleteok == 1){
                if(deleteInfo(&p[no-1])) count --;       
           	 } 
        }
        else if (menu == 5) {
            // selectReadInfo(p, index);
            int no1 = selectDataNo(p, index);
            printf("\n\tName\tAge\tHeight\tweight\tStarted Month\tStarted Day\tEnd Month\tEnd Day\t\tBMI\n");
            printf("\n***************************************************************************************************************\n");
            readInfo(&p[no1-1]);
            calculateInbody(&p[no1-1]);
        }
	}
    printf("over!\n");

    return 0;
}