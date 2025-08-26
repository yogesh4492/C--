/*
3. POP vs. OOP Comparison Program
  Write two small programs: one using Procedural Programming (POP) to calculate the area of a rectangle, and another using Object-Oriented Programming (OOP) with a class and object for the same task. 
Objective: Highlight the difference between POP and OOP approaches.


3i.In Pop(Procedural  Oriented Programming):-

*/
#include<stdio.h>
int main(){
	int length,width,area;
	printf("\n Enter the Length is= ");
	scanf("%d",&length);
	printf("\n Enter the Width is= ");
	scanf("%d",&width);
	area=length*width;
	
	printf("\n Length is =%d",length);
	printf("\n width is =%d",width);
	printf("\n Area is =%d",area);
	return 0;
}

