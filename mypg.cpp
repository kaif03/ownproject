#include<iostream>
#include<math.h>
#include<conio.h>
#include<windows.h> //holds  the COORD structure
using namespace std;
void menufun(void);
int calc();
void comfun(void);
void detailfun(void);
void passfun(void);
void exitfun(void);
void quotesfun(void);
void gotoxy(int x, int y){
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int main(){
	passfun();
}
int calc(){
	system("cls");
	float valueOne;
	float valueTwo;
	char opperator;
	float answer;
	system("cls");
	system("color A");
		for(int i=11;i<70;i++)
    {
        gotoxy(i,1);printf("%c",196);
        gotoxy(i,21);printf("%c",196);
    }
	for(int i=1;i<22;i++)
    {
        gotoxy(11,i);printf("%c",221);
        gotoxy(69,i);printf("%c",221);
    }
    gotoxy(20,2);
	cout<<"    \xB3\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CALCULATOR \xB3\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
	gotoxy(20,6);
	printf("    Enter calculation: ");
	scanf("%f %c %f",&valueOne,&opperator,&valueTwo);

	switch(opperator){
		case '/': answer = valueOne/valueTwo;
			break;
		case '*': answer = valueOne*valueTwo;
			break;
		case '+': answer = valueOne+valueTwo;
			break;
		case '-': answer = valueOne-valueTwo;
			break;
		case '^': answer = pow(valueOne,valueTwo);
			break;
		case ' ': answer = sqrt(valueTwo);
			break;
		default: 
		 	break;
	}
	gotoxy(20,7);
	printf("    %f %c %f = %f",valueOne,opperator,valueTwo,answer);
	gotoxy(10,23);
	cout<<"  COMMAND   ";
	string d;
	cin>>d;
	if(d=="exit" || d=="leave")
		exitfun();
	else if(d=="back" || d=="menu")
		menufun();
		
	else if(d=="again")
		calc();
		
	else{
		system("cls");
		system("color D");
		gotoxy(20,10);
		char ch[]={"YOU NEED TO LEARN COMMANDS"};
		int a=strlen(ch);
		for(int i=0;i<=a;i++){
			cout<<ch[i];
			Sleep(70);
		}
		Sleep(1000);
		menufun();
	}	
	return 0;
}
void comfun(void){
	system("cls");
	system("color A");
	gotoxy(15,2);
	cout<<"FOR RETURN TO MENU: menu, back";
	gotoxy(15,4);
	cout<<"FOR EXIT: exit, leave";
	gotoxy(15,6);
	cout<<"FOR AGAIN: again";
	Sleep(3000);
	menufun();
}
void quotesfun(void){
	system("cls");
	system("color A");
	cout<<"\t\t\t\xB3\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 QUOTES \xB3\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
	cout<<"\n\n 1. Don't judge my past,\n\t look at my present\n    I am sure my future is,\n\t really rocking..";
	cout<<"\n\n\n\n\n 2. Just like the moon,\n    half of my heart will always loves the dark..";
	cout<<"\n\n\n\n\n 3. My dark days made me strong,\n\t or maybe i was always strong\n    and they made me\n\t prove it..";
	gotoxy(52,18);
	cout<<"  COMMAND   ";
	string d;
	cin>>d;
	if(d=="exit" || d=="leave")
		exitfun();
	else if(d=="back" || d=="menu")
		menufun();
		
	else if(d=="again")
		quotesfun();
	else{
		system("cls");
		system("color D");
		gotoxy(20,10);
		char ch[]={"YOU NEED TO LEARN COMMANDS"};
		int a=strlen(ch);
		for(int i=0;i<=a;i++){
			cout<<ch[i];
			Sleep(70);
		}
		Sleep(1000);
		menufun();}
	
	
}
void exitfun(void){
	system("cls");
	system("color A");
	gotoxy(30,10);
	cout<<"ALL THE BEST";
}
void detailfun(void){
	system("cls");
	system("color A");
	for(int i=11;i<70;i++)
    {
        gotoxy(i,1);printf("%c",196);
        gotoxy(i,21);printf("%c",196);
    }
	for(int i=1;i<22;i++)
    {
        gotoxy(11,i);printf("%c",221);
        gotoxy(69,i);printf("%c",221);
    }

	gotoxy(20,2);
	cout<<"\xDB\xDB\xDB\xDB NAME-MOHD KAIF";
	gotoxy(20,4);
	cout<<"\xDB\xDB\xDB\xDB FATHER'S NAME-VAKEEL AHMAD";
	gotoxy(20,6);
	cout<<"\xDB\xDB\xDB\xDB CLASS-DIPLOMA Vth SEM.";
	gotoxy(20,8);
	cout<<"\xDB\xDB\xDB\xDB BRANCH-COMPUTER SCIENCE AND ENGINEERING";
	gotoxy(20,10);
	cout<<"\xDB\xDB\xDB\xDB ADDRESS-KESARPUR, BAREILLY";
	gotoxy(20,12);
	cout<<"\xDB\xDB\xDB\xDB MOBILE NO.-7248448209";
	gotoxy(22,14);
	cout<<"\xB3\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 FAVORITE \xB3\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
	gotoxy(14,16);
	cout<<"\xDB\xDB\xDB TEACHERS";
	gotoxy(14,18);
	cout<<"SURYA PRATAP SIR";
	gotoxy(14,19);
	cout<<"TRILOK SIR";
	gotoxy(34,16);
	cout<<"\xDB\xDB\xDB FOODS";
	gotoxy(34,18);
	cout<<"CHEESE BURGER";
	gotoxy(34,19);
	cout<<"DATES";
	gotoxy(52,16);
	cout<<"\xDB\xDB\xDB HABBITS";
	gotoxy(52,18);
	cout<<"TO LISTEN SONGS";
	gotoxy(52,19);
	cout<<"OWN WORK";
	gotoxy(52,20);
	cout<<"OVERTHINKING";
	gotoxy(10,23);
	cout<<" COMMAND  ";
	string t;
	cin>>t;
	if(t=="exit" || t=="leave")
		exitfun();
	else if(t=="back" || t=="menu")
		menufun();
	else if(t=="again")
		detailfun();
		
	else{
		system("cls");
		system("color D");
		gotoxy(20,10);
		char ch[]={"YOU NEED TO LEARN COMMANDS"};
		int a=strlen(ch);
		for(int i=0;i<=a;i++){
			cout<<ch[i];
			Sleep(70);
		}
		Sleep(1000);
		menufun();}
	
}
void menufun(void){
	system("cls");
	system("color b");
	gotoxy(20,8);
	cout<<"\xDB\xDB\xDB\xDB 1.ABOUT OWNER";
	gotoxy(20,11);
	cout<<"\xDB\xDB\xDB\xDB 2.CALCUTATOR";
	gotoxy(20,14);
	cout<<"\xDB\xDB\xDB\xDB 3.QUOTES BY OWNER";
	gotoxy(20,17);
	cout<<"\xDB\xDB\xDB\xDB 4.COMMANDS";
	gotoxy(20,20);
	cout<<"\xDB\xDB\xDB\xDB 5.EXIT..";
	gotoxy(8,27);
	cout<<"choose ";
	string e;
	
	cin>>e;
	if(e=="1"){
		system("cls");
		detailfun();}
	else if(e=="2")
		calc();
	else if(e=="3")
		quotesfun();
	else if(e=="4")
		comfun();
	else if(e=="5")
		exitfun();
	else{
		system("cls");
		system("color D");
		gotoxy(20,10);
		char ch[]={"PLEASE ENTER A VALID FUNCTION"};
		int a=strlen(ch);
		for(int i=0;i<=a;i++){
			cout<<ch[i];
			Sleep(70);
		}
		Sleep(1000);
		menufun();}
		
}
		
void passfun(void){
	system("color F");
	gotoxy(25,7);
	string pas;
	string pass="UCHIHA";
	char ch[]={"YOU NEED TO ENTER PASSWORD HERE"};
	int a=strlen(ch);
	for(int i=0;i<=a;i++){
		Sleep(70);
		cout<<ch[i];
	}
	gotoxy(25,9);
	cout<<"password:";
	cin>>pas;
	if(pas==pass || pas=="uchiha"){
		gotoxy(20,14);
		system("color b");
		cout<<"NOW YOU ARE MEMBER OF KYRIOSNOX'S WORLD";
		Sleep(1000);
		system("cls");
		menufun();
	}
	else{
		gotoxy(26,17);
		system("color C");
		cout<<"incorrect password";
		Sleep(1000);
		system("cls");
		system("color f");
		passfun();
	}
}
