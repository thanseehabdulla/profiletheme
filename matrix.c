#include<stdio.h>
 
 
 
 
 
 void main(){

int rows="",cols="",i,j,value="",colsinterchange1,colsinterchange2;
 int Elem[][],Temp[][];
 printf("Enter the number of rows");
 scanf("%d",&rows);
 printf("Enter the number of cols");
 scanf("%d",&cols);

 printf("enter the elements");

 for(i=1;i<=rows;i++){
    
    for(j=1;j<=cols;j++){
scanf("%d",&value);
    Elem[i][j]=value;
    }

 }

printf("the input matrix is");

 for(i=1;i<=rows;i++){
    if(i>1)
    printf("\n");
    for(j=1;j<=cols;j++){

   printf(Elem[i][j])
   printf("\t") ;
    }

 }


printf("enter the cols you want to interchange");
scanf("%d %d",&colsinterchange1,&colsinterchange2);



for(i=1;i<=rows;i++){
    
    for(j=1;j<=cols;j++){
if(j=colsinterchange1)
    Temp[i][colsinterchange1]=Elem[i][colsinterchange1];
    }

 }


for(i=1;i<=rows;i++){
    
    for(j=1;j<=cols;j++){
if(j=colsinterchange2)
    Elem[i][colsinterchange1]=Elem[i][colsinterchange2];
    }

 }

for(i=1;i<=rows;i++){
    
    for(j=1;j<=cols;j++){
if(j=colsinterchange1)
    Elem[i][colsinterchange2]=Temp[i][colsinterchange1];
    }

 }


printf("The matrix is");

 for(i=1;i<=rows;i++){
    if(i>1)
    printf("\n");
    for(j=1;j<=cols;j++){

   printf(Elem[i][j])
   printf("\t") ;
    }

 }




}