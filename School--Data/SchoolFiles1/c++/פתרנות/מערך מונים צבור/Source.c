#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//typedef struct {
//	char studentName[80];
//	int studentId;
//	int yearold;
//}node;
//void main() {
//	node array[2500];
//	int array1[25] = { 0 };
//	int age,sum=0;
//	for (int i = 0; i < 6; i++) {
//		printf("please enter student age\n");
//		fflush(stdin);
//		scanf("%d",&age);
//		printf("please enter student Name\n");
//		scanf("%s",array[i].studentName);
//		printf("please enter student Id\n");
//		scanf("%d", &array[i].studentId);
//		printf("please enter student YearOld\n");
//		scanf("%d", &array[i].yearold);
//		array1[age - 25]++;
//	}
//	printf("\n");
//	for (int i = 0; i < 6; i++) {
//		if (i + 18 >= 18 && i + 18 <= 22) {
//			printf("Age between 18-22 :");
//			printf("%d %s %d %d\n", i + 18, array[i].studentName, array[i].studentId, array[i].yearold);
//		}
//		else {
//			printf("%d %s %d %d\n", i + 18, array[i].studentName, array[i].studentId, array[i].yearold);
//		}
//	}
//	printf("\n");
//	for (int i = 0; i < 6; i++) {
//		sum += array1[i];
//		if (i + 25 == 25) {
//			printf(" student with age %d  %d ", i + 25, array1[i]);
//		}
//		else if(i+25>25){
//			sum += array1[i];
//			printf(" student with age %d %d", i + 25, array1[i]);
//		}
//	}
//	printf("sum= %d", sum);
//
//}
//1.	כתוב תוכנית הקולטת 200 ציונים של תלמידים בבחינת הבגרות באנגלית, ומדפיסה:
//א.	את טבלת השכיחיות של הציונים, ממוינת לפי הציון בסדר יורד (כלומר, כמה תלמידים קיבלו 100, כמה תלמידים קיבלו 99, וכך הלאה עד 0). 
//תלמידים קיבלו 100, כמה תלמידים קיבלו 99, וכך הלאה עד 0). 
//.את הציון השכיח ביותר.
//void main() {
//	int grade,i,sum=0,place;
//	int array[101] = {0};
//	for ( i = 0; i < 10; i++) {
//		printf("please enter grade %d ", i);
//		scanf("%d", &grade);
//		if(grade>=0 && grade<=100)
//		array[grade]++;
//	}
//	for (i = 100; i >=0; i--) {
//		printf(" %d %d ",i,array[i]);
//		if (sum < array[i]) {
//			sum = array[i];
//			place = i;
//		}
//	}
//	printf("The most common score  %d %d \n  ",sum ,place);
//}
//6.	בחניון מסוים רוצים לבדוק את מצב התפוסה שלו  לפי שעות.לצורך כך בוצע רישום של כמות המכוניות שנכנסו בכל שעה ושעה במהלך שבוע שלם.כתוב תוכנית הקולטת שעה(0 - 23) וכמות רכבים שנכנסו לחניון  בשעה זו.על התוכנית לסכום להדפיס :
//א.את סה"כ המכוניות שהיו בשעה 9:00 במהלך כל השבוע.
//ב.את כמות המכוניות שנכנסו בסה"כ לחניון (במהלך השבוע) לפי שעות. דוגמא לפלט:
//שעה 0 -- > 30 מכוניות
//שעה 1 -- > 10 מכוניות
//שעה 2-- > 15 מכוניות
//...
//שעה 23-- > 50 מכוניות
//ג.את השעה בה היו הכי הרבה במכוניות בחניון.
//void main() {
//	int sumCars, array[24] = { 0 }, hour,sum=0;
//	printf("please enter hour 0-23  :");
//	scanf("%d", &hour);
//		while (hour >=0 && hour <= 23) {
//			printf("please enter How many cars in the Parking  :");
//			scanf("%d", &sumCars);
//			array[hour] += sumCars;
//			printf("please enter hour :");
//			scanf("%d", &hour);
//		}
//		for (int i = 0; i < 24; i++) {
//			if (i == 9) {
//				printf("sum for all cars in 9:00 = %d", array[i]);
//			}
//			if (sum < array[i]) {
//				sum = array[i];
//				hour = i;
//			}
//		}
//		printf("\n\n");
//		printf("hour=%d sumforallcars=%d ", hour, sum);
////}
typedef struct node {
	int num;
	struct node* next1;
	struct node* next2;
}Node;
Node *func(Node *head) {
	Node* ptr, * prev, *first_node=NULL ;
	int numbertimes=0,thenumber=0,maxtimes=0,count=1;
	for (ptr = head; ptr->next1 != NULL; ptr = ptr->next1) {
		for (prev = ptr; prev!= NULL; prev = prev->next1) {
			if (prev->num == ptr->num) {
				++numbertimes;
				if (numbertimes > maxtimes) {
					maxtimes = numbertimes;
					thenumber = ptr->num;
				}
			}
		}
		numbertimes = 0;
	}
	printf("\n");
	for (ptr = head; ptr != NULL; ptr = ptr->next1) {
		printf("%d->", ptr->num);
	}
	printf("\n");
	printf(" maxtimes=%d  thenumber=%d ", maxtimes, thenumber);

	for (ptr = head; ptr->next1!= NULL; ptr = ptr->next1) {
		for (prev = ptr->next1; prev!= NULL; prev = prev->next1) {
			if (prev->num==thenumber && ptr->num==thenumber) {
				ptr->next2 = prev;
				if (count == 1) {
					first_node = ptr;
					count = 0;
				}
				break;
			}
		}
	}
	printf("\n");
	for (ptr = first_node; ptr->next2 != NULL; ptr = ptr->next2);
	ptr->next2 = first_node;
	for (ptr = first_node; ptr!= NULL; ptr = ptr->next2) {
		printf(" %d-> ", ptr->num);
	}
}
void main() {
	Node* p, *new_node, *head = NULL;
	int number;
	for (int  i = 0; i <12; i++) {
		scanf("%d", &number);
		new_node = (Node*)malloc(sizeof(Node));
		new_node->num = number;
		new_node->next1 = NULL;
		new_node->next2 = NULL;
		if (head == NULL) {
			head = new_node;
		}
		else {
			for (p = head; p->next1 != NULL; p = p->next1);
			p->next1 = new_node;
			p->next2 = NULL;
		}
	}
	func(head);
}