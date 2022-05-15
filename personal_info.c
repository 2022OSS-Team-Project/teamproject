#include <stdio.h>
#include <stdlib.h>
#include "personal_info.h"

int selectMenu(){
    int menu;
    printf("1. read\n");
    printf("2. add\n");
    printf("3. update\n");
    printf("4. delete\n");
    printf("5. search personal info\n");
    printf("0. end\n\n");

    printf("choice menu?  ");
    scanf("%d", &menu);

    return menu;
}

void listMembership(Person *p, int count) {
    printf("\nNo.\tName\tAge\tHeight\tweight\tStarted Month\tStarted Day\tEnd Month\tEnd Day\t\tBMI");
    printf("\n****************************************************************************************************************\n");
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
    printf("name: ");
    scanf("%s", p -> name);

    printf("age: ");
    scanf("%d", &p -> age);

    printf("height: ");
    scanf("%d", &p -> height);

    printf("weight: ");
    scanf("%d", &p -> weight);

    printf("month: ");
    scanf("%d", &p -> startMonth);

    printf("day: ");
    scanf("%d", &p -> startDay);

    printf("period(day): ");
    scanf("%d", &p->period);

    p->BMI = p->height - p->weight;

    if (p->startMonth == 1, 3, 5, 7, 8, 10, 12) {
        if (p->startDay + p->period <= 31) {
            p->endMonth = p->startMonth;
            p->endDay = p->startDay + p->period;
        } else if (p->startDay + p->period > 31) {
            int a, b = 0;
            a = (p->startDay + p->period) / 31;
            b = (p->startDay + p->period) / 31; 
            p->endMonth = a + p->startMonth;
            p->endDay = b + p->startDay;
        }
    } else if (p->startMonth == 2, 4, 6, 9, 11) {
        if (p->startDay + p->period <= 30) {
            p->endMonth = p->startMonth;
        } else if (p->startDay + p->period > 30) {
            int c, d = 0;
            c = (p->startDay + p->period) / 30;
            d = (p->startDay + p->period) / 30; 
            p->endMonth = c + p->startMonth;
            p->endDay = d + p->startDay;
        }
    }
    return 1;
}

void readInfo(Person *p) {
    printf("\t%s\t%d\t%d\t%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\n", p->name, p->age, p->height, p->weight, p->startMonth, p->startDay, p->endMonth, p->endDay, p->BMI);
}

int updateInfo(Person *p) {
    printf("\n");
    printf("name: ");
    scanf("%s",p->name);

    printf("age: ");
    scanf("%d",&p->age);

    printf("height: ");
    scanf("%d",&p->height);

    printf("weight(m): ");
    scanf("%d", &p -> weight);

    printf("month: ");
    scanf("%d",&p->startMonth);

    printf("day: ");
    scanf("%d",&p->startDay);

    p->BMI = p->height - p->weight;

    if (p->startMonth == 1, 3, 5, 7, 8, 10, 12) {
        if (p->startDay + p->period <= 31) {
            p->endMonth = p->startMonth;
            p->endDay = p->startDay + p->period;
        } else if (p->startDay + p->period > 31) {
            int a, b = 0;
            a = (p->startDay + p->period) / 31;
            b = (p->startDay + p->period) / 31; 
            p->endMonth = a + p->startMonth;
            p->endDay = b + p->startDay;
        }
    } else if (p->startMonth == 2, 4, 6, 9, 11) {
        if (p->startDay + p->period <= 30) {
            p->endMonth = p->startMonth;
        } else if (p->startDay + p->period > 30) {
            int c, d = 0;
            c = (p->startDay + p->period) / 30;
            d = (p->startDay + p->period) / 30; 
            p->endMonth = c + p->startMonth;
            p->endDay = d + p->startDay;
        }
    }

    printf("==> update!\n");
    return 1;
};

int deleteInfo(Person *p){
    p->age=-1;
    p->height=-1;
    printf("=>delete!\n");
    return 0;
}

void saveInfoFile(Person p[], int count){
	FILE* fp;

	//중량 가격 제품명
	fp= fopen("product.txt","wt");
	
	
	fclose(fp);
	printf("저장됨!\n");
}


//파일에서 데이터 불러오는 함수
int loadInfoFile(Person *p){
	int count=0;
	FILE*fp;

	//파일 내용을 읽어와서 배열에 값 추가하기




	printf("=> 로딩 성공!\n");
	return count;
}

int calculateInbody (Person *p) {
    if (p->BMI > 110) {
        underWeight(p);
    } else if (p->BMI >= 100 && p->BMI <= 110) {
        normal(p);
    } else if (p->BMI < 110) {
        overWeight(p);
    }
}

int underWeight (Person *p) {
    return printf("UNDERWEIGHT : info\n");
}

int normal (Person *p) {
    return printf("NORMAL : info\n");
}

int overWeight (Person *p) {
    return printf("OVERWEIGHT : info\n");
}