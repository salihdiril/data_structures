#include "SL_lib.h"
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>






void insertPerson(struct Person * root, int size){
    
    struct Person * temp;
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
    
    temp = root;
    
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
        
    }
    
    free(temp);
    temp = 0;
    
}

void insertCity(struct Cities * first, int size){
 
    struct Cities * temp;
    int i;
    
    printf("city: \n");
    scanf("%s",first -> city);
    printf("\n");
    
    printf("telephone (city) code: \n");
    scanf("%d",&first -> code);
    printf("\n");
    
    first -> next = 0;
    
    temp = first;
    
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
    
    }
    
    free(temp);
    temp = 0;
}

/* void sortPerson(struct Person * root){
    
    int count1,count2,index,i ;
    struct Person * temp = root;
    struct Person * p,* q,* tail;
    char min[20] = "zzzzzzzzzzzzz";
    
    index = 0;
    count1 = 0;
    count2 = 0;
    p = root; // i used this variable for change the node's place
    q = root; //i used this variable for change the node's place
    tail = root; // i used this variable for learning the order of the node that has min ASCII value
    
    
    while(temp -> next){
        
        
        
        while(tail){
            
            count2++;
        
            if(strcmp(tail->surname,min)<0){
            
                strcpy(min,tail->surname);
                count1++;
                index = count2; //we can know by this statement that the min string changed index. node
            }
            
            tail = tail -> next;
        }
                
        //if count == 1 than it means min change its value only 1 time and any string will come first if we compare it with min by strcmp function. So first node will be already sorted.
        if( count1 == 1){
            
            temp = temp -> next;
        }
        
        if(count1 != 1){
            
            
            for(i=0; i<index - 2; i++){ //if we want to arrive index. node we should jump index - 1 times but i want to arrive (index - 1). node 
                
                
                p = p -> next;
                
            }
            
            if(p -> next -> next){
                
                q -> next = temp ;
                p -> next = p -> next -> next;
                temp = q;
            }
            else{
                
                
                q -> next = temp;
                temp = q;
                p -> next = 0;
                
            }
            
            temp = temp -> next;
            
            q = temp;
            p = temp;
            tail = temp;
            count2 = 0;
            count1 = 0;
            index = 0;
            strcpy(min,"zzzzzzzzzzzzz");
        }
    }
}
            
    */

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

//Sir, you didn't mention us by which criter we will search persons in the list.
//ı used telephone number for search criter because only telephone number is different for all person.
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
    
    struct Person * temp = root;
    struct Cities * p = first;
    
    while(temp){
        
       if(strcmp(p -> city , temp -> city) == 0){
           
            printf("\nsurname: %s\n",temp -> surname);
            printf("name: %s\n",temp -> name);
            printf("city: %s\n",temp -> city);
            printf("home number: %s\n",temp -> homeNumber);
            printf("telefon: %d %d\n",p -> code,temp -> telephone);
            
            temp = temp -> next;
            
       }
       else{
           p = p -> next;
       }
       
       
       
    }
}


void displayCities(struct Cities * first){
    
    struct Cities * p = first;
    
    while(p){
        
        printf("\ncity: %s \n",p->city);
        printf("city code: %d\n",p->code);
        
        p = p -> next;
        
    }
}



      
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    



    

