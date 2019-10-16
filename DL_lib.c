#include "DL_lib.h"
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


void insertPerson(struct Person * root, int size){
    
    struct Person * temp, * tail;
    int i;
    
    
    
    printf("surname: \n");
    scanf("%s",root -> surname);
    printf("\n");
    
    printf("name: \n");
    scanf("%s",root -> name);
    printf("\n");
    
    printf("city: \n");
    scanf("%s",root -> city);
    printf("\n");
    
    printf("homeNumber: \n");
    scanf("%s",root -> homeNumber);
    printf("\n");
    
    printf("telephone without code: \n");
    scanf("%d",&root -> telephone);
    printf("\n");
    
    root -> next = 0;
    root -> prev = 0;
    
    temp = root;
    tail = root;
    
    for(i=1; i<size; i++){
        
        temp -> next = (struct Person *)malloc(sizeof(struct Person));
        temp = temp -> next;
        
        
        
        
        printf("surname: \n");
        scanf("%s",temp -> surname);
        printf("\n");
        
        printf("name: \n");
        scanf("%s",temp -> name);
        printf("\n");
        
        printf("city: \n");
        scanf("%s",temp -> city);
        printf("\n");
        
        printf("homeNumber: \n");
        scanf("%s",temp -> homeNumber);
        printf("\n");
        
        printf("telephone without code: \n");
        scanf("%d",&temp -> telephone);
        printf("\n");
        
        temp -> next = 0;
        temp -> prev = tail;
        tail = tail -> next;
        
    }
    
    
    
}



void insertCity(struct Cities * first, int size){
 
    struct Cities * temp, * tail;
    int i;
    
    printf("city: \n");
    scanf("%s",first -> city);
    printf("\n");
    
    printf("telephone (city) code: \n");
    scanf("%d",&first -> code);
    printf("\n");
    
    first -> next = 0;
    first -> prev = 0;
    
    temp = first;
    tail = first;
    
    for(i = 1; i<size; i++){
        
        temp -> next = (struct Cities *)malloc(sizeof(struct Cities));
        temp = temp -> next;
        
        printf("city: \n");
        scanf("%s",temp -> city);
        printf("\n");
    
        printf("telephone (city) code: \n");
        scanf("%d",&temp -> code);
        printf("\n");
        
            
        temp -> next = 0;
        temp -> prev = tail;
        tail = tail -> next;
    
    }
    
    
}


struct Person * deletePerson(struct Person * root, int telephone){
    
    
    struct Person * temp = root; 
    struct Person * p = root;
    struct Person * q = root;
    
    while(p){
        
        if(p -> telephone == telephone){
            
            if(root -> telephone == p -> telephone){
                
                temp = temp -> next;
                return temp;
                
            }
            else{
                
                while(q -> next != p){
                    
                    q = q -> next;
                }
                
                q -> next = p -> next;
                return temp;
            }
        }
        
        p = p -> next;
        
    }
    
    printf("the person you want to delete is not found\n");
    
    return root;
        
    
}


struct Cities * deleteCities(struct Cities * root, int code){
    
    struct Cities * temp = root; 
    struct Cities * p = root;
    struct Cities * q = root;
    
    while(p){
        
        if(p -> code == code){
            
            if(root -> code == p -> code){
                
                temp = temp -> next;
                return temp;
                
            }
            else{
                
                while(q -> next != p){
                    
                    q = q -> next;
                }
                
                q -> next = p -> next;
                return temp;
            }
        }
        
        p = p -> next;
        
    }
    
    printf("the city you want to delete is not found\n");
    
    return root;
}


void searchPerson(struct Person * root, int telephone){
    
        struct Person * temp = root;
        
        while(temp){
            
            if(temp -> telephone == telephone){
                
                printf("name: %s\n  surname: %s\n   city:%s \n   homeNumber: %s\n   telephone: %d\n",temp -> name,temp -> surname, temp -> city,temp -> homeNumber,temp -> telephone);
                return;
            }
            
            temp = temp -> next;
            
        }
        
        printf("the person you search is not in the list\n");
        
}

void searchCities(struct Cities * root, int code){
    
    struct Cities * temp = root;
        
        while(temp){
            
            if(temp -> code == code){
                
                printf("city: %s        city code:%d\n",temp -> city,temp -> code);
                return;
            }
            
            temp = temp -> next;
            
        }
        
        printf("the person you search is not in the list\n");
        
}


void displayPerson(struct Person * root, struct Cities * first){
    
    struct Person * temp, * tail;
    struct Cities * p = first;
    
    temp = root;
    tail = root;
    
    while(temp -> next){
        temp = temp -> next;
    }
    
    while(temp){
        
       if(strcmp(p -> city , temp -> city) == 0){
           
            printf("\nsurname: %s\n",temp -> surname);
            printf("name: %s\n",temp -> name);
            printf("city: %s\n",temp -> city);
            printf("home number: %s\n",temp -> homeNumber);
            printf("telefon: %d %d\n",p -> code,temp -> telephone);
            
            temp = temp -> prev;
            
       }
       else{
           p = p -> next;
       }
       
       
       
    }
    
}


void displayCities(struct Cities * first){
    
    struct Cities * p = first;
    
    while(p -> next){
        p = p -> next;
    }
    
    
    while(p){
        
        printf("\ncity: %s \n",p->city);
        printf("city code: %d\n",p->code);
        
        p = p -> prev;
        
    }
}


