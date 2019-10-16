#include <stdio.h>
#include <math.h>
#include "mylib.h"
#include <string.h>
#include <stdlib.h>
#define N 4

struct Person {
    
    int telephone;
    char name[];
    char surname[];
    char city[];
    char homeNumber[];
    struct Person * next;
    
};


struct Cities {
    
    char city[];
    int code;
    struct Cities * next;
    
};

// to complile from terminal, run: gcc test.c mylib.c -o ApplicationName -lm
// to run the complied application, run: ./ApplicatioName

int main(void)
{
    //isLetter function
   char ch;
    
    printf("Enter any character\n");
    scanf("%c",&ch);
    
    
    if(isLetter(ch)==1)
        printf("the character that you typed is a letter \n");
    else
        printf("the character that you typed is not a letter \n"); //
   
   
   printf("\n\n\n");
    
    //isDigit fonctions 
    //this function works whenever you type just a single character.
    //when you try to type a number for exemple 888 , this function says it is a digit.
    //i think this function just look first character and also it allows to type multiple characters.
    
    char ch1;
    
    printf("Enter any character\n");
    scanf(" %c",&ch1);
    
    if(isDigit(ch1) == 1)
        printf("the character that you typed is a digit \n");
    else
        printf("the character that you typed is not a digit \n");  //
   
      printf("\n\n\n");

   
   
   //isEven function
   
   int num;
   
   printf("Enter a number for you to check whether it is an even number or not\n");
   scanf(" %d",&num);
   
   if(isEven(num) == 1)
       printf("the number that you typed is an even number \n");
    else
        printf("the number that you typed is not an even number \n"); //
  
  
   printf("\n\n\n");
  
  
  //isPrime function
  
  int num2;
  
    printf("Enter a number for you to check whether it is a prime number or not\n");
    scanf(" %d",&num2);
    
    if(isPrime(num2) == 1)
        printf("the number that you typed is a prime number \n");
    else
        printf("the number that you typed is not a prime number \n"); //
 
    printf("\n\n\n");

 
 
 //digitSum function
 
    int num3;
 
    printf("Enter any  number that you want to add of their digits\n");
    scanf(" %d",&num3);
    
    printf("sum of digits of your number is %d \n", digitSum(num3));  // 
    
    
   printf("\n\n\n");
    
    
    //reverseNumber function
    
    int num4;
    
    printf("Enter any number that will be rewrite reverse order \n");
    scanf(" %d",&num4);
    
    printf("reverse order of your number is %d \n", reverseNumber(num4));  //
  
  
     printf("\n\n\n");

  
  
  //upperCase function
    char ch2;
  
    printf("Enter a letter that will be converted to upper case \n");
    scanf(" %c",&ch2);
    
    
  
  printf(" %c \n", upperCase(ch2));  //
   
   
      printf("\n\n\n");

   
   //downCase funtion
   
    char ch3;
  
    printf("Enter a letter that will be converted to  downcase \n");
    scanf(" %c",&ch3);
    
    printf(" %c \n", downcase(ch3));  //
   
   
     printf("\n\n\n");
 
   
   //isUpperCase function
   
    char ch4;
  
    printf("Enter a letter that will be checked whether or not it is an upper case \n");
    scanf(" %c",&ch4);
    
    if(isUpperCase(ch4) == 1)
        printf("the letter is an upper case\n");
    
    if(isUpperCase(ch4) == 0)
        printf("the letter is not an upper case\n"); //
   
      printf("\n\n\n");

        
   //factoriel function
   
    int num5;
   
   printf("enter any number that you want to learn of its factoriel \n");
   scanf(" %d",&num5);
   
   if( factoriel(num5) == -1)
       printf("choose a positive number pls \n");
   else
       printf(" factoriel of your number is: %d\n", factoriel(num5)); //
   
   
      printf("\n\n\n");

   
   //power function
   
   int base, degree;
   
   printf("enter a base and a degree\n");
   scanf(" %d %d",&base,&degree);
   
   printf("the result is: %d\n", power(base,degree)); //
  
     printf("\n\n\n");

  
  
  
  //add function
  
   int x,y;
  
  printf("enter the numbers that you want to add\n");
  scanf(" %d %d",&x,&y);
  
  printf("the result is: %d\n",add(x,y));  //
  
     printf("\n\n\n");

  
  //findRoots function
  
  int a,b,c;
  float roots[2];
  
  printf("your equation must be in form like << x^2 + bx + c = 0 >>. Otherwise the function doesn't find correct answers\n");
  printf("enter your equations a,b and c constants\n");
  scanf(" %d %d %d",&a,&b,&c);
  
  findRoots(a,b,c,roots);
  
  printf("the roots of your equation is: %0.2f and %0.2f\n", roots[0],roots[1]);   //
 
 
    printf("\n\n\n");

 
 //hailstoneNumbers function
  int head;
 
 printf("enter a number that will be the first eleman of the hailstone numbers\n");
 scanf(" %d", &head);
 
 while(head > 1){
     
     head = hailstoneNumbers(head);
     printf("%d\n", head);
     
 }   //
 
    printf("\n\n\n");

 //isPalindromeNumber function
 
  int palindrome_num;
 
 printf("enter a number that you wanna learn if it is a palindrome number or not\n");
 scanf(" %d",&palindrome_num);
 
 if(isPalindromeNumber(palindrome_num) == 1)
     printf("the number is a palindrome number\n");
 else
     printf("the number is not a palindrome number\n"); //
 
 
    printf("\n\n\n");

 
 //isPalindromeText function
 
  int size = 6;
 char str[6] = "ahhha";
 
 
 if(isPalindromeText(str,size) == 1)
     printf("the string is a palindrome string\n");
 else
     printf("the string is not a palindrome string\n"); //
 
   printf("\n\n\n");
 
 
 //isVowel function
 
  char ch5;
 
 printf("enter a letter to check if it is vowel\n");
 scanf(" %c",&ch5);
 
 if(isVowel(ch5) == 1)
     printf("the letter is vowel\n");
 else
     printf("the letter is not vowel\n"); 
 
 
    printf("\n\n\n");

 
//exist function

 int numbers[20] = {1,2,3,6,5,7,8,9,25,36,75,48,27,120,147,189,789,456};
 int size2;
int num6;

printf("enter a number that you want to search whether or not it exists\n");
 scanf(" %d",&num6);
 
 if(exist(numbers,size2,num6)==1)
     printf("it exists\n");
 else
     printf("it is not exists\n");

   printf("\n\n\n");

//getIndex function
 int size3,counter,num7;

printf("enter the size of the array\n");
scanf(" %d",&size3);

int * pnumbers = (int *)malloc(size3 * sizeof(int));

printf("enter the elements of the array\n");
for(counter=0; counter<size3; counter++){
    scanf(" %d",&pnumbers[counter]);
}

printf("enter a number which you search in the array\n");
scanf(" %d",&num7);

if(getIndex(pnumbers,size3,num7) != -1)
    printf("index of the number that you selected is: %d\n",getIndex(pnumbers,size3,num7));
else
    printf("the number that you selected is not exist in the array\n");
 

free(pnumbers);
pnumbers = 0;



   printf("\n\n\n");



//count function
int size4,counter2,num8;

printf("enter the size of the array\n");
scanf(" %d",&size4);

int * pnumbers2 = (int *)malloc(size4 * sizeof(int));

printf("enter the elements of the array\n");
for(counter2=0; counter2<size4; counter2++){
    scanf(" %d",&pnumbers2[counter2]);
}

printf("enter a number which you search in the array\n");
scanf(" %d",&num8);

printf("the number that you selected exists %d times in the array\n",count(pnumbers2,size4,num8));

free(pnumbers2);
pnumbers2 = 0;
 
 
    printf("\n\n\n");

 
 
 
 
 //findMax function;
 
 int arr[30] = {1,5,6,9,3,2,7,8,4,11,12,15,78,98,51,21,24,36,111};
 int size5 = 19;
 
 printf("max elements of the array is: %d\n",findMax(arr,size5));
 
 

   printf("\n\n\n");



//findMax2 function

int arr2[] = {1,2,3,7,8,5,6,4,9,11,17,14,13,12,19,18,21,27,29,34,25,69,98,56,75,789,452,123,156,189,17,45,42,85,89,76,30};
int size6;

size6 = sizeof(arr2) / sizeof(arr2[0]);

printf("max second element of the array is: %d\n",findMax2(arr2,size6));



   printf("\n\n\n");

//findMin function

int arr3[] = {78,79,56,41,3,58,96,398,745,66,99,77,11,12,14,19,0,2,56,1,745,963,22,33,40};
int size7 = sizeof(arr3)/sizeof(arr3[0]);

printf("min element of the array = %d\n",findMin(arr3,size7));
 


   printf("\n\n\n");

   //HOCAM BU FONKSİYON TEK BAŞINA ÇALIŞIYOR , BİR HATA DA BULAMIYORUM ZATEN. 
   //ANCAK YORUM SATIRLARINI KALDIRIP BÜTÜN FONKSİYONLARI BERABER ÇALIŞTIRDIĞIMDA
   //SEGMENTATİON FAULT ALIYORUM. BUNU ÖNLEMEK İÇİN DE YAKLAŞIK 3 SAAT UĞRAŞTIM.
   //HATTA ALGORİTMAMI DEĞİŞTİRDİM, FARKLI BİR YOLLA SONUCU BULDUM.
   //ANCAK YİNE BÜTÜN FONKSİYONLARI BERABER ÇALIŞTIRDIĞIMDA SEGMENTATİON FAULT ALDIM
   //BAŞKA BİR YOL KALMADI KAFAMDA. BU FONKSİYONU YORUM OLARAK BIRAKIYORUM.
   //TEK BAŞINA ÇALIŞTIRIRSANIZ DOĞRU ÇALIŞTIĞINI GÖREBİLİRSİNİZ.
//findMin2 function
/*
int arr4[] = {1,9,8,5,6,7,4,3,2,10,11,15,51,54,85,96,36,22};
int size8 = sizeof(arr4)/sizeof(arr4[0]);

printf("the second min element of the array = %d\n",findMin2(arr4,size8));
*/
   printf("\n\n\n");


//sumArray function

int arr5[] = {1,2,3,4,5,6,7,8,9,10};
int size9 = sizeof(arr5)/sizeof(arr5[0]);

printf("sum of the elements of the array = %d\n",sumArray(arr5,size9));


   printf("\n\n\n");


//averageArr function

int arr6[] = {12,13,15,18,24,26,28,3,34,39,41,16,48,49,58,57,52,6,68,69,63,72,71,76,80,86,90,99,100};
int size10 = sizeof(arr6)/sizeof(arr6[0]);

printf("average of the array = %f\n",averageArr(arr6,size10));
 
   printf("\n\n\n");


//deviationArr function

int arr7[] = {1,2,3,4,5};
int size11 = sizeof(arr7)/sizeof(arr7[0]);

printf("standard deviation of the array = %f\n",deviationArr(arr7,size11));
 
   printf("\n\n\n");


//printMatrix function

int row,column,k;

printf("enter how many the matrix has rows and columns\n");
scanf(" %d %d",&row,&column);

int **matrix = (int **)malloc(row * sizeof(int *));

for(k=0;k<row;k++){
    
    matrix[k] = (int *)malloc(column * sizeof(int));
}

printMatrix(matrix,row,column);

free(matrix);
matrix = 0;

   printf("\n\n\n");


//transposeMatrix function

int matrix2[3][3];
int row2 = 3;
int column2 = 3;
int i4,j4;

for(i4=0; i4<row2; i4++){
        
        printf("enter %d elements of %d. row\n",row2,i4+1);
        
        for(j4=0; j4<column2; j4++){
            
            scanf(" %d",&matrix2[i4][j4]);
        }
    }
    
    printf("\nthe matrix that you entered is: \n");
    
    for(i4 =0; i4<row2; i4++){
        for(j4 = 0; j4<column2; j4++){
            printf("%d\t",matrix2[i4][j4]);
        }
        
        printf("\n");
    }
    
    
    
    transposeMatrix(matrix2,row2,column2);



   printf("\n\n\n");

   
   
   //fillMatrix function
   
   int **matrix3,z;
   int row3,column3;
   
   row3 = 5;
   column3 = 10;
   
   matrix3 = (int *) malloc(5 * sizeof(int *));
   
   for(z=0;z<5;z++){
       matrix3[z] = (int *)malloc(10*sizeof(int));
   }
   
   
   fillMatrix(matrix3,row3,column3);
   
   free(matrix3);
   matrix3 = 0;
   

  

    return 0;
}
