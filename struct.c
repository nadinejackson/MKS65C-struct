#include <stdio.h>
#include "struct.h"
#include <time.h>
#include <string.h>
#include <stdlib.h>

struct student {
    char name[256];
    float gpa;
};

char names[40][15] = {
    "Nadine", "Jack", "Michael", "Hasif",
    "Cooper", "Jason", "Raymond", "Joan",
    "Raunak", "Bill", "Kevin", "Mandy",
    "Tina", "Matthew", "Maggie", "Brian",
    "Puneet", "Calvin", "Jabir", "Camilla",
    "Hui Min", "Oliver", "Aaron", "Michael",
    "Horace", "Ahnaf", "Adil", "Imad",
    "Wei Wen", "Samuel", "Christopher", "Yulia",
    "Leah", "JonAlf", "David", "Peter",
    "Ivan", "Fabiha", "Rohan", "Michelle"
};

struct student example()
{
    srand(time(NULL));
    struct student bob;
    strcpy(bob.name, names[rand() % 40]);
    bob.gpa = rand() % 37 + 64;
    return bob;
}

void modify(struct student *s, char *newName, float newGPA)
{
    strcpy(s->name, newName);
    s->gpa = newGPA;
}

void vowel(struct student *s){
    int i = 0;
    char *vowels = "aeiou";
    char * mod = s->name;
    while (mod++){
        if (*mod){}
    }
}

void printStu(struct student s)
{
    printf("%s's gpa: %f\n", s.name, s.gpa);
}

int main(){
    printStu(example());
    struct student test;
    strcpy(test.name, "Voldemort");
    test.gpa = 55;
    char *mcName = "Harry";
    printStu(test);
    modify(&test, mcName, 99.5);
    printStu(test);
    return 0;
}
