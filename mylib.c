#include "mylib.h"
#include <stdio.h>
#include <math.h>
#include <string.h>
#define N 4



int isLetter(char c){
    // a remplir
    int res;
    
    if((c>='A' && c<='Z') || (c>='a' && c<='z'))
        res = 1;
    else
        res = 0;
    
    return res;
}

int isDigit(char c){
    
    int res;
    
    if(c>='0' && c<='9')
        res = 1;
    else
        res = 0;
    
    return res;
    
}


int isEven(int value){
    
    int res;
    
    if(value % 2 == 0)
        res = 1;
    else
        res = 0;
    
    return res;
    
}

int isPrime(int value){
    
    int flag,i;
    
    for(i=2; i<=value/2; i++){
        
        if(value % i == 0 && value>2){
            
            flag = 0;
            break;
        }
        else
            flag = 1;
            
            
    }
    
    
    return flag;
    
}


int digitSum(int value){
    
    int sum_of_digit = 0;
    int remainder = 0;
    
    while(value != 0){
        
        remainder = value % 10;
        sum_of_digit = sum_of_digit + remainder;
        value = value / 10;
    
}

return sum_of_digit; 

}
    
    
    
    
    
    
    
 int reverseNumber(int value){
  
     int reverse_number = 0;
     int remainder = 0;
     
     while(value != 0){
         
         reverse_number = reverse_number * 10;
         reverse_number = reverse_number + value % 10;
         value = value/10;
     
    }
 
    return reverse_number;
 
 }
 
 
 
 
 
 char upperCase(char c){
     
     if(c >= 'a'  &&  c <= 'z')
         c = c - 32;
     
     return c;
 }
 
 
 
 char downcase(char c){
     
     if(c >= 'A'  &&  c <= 'Z')
         c = c + 32;
     
     return c;
 }
 
 
 
 int isUpperCase(char c){
     
     int flag;
     
     if (c >= 'A'  &&  c <= 'Z')
         flag = 1;
     else
         flag = 0;
     
     return flag;
     
 }
    
    
    int factoriel(int value){
        
        if(value == 0)
            return 1;
        
        if(value == 1)
            return 1;
        
        if(value < 0)
            return -1;
        
        return factoriel(value - 1) * value;
        
    }
    
    
    
    
    int power(int base, int degree){
        
        int i,res;
        res =1;
        
        for(i=0; i<degree; i++)
            res = res * base;
        
        return res;
        
    }
    
    
    
    int add(int value1, int value2){
        
        int res;
        
        res = value1 + value2;
        
        return res;
        
    }
    
    void findRoots(int a, int b, int c, float * roots){
        
        int determinant;
        
        determinant = (b*b) - (4*a*c);
        
        if(determinant < 0)
            printf("your equation doesn't have a real root\n");
        else {
            
        roots[0] = (-b + sqrt(determinant))/2*a;
        roots[1] = (-b - sqrt(determinant))/2*a;
        
        }
        
        
    }
    
    
 
 int hailstoneNumbers(int value){
     
     if(value % 2 == 0)
         return value / 2;
     else
         return 3*value + 1;
     
 }
 
 
 
 
 int isPalindromeNumber(int value){
     
     int reverse_number = 0;
     int remainder = 0;
     int original_value = value;
     int flag;
     
     while(value != 0){
         
         reverse_number = reverse_number * 10;
         reverse_number = reverse_number + value % 10;
         value = value/10;
     
    }
    
    if(original_value == reverse_number)
        flag = 1;
    else
        flag = 0;
    
    return flag;
    
 }
 
 
 
 
 int isPalindromeText(char *c, int size){
     
     char ch[100];
     int i,flag;
     
     strcpy(ch,c);
     
     for(i = 0; i<(size-1); i++){
         c[i] = c[(size-2) - i];
     }
     
     if(strcmp(ch,c) == 0)
         flag = 1;
     else
         flag = 0;
     
     return flag;
     
 }
         
     
        
int isVowel(char c){
    
    char vowels[] = "aeiouAEIOU";
    int i,flag;
    
    for(i=0; i<10; i++){
        
        if(c == vowels[i]){
            flag = 1;
            break;
        }
        
    }
        
        return flag;
        
    }
        
        

        
int exist(int *arr, int size, int value){
    
 
   size = 20;
   int flag,i;
   
   for(i=0; i<size; i++){
       
       if(value == arr[i]){
           flag = 1;
           break;
       }
       
   }
   
   return flag;
}
        
        
        
        
        
 int getIndex(int *arr, int size, int value){
     
     int index,i,flag;
     
    for(i=0; i<size; i++){
        
        flag = 0;
        
        if(value == arr[i]){
            index = i;
            break;
        }
        
        flag = -1;
    }
    
    if(flag == -1)
        return -1;
    
    return index;
 }
        
        
        
        
        
        
 int count(int *arr, int size, int value){
     
     int count = 0;
     int i;
       
     for(i=0; i<size; i++){
        
        if(value == arr[i]){
            count++;
        }
        
    }   
    
    return count;
    
 }
        
        
        
        
        
        
int findMax(int *arr, int size){
    
    int i,max;
    
    max= 0;
    
    for(i=0; i<size; i++){
        
        if(arr[i] > max)
            max = arr[i];
    }
    
    return max;
}





int findMax2(int *arr, int size){
    
    int i,max,max2,temp,index;
    
    max= 0;
    max2 = 0;
    
    for(i=0; i<size; i++){
        
        if(arr[i] > max){
            max = arr[i];
            index = i;
        }
    }
   
    temp = arr[size -1];
    arr[size-1] = arr[index];
    arr[index] = temp;
    
    for(i = 0; i<size - 1 ; i++){
        
        if(arr[i] > max2)
            max2 = arr[i];
        
    }
   
    return max2;
    
}


int findMin(int *arr, int size){
    
    int min,i;
    
    min = arr[0];
    
    for(i=1; i<size; i++){
        
        if(arr[i]<min)
            min = arr[i];
    }
    
    return min;
}



int findMin2(int *arr, int size){
    
    int min,i,min2,index,temp;
    
    min = arr[0];
    
    
    for(i=1; i<size; i++){
        
        if(arr[i]<min){
            min = arr[i];
            index = i;
        }
    }
    
    temp = arr[size-1];
    arr[size - 1] = arr[index];
    arr[index] = temp;
  
    
    min2 = arr[1];
    
    for(i=0; i<size-1; i++){
        
       if(arr[i] < min2)
           min2 = arr[i];
    }

    return min2;
}



int sumArray(int *arr, int size){
    
    int sum,i;
    
    sum = 0;
    
    for(i=0; i<size; i++){
        
        sum = sum + arr[i];
    
    }
    
    return sum;
}


double averageArr(int *arr, int size){
    
    double sum;
    int i;
    double average;
    
    sum = 0;
    
    for(i=0; i<size; i++){
        
        sum = sum + arr[i];
    
    }
    
    average = sum/size;
    
    return average;
}


double deviationArr(int *arr, int size){
    
    double sum,average,deviation,average_difference;
    int i;
    
     sum = 0;
    
    for(i=0; i<size; i++){
        
        sum = sum + arr[i];
    
    }
    
    average = sum/size;
    
    average_difference = 0;
    
    for(i = 0; i<size; i++){
        
        average_difference = average_difference + (arr[i] - average)*(arr[i] - average);
    }
    
    deviation = sqrt(average_difference/(size-1));
    
    return deviation;
}



void printMatrix(int **matrix, int row, int column){
    
    int i,j;
    
    for(i=0; i<row; i++){
        
        printf("enter the elements of %d. row\n",i+1);
        
        for(j=0; j<column; j++){
            
            scanf("%d",&matrix[i][j]);
        }
    }
    
    printf("\nthe matrix is :\n\n");
    
    
    for(i=0; i<row; i++){
        
        
        for(j=0; j<column; j++){
            
            printf("%d\t",matrix[i][j]);
            
        }
        
        printf("\n");
    }
}


void transposeMatrix(int matrix[][3],int row,int column){
    
    int transpose[3][3];
    int i,j;
    
    for(i=0; i<row; i++){
        for(j=0;j<column;j++){
            transpose[j][i] = matrix[i][j];
        }
    }
    
    
     printf("\ntranspose of the matrix is :\n\n");
    
    
    for(i=0; i<row; i++){
        
        
        for(j=0; j<column; j++){
            
            printf("%d\t",transpose[i][j]);
            
        }
        
        printf("\n");
    }
    
}
        
        







void fillMatrix(int **matrix, int row, int column){
    
    int i,j,k;
    
    k=50;
    
    
        
        for(i=0;i<row; i++){
            for(j=0; j<column; j++){
                matrix[i][j] = k;
                k++;
            }
        }
        
        
    
    
    printf("\nthe matrix is :\n\n");
    
    
    for(i=0; i<row; i++){
        
        
        for(j=0; j<column; j++){
            
            printf("%d\t",matrix[i][j]);
            
        }
        
        printf("\n");
    }
    
}
        
    



    
    
        
        

    
    
    


  
  
  


    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

        
        
        
        
        
        
        
        

         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
          
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
 
 
 
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
