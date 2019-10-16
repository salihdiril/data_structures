#ifndef MYLIB_H_
#define MYLIB_H_

struct Person {
    
    struct Person * next;
    int telephone;
    char name[20];
    char surname[20];
    char city[20];
    char homeNumber[20];
    
    
};


struct Cities {
    
    struct Cities * next;
    char city[20];
    int code;
    
    
};


void insertPerson(struct Person * root,int size );
void insertCity(struct Cities * first, int size);
// void sortPerson(struct Person * root);
struct Person * deletePerson(struct Person * root, int telephone);
struct Cities * deleteCities(struct Cities * root, int code);
void displayPerson(struct Person * root, struct Cities * first);
void displayCities(struct Cities * first);
void searchPerson(struct Person * root, int telephone);
void searchCities(struct Cities * root, int code);






























#endif
