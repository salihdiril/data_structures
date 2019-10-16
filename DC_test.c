#include <stdio.h>
#include <math.h>
#include "DC_lib.h"
#include <string.h>
#include <stdlib.h>




int main(){
    
    int size,telephone,code;
    int option;
    struct Person * root = (struct Person *)malloc(sizeof(struct Person));
    struct Cities * first = (struct Cities *)malloc(sizeof(struct Cities));
   
    
    
    printf("\nWelcome to the telephone contact menu\n");
    printf("\npress 1 to add a contact to the list \n");
    printf("press 2 to add a city to the list \n");
    printf("press 3 to delete a contact from the list \n");
    printf("press 4 to delete a city from the list \n");
    printf("press 5 to search a contact in the list \n");
    printf("press 6 to search a city in the list \n");
    printf("press 7 to print all elements of the contact list \n");
    printf("press 8 to print all elements of the city list \n");
    printf("press 9 to exit the menu\n");
    
        printf("\nChoose an operation number\n");
        scanf("%d",&option);
        
        while(option != 9){
        
            switch(option){
            
                case 1:
                
                    printf("how many person do you want to add ?\n");
                    scanf("%d",&size);
                    insertPerson(root,size);
                
                    
                    printf("\nChoose an operation number\n");
                    scanf("%d",&option);
                    break;
                
                case 2:
                
                    printf("how many city do you want to add ?\n");
                    scanf("%d",&size);
                    insertCity(first,size);
                    
                    printf("\nChoose an operation number\n");
                    scanf("%d",&option);
                    break;
                
                case 3:
                   
                
                    printf("enter the telephone number of the person that you want to delete\n");
                    scanf("%d",&telephone);
                    
                    root = deletePerson(root,telephone);
                    
                    printf("\nChoose an operation number\n");
                    scanf("%d",&option);
                    break;
                
                case 4:
                
                    printf("enter the code of the city that you want to delete\n");
                    scanf("%d",&code);
                    
                    first = deleteCities(first,code);
                    printf("\nChoose an operation number\n");
                    scanf("%d",&option);
                    break;
                
                case 5:
                
                    printf("enter the telephone number of the person that you want to search\n");
                    scanf("%d",&telephone);
                    searchPerson(root,telephone);
                    
                    printf("\nChoose an operation number\n");
                    scanf("%d",&option);
                    break;
                
                case 6:
                
                    printf("enter the code of the city that you want to search\n");
                    scanf("%d",&code);
                    searchCities(first,code);
                    printf("\nChoose an operation number\n");
                    scanf("%d",&option);
                    break;
                
                case 7:
                
                    printf("print out all information about the persons in the list\n");
                    displayPerson(root,first);
                    
                    printf("\nChoose an operation number\n");
                    scanf("%d",&option);
                    break;
                
                case 8:
                
                    printf("print out all information about the cities in the list\n");
                    displayCities(first);
                    
                    printf("\nChoose an operation number\n");
                    scanf("%d",&option);
                    break;
                
            }
        }
        
        
    
    free(root);
    root = 0;
    free(first);
    first = 0;
    
    return 0;
    
}
