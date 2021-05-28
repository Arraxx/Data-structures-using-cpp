#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct SET 
{
float nr;
float dr;
};

typedef struct SET fuzzy;
void printVal(fuzzy set[], int n);

void Union(fuzzy ans[], fuzzy setA[], fuzzy setB[], int n);

void Intersection(fuzzy ans[], fuzzy setA[], fuzzy setB[], int n);

void Complement(fuzzy ans[], fuzzy setA[], int n);

void sort(fuzzy set[], int n);
int main() 
{
int n;
printf("Enter number of elements: ");
scanf("%d", &n);
fuzzy a[n], b[n], c[n];
printf("Enter the values of set A:\n");
for(int i=0; i<n; i++) 
{
printf("Enter value for element %d: ", (i+1));
scanf("%f", &a[i].nr);
printf("Enter membershipfunction for element %d: ", (i+1));
scanf("%f", &a[i].dr);
}
printf("\nEnter the values of set B:\n");
for(int i=0; i<n; i++) 
{
printf("Enter value for element %d: ", (i+1));
scanf("%f", &b[i].nr);
printf("Enter membership function for element %d: ", (i+1));
scanf("%f", &b[i].dr);

}
printf("\nEnter the values of set C:\n");
for(int i=0; i<n; i++) 
{
printf("Enter value for element %d: ", (i+1));
scanf("%f", &c[i].nr);
printf("Enter membership function for element %d: ", (i+1));
scanf("%f", &c[i].dr);
}
sort(a, n);
sort(b, n);
sort(c, n);
printf("\nA = ");
printVal(a, n);
printf("B = ");
printVal(b, n);
printf("C = ");
printVal(c, n);
fuzzy temp[n], temp2[n], temp3[n];
short x = 1;
while(x) {
int ch;
printf("Enter::\n");
printf("1. To verify commutativity\n");
printf("2. To verify associativity\n");
printf("3. To verify distributivity\n");
printf("4. To verify De Morgan's lae'\n");
printf("5. To exit\n");printf("Enter your choice:\t");

scanf("%d", &ch);
switch(ch) 
{
case 1:
printf("\nCommutative property: (AUB) = (BUA):\n");
printf("AUB = ");
Union(temp, a, b, n);
printf("BUA = ");
Union(temp, b, a, n);
printf("Hence, (AUB) = (BUA)\n");
printf("\nCommutative property: (A^B) = (B^A)\n");
printf("A^B = ");
Intersection(temp, a, b, n);
printf("B^A = ");
Intersection(temp, b, a, n);
printf("Hence, (A^B) = (B^A)");
break;
case 2:
printf("\nAssociativeproperty: AU(BUC) = (AUB)UC:\n");
printf("BUC = ");
Union(temp, b, c, n);
printf("AU(BUC) = ");
Union(temp2, a, temp, n);
printf("AUB = ");
Union(temp, a, b, n);
printf("(AUB)UC = ");
Union(temp2, temp, c, n);
printf("Hence, AU(BUC) = (AUB)UC\n");
printf("\nAssociative property: A^(B^C) = (A^B)^C:\n");
printf("B^C = ");
Intersection(temp, b, c, n);
printf("A^(B^C) = ");
Intersection(temp2, a, temp, n);
printf("A^B = ");
Intersection(temp,a, b, n);
printf("(A^B)^C = ");
Intersection(temp2, temp, c, n);
printf("Hence, A^(B^C) = (A^B)^C\n");
break;
case 3:
printf("\nDistributive property: AU(B^C) = (AUB)^(AUC):\n");
printf("B^C = ");
Intersection(temp, b, c, n);
printf("AU(B^C) = ");
Union(temp2, a, temp, n);
printf("AUB = ");
Union(temp, a, b, n);
printf("AUC = ");
Union(temp2, a, c, n);
printf("(AUB)^(AUC) = ");
Intersection(temp3, temp, temp2, n);
printf("Hence, AU(B^C) = (AUB)^(AUC)\n");


printf("\nDistributive property: A^(BUC) = (A^B)U(A^C):\n");
printf("BUC = ");
Union(temp, b, c, n);
printf("A^(BUC) = ");
Intersection(temp2, a, temp, n);
printf("A^B = ");
Intersection(temp, a, b, n);
printf("A^C = ");
Intersection(temp2, a, c, n);
printf("(A^B)U(A^C) = ");
Union(temp3, temp, temp2, n);
printf("Hence, A^(BUC) = (A^B)U(A^C)\n");
break;
case 4:
printf("\nDeMorgan's law = (AUB)~ = A~ ^ B~:\n");
printf("AUB = ");
Union(temp, a, b, n);
printf("(AUB)~ = ");
Complement(temp2, temp, n);
printf("A~ = ");
Complement(temp, a, n);
printf("B~ = ");
Complement(temp2, b, n);
printf("A~^B~ = ");
Intersection(temp3, temp, temp2, n);
printf("Hence, (AUB)~ = A~^B~\n");
printf("\nDe Morgan's law = (A^B)~ = A~UB~ :\n");
printf("A^B = ");
Intersection(temp,a,b,n);
printf("(A^B)~ = ");
Complement(temp2, temp, n);
printf("A~ = ");
Complement(temp, a, n);
printf("B~ = ");
Complement(temp2, b, n);
printf("A~UB~ = ");
Union(temp3, temp, temp2, n);
break;
case 5:
x = 0;
break;
default:continue;}
}
}
void printVal(fuzzy set[], int n) 
{
printf("{");
for(int i=0; i<n; i++) {

printf("(%.2f, %.2f),", set[i].nr, set[i].dr);
}
printf("\b}\n");
}
void sort(fuzzy set[], int n) 
{
for (int i = 0; i < n-1; i++) 
{
for (int j = 0; j < n-i-1; j++) 
{
if (set[j].nr > set[j+1].nr) 
{
fuzzy temp = set[j];set[j] = set[j+1];
set[j+1] = temp;
}
}
}
}
void Union(fuzzy ans[], fuzzy setA[], fuzzy setB[], int n) 
{
for(int i=0; i<n; i++) 
{
ans[i].nr = setA[i].nr;
ans[i].dr = (setA[i].dr > setB[i].dr)?setA[i].dr:setB[i].dr;
}

printVal(ans, n);
}
void Intersection(fuzzy ans[], fuzzy setA[], fuzzy setB[], int n) 
{
for(int i=0; i<n; i++) 
{
ans[i].nr = setA[i].nr;
ans[i].dr = (setA[i].dr < setB[i].dr)?setA[i].dr : setB[i].dr;
}
printVal(ans, n);
}
void Complement(fuzzy ans[], fuzzy setA[], int n) 
{
for(int i=0; i<n; i++) 
{
ans[i].nr = setA[i].nr;ans[i].dr = 1 -setA[i].dr;
}
printVal(ans, n);
}

