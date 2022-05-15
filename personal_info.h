typedef struct {
    char name[30];
    int age;
    int height;
    int weight;
    int startMonth;
    int startDay;
    int BMI;
    int period;
    int endMonth;
    int endDay;
} Person;

int selectMenu (); //메뉴 선택 함수
void listMembership (Person *p, int count); //현재 추가된 항목들 리스트하기
int selectDataNo (Person *p, int count);
int createInfo (Person *p);
void readInfo (Person *p);
int updateInfo (Person *p);
int deleteInfo (Person *p);
void saveInfoFile (Person p[], int count);
int readInfoFile (Person *p);
int selectReadInfo (Person *p);
int calculateInbody (Person *p);
int underWeight (Person *p);
int normal (Person *p);
int overWeight (Person *p);
int obese (Person *p);