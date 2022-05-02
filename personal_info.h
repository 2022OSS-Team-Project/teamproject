typedef struct {
    char name[10];
    int age;
    int height;
    int startMonth;
    int startDay;
    int InBodyInfo;
} Person;

int createInfo (Person *p);
void readInfo (Person *p);
int updateInfo (Person *p);
int deleteInfo (Person *p);
int saveInfoFile (Person *p);
int readInfoFile (Person *p);
int calculateInbody (Person *p);
int recommandDiet (Person *p);
int recommandExercise (Person *p);
int calculateExpirationDate (Person *p);