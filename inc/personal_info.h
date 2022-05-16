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

int selectMenu ();
void listMembership (Person *p, int count);
int selectDataNo (Person *p, int count);
int createInfo (Person *p);
void readInfo (Person *p);
int updateInfo (Person *p);
int deleteInfo (Person *p);
void saveInfoFile (Person *p, int count);
int loadInfoFile (Person *p);
//int selectReadInfo (Person *p);
int calculateInbody (Person *p);
void underWeight (Person *p);
void normal (Person *p);
void overWeight (Person *p);