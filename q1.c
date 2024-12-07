//Q1:WAP to check whether a given is Armstrong or not.
#include <stdio.h>
#include <math.h>
int main() {
   int a,a1,i,temp=0,k,len,c=0;
   printf("Enter a number to check whether its armstrong or not : ");
   scanf("%d",&a);
   k=a;
   a1=a;
   while(a1>0){
    a1=a1/10;
    c++;
   }
   while (a>0){
   i=a%10;
   temp=temp + pow(i,c);
   a=a/10;
}
   if (k==temp){
       printf("%d IS AN ARMSTRONG NUMBER",k);
       }
   else {
       printf("%d IS NOT AN ARMSTRONG NUMBER",k);
   }
   return 0;
}
 
 
//Q2 WAP to read two integers and print their HCF (Highest Common Factor)
#include<stdio.h>
int hcf(int num1,int num2);
int main(){
    int num1,num2;
    printf("Enter number 1:");
    scanf("%d",&num1);
    printf("Enter number 2:");
    scanf("%d",&num2);

    printf("hcf of the two numbers is %d",hcf(num1,num2));
    return 0;
}

int hcf(int num1,int num2){
    int gnum,ans;
    gnum = num1>num2?num1:num2;

    for(int i=1;i<=gnum;i++){
        if(num1%i==0 && num2%i==0){
            ans=i;
        } 
    }
    return ans;
}

//Q3 WAP to subtract two integers without using Minus (-) operator.
int main(){  
   int n1,n2,sub;
   printf("Enter first number : ");
   scanf("%d",&n1);
   printf("Enter second number : ");
   scanf("%d",&n2);
   if (n1>n2){
   sub = n1 + (~n2 + 1);
   printf("%d",sub);
   }
   else if(n2>n1){
   sub = n2 + (~n1 + 1);
   printf("%d",sub);
   }
   else{
       printf("ERROR ... The numbers are equal");  
   }  
}
  
//Q4  WAP to accept two integer numbers and swap them using 4 different methods in C
//language.
#include <stdio.h>
int main() { //method 1
   int n1,n2,temp;
   print("SWAPPING NUMBERS USING THIRD VARIABLE \n");
   printf("Enter the first number : ");
   scanf("%d",&n1);
   printf("Enter second number : ");
   scanf("%d",&n2);
   printf("BEFORE SWAPPING");
   printf("\n");
   printf("%d : %d",n1,n2);
   temp=n1;
   n1=n2;
   n2=temp;
   printf("\nAFTER SWAPPING");
   printf("\n");
   printf("%d : %d",n1,n2);
}
#include <stdio.h>
int main() { //method 2
   int n1,n2,sum;
   print("SWAPPING NUMBERS WITHOUT USING THIRD VARIABLE \n");
   printf("Enter the first number : ");
   scanf("%d",&n1);
   printf("Enter second number : ");
   scanf("%d",&n2);
   printf("BEFORE SWAPPING");
   printf("\n");
   printf("%d : %d",n1,n2);
   sum=n1+n2;
   n1=sum-n1;
   n2=sum-n2;
   printf("\nAFTER SWAPPING");
   printf("\n");
   printf("%d : %d",n1,n2);
}
 
 
 
 
 
 
//Q5 WAP to check whether number is Perfect Number or not.
//(To check perfect number, we have to find all divisors of that number and find their sum, if
//sum of divisors is equal to number it means number is Perfect Number.
 #include <stdio.h>
int main() {
   int a,i,sum=0;
   printf("Enter a number to find whether its a perfect number or not : ");
   scanf("%d",&a);
   for(i=1;i<a;i++){
       if(a%i==0){
           sum=sum+i;
       }
       else{
           printf(" ");
       }
   }
   if(a==sum) {
       printf("ITS A PERFECT NUMBER");
   }
   else {
       printf("NOT A PERFECT NUMBER");
   }
     
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
//Q6 WAP to accept a coordinate point in an XY coordinate system and determine in which
//quadrant the coordinate point lies.
#include <stdio.h>
int main(){
   int x,y;
   printf("Enter x coordinate :");
   scanf("%d",&x);
   printf("Enter y coordinate :");
   scanf("%d",&y);
   if (x>0){
       if(y>0){
           printf("%d %d lies in I quadrant",x,y);
       }
       else {
           printf("%d %d lies in IV quadrant",x,y);
       }
   }
     
   else if (x<0){
       if(y<0) {
           printf("%d %d lies in III quadrant",x,y);
       }
       else {
           printf("%d %d lies in II quadrant",x,y);
       }
   }
   else {
       printf("wrong input");
   }
}

// WAP for Binary to Decimal conversion & Decimal to Binary for a given number  as per 
// user’s choice.
#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long binary) {
    int decimal = 0, base = 1, remainder;
    
    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }
    
    return decimal;
}

long long decimalToBinary(int decimal) {
    long long binary = 0;
    int remainder, i = 1;
    
    while (decimal > 0) {
        remainder = decimal % 2;
        binary += remainder * i;
        decimal /= 2;
        i *= 10;
    }
    
    return binary;
}

int main() {
    int choice;
    printf("Choose an option:\n1. Binary to Decimal\n2. Decimal to Binary\n");
    scanf("%d", &choice);
    
    if (choice == 1) {
        long long binary;
        printf("Enter a binary number: ");
        scanf("%lld", &binary);
        printf("Decimal: %d\n", binaryToDecimal(binary));
    } 
    else if (choice == 2) {
        int decimal;
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        printf("Binary: %lld\n", decimalToBinary(decimal));
    } 
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}

// 1
// 01
// 101  
// 0101  
// 10101 
#include<stdio.h>
int main(){
    for(int i=0;i<5;i++){
        int flag=i%2;
        for(int j=0;j<=i;j++){
            if(flag == 1){
                printf("%d",0);
                flag = 0;
            }
            else{
                printf("%d",1);
                flag = 1;
            }
        }
        printf("\n");
    }
    return 0;
}

// 0        0 
// 01      01 
// 010    010  
// 0101  0101  
// 0101001010
#include <stdio.h>
int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = i; j < rows; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", (j + 1) % 2);
        }
        for (int j = 1; j <= (rows - i) * 2; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", (j + 1) % 2);
        }
        printf("\n");
    }
    return 0;
}

// WAP to print Pascal’s Triangle
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        int val = 1;
        for(j = 0; j <= i; j++) {
            printf("%d ", val);
            val = val * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}


