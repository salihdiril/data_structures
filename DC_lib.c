#include "DC_lib.h"
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void insertPerson(struct Person * root,int size ){
    
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
    
    root -> next = root;
    root -> prev = root;
    
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
        
        temp -> next = root;
        temp -> prev = tail;
        tail = tail -> next;
        root -> prev = temp;
        
    }
    
    free(temp);
    temp = 0;
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
    
    first -> next = first;
    first -> prev = first;
    
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
            
        temp -> next = first;
        temp -> prev = tail;
        tail = tail -> next;
        first -> prev = temp;
    
    }
    
    free(temp);
    temp = 0;
}


struct Person * deletePerson(struct Person * root, int telephone){
    
    
    struct Person * temp = root; 
    struct Person * p = root;
    struct Person * q = root;
    
    do{
        
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
    while(p != root);
    
    printf("the person you want to delete is not found\n");
    
    return root;
        
    
}


struct Cities * deleteCities(struct Cities * root, int code){
    
    struct Cities * temp = root; 
    struct Cities * p = root;
    struct Cities * q = root;
    
    do{
        
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
    while(p != root);
    
    printf("the city you want to delete is not found\n");
    
    return root;
}


void searchPerson(struct Person * root, int telephone){
    
        struct Person * temp = root;
        
        do{
            
            if(temp -> telephone == telephone){
                
                printf("name: %s\n  surname: %s\n   city:%s \n   homeNumber: %s\n   telephone: %d\n",temp -> name,temp -> surname, temp -> city,temp -> homeNumber,temp -> telephone);
                return;
            }
            
            temp = temp -> next;
            
        }
        while(temp != root);
        
        printf("the person you search is not in the list\n");
        
}


void searchCities(struct Cities * root, int code){
    
    struct Cities * temp = root;
        
        do{
            
            if(temp -> code == code){
                
                printf("city: %s        city code:%d\n",temp -> city,temp -> code);
                return;
            }
            
            temp = temp -> next;
            
        }
        while(temp != root);
        
        printf("the person you search is not in the list\n");
        
}



void displayPerson(struct Person * root, struct Cities * first){
    
    struct Person * temp = root;
    struct Cities * p = first;
    
    do{
        
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
    while(temp != root);
}


void displayCities(struct Cities * first){
    
    struct Cities * p = first;
    
    do{
        
        printf("\ncity: %s \n",p->city);
        printf("city code: %d\n",p->code);
        
        p = p -> next;
        
    }
    while(p != first);
}
/*
 * 
 * bu kodu doubly circular linked list mantığı ile yazdım ve display ederken eğer p = p -> prev ya da temp = temp -> prev dersem sorunsuz çalışıyor
 * ancak yukarıdaki display fonksiyonlarında yapınca segmentation fault alıyorum. iki fonksiyonu da aynı mantık ile yazdım ama alttaki çalışıyor yukarıdaki segmentaion fault hatası veriyor. yaklaşık 2 saat boyunca neden bu hatayı aldığımı anlamaya çalıştım. segmentation fault hatası bildiğim kadarıyla pointerın yanlış bir yeri (bizim belirtmediğimiz bir yeri) gösterdiğinde oluyor. Bu hatanın nedenini anlamak için defalarca koduma bakarak linked listi görselleştirerek çizdim ve kodumda bir hata bulamadım. En son baştan bir kod yazdım doğru olduğunu kabul ettiğim mantığımla ve çalıştı. yani algoritmamda bir sorun yok ama yukarıdaki fonksiyonlarda  p = p -> prev yaparsam segmentation fault veriyor. ben de p = p -> next yaptım kodu ve hatasız çalıştı.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct number {
    
    struct number * prev;
    struct number * next;
    int data;
    
    
};

void insertList(struct number * root, int size);
void displayList(struct number * root);


int main(){

	struct number * root = (struct number *)malloc(sizeof(struct number));
	int size;

	printf("enter size\n");
	scanf("%d",&size);

	insertList(root,size);
	displayList(root);

	return 0;
}

void insertList(struct number * root, int size){

	struct number * temp = root;
	struct number * tail = root;
	int i;

	printf("enter data\n");
	scanf("%d",&root -> data);

	root -> next = root;
	root -> prev = root;

	for(i = 1; i<size ; i++){

		temp -> next = (struct number *)malloc(sizeof(struct number));
		temp = temp -> next;

		printf("enter data\n");
		scanf("%d",&temp -> data);
		printf("\n");

		temp -> next = root;
		temp -> prev = tail;
		tail = tail -> next;
		root -> prev = temp;
	}
}

void displayList(struct number * root){

	struct number * temp = root;

	do{
		printf("%d    ",temp -> data );
		temp = temp -> next;
	}
	while(temp != root);
}
*/

