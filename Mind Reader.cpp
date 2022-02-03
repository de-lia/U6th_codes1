#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
void First_Card(void);void Second_Card(void);
void Third_Card(void);void Fourth_Card(void);
void Fifth_Card(void);void Sixth_Card(void);
void Analyze(void); 
Check(void);
void main(void)
{ int ans=0,in=0;
clrscr();
_setcursortype(_NOCURSOR);
First_Card();
in=Check(); if (in==0) ans+=1;
Second_Card();
in=Check(); if (in==0) ans+=2;
Third_Card();
in=Check(); if (in==0) ans+=4;
Fourth_Card();
in=Check(); if (in==0) ans+=8;
Fifth_Card();
in=Check(); if (in==0) ans+=16;
Sixth_Card();
in=Check(); if (in==0) ans+=32;
textcolor(WHITE);textbackground(BLACK);
clrscr(); Analyze(); clrscr();
if(ans>60) {gotoxy(20,12);
	printf("You Entered Incorrect Information.");}
else
{gotoxy(28,13);printf("Your No Is : "%d"",ans);}
gotoxy(20,14);printf("Thanks For Using This Program... ");
}
void First_Card(void)
{
gotoxy(25,6); printf("ษอออออออออออออออออออออออออออออป");
gotoxy(25,7); printf("บ C O M P U T E R G A M E บ");
gotoxy(25,8); printf("ฬออออหออออหออออหออออหออออหออออน");
gotoxy(25,9); printf("บ 1 บ 3 บ 5 บ 7 บ 9 บ 11 บ");
gotoxy(25,10); printf("ฬออออฮออออฮออออฮออออฮออออฮออออน");
gotoxy(25,11); printf("บ 13 บ 15 บ 17 บ 19 บ 21 บ 23 บ");
gotoxy(25,12); printf("ฬออออฮออออฮออออฮออออฮออออฮออออน");
gotoxy(25,13); printf("บ 25 บ 27 บ 29 บ 31 บ 33 บ 35 บ");
gotoxy(25,14); printf("ฬออออฮออออฮออออฮออออฮออออฮออออน");
gotoxy(25,15); printf("บ 37 บ 39 บ 41 บ 43 บ 45 บ 47 บ");
gotoxy(25,16); printf("ฬออออฮออออฮออออฮออออฮออออฮออออน");
gotoxy(25,17); printf("บ 49 บ 51 บ 53 บ 55 บ 57 บ 59 บ");
gotoxy(25,18); printf("ศออออสออออสออออสออออสออออสออออผ");
}
void Second_Card(void)
{
gotoxy(25,6); printf("ษอออออออออออออออออออออออออออออป");
gotoxy(25,7); printf("บ C O M P U T E R G A M E บ");
gotoxy(25,8); printf("ฬออออหออออหออออหออออหออออหออออน");
gotoxy(25,9); printf("บ 2 บ 3 บ 6 บ 7 บ 10 บ 11 บ");
gotoxy(25,10); printf("ฬออออฮออออฮออออฮออออฮออออฮออออน");
gotoxy(25,11); printf("บ 14 บ 15 บ 18 บ 19 บ 22 บ 23 บ");
gotoxy(25,12); printf("ฬออออฮออออฮออออฮออออฮออออฮออออน");
gotoxy(25,13); printf("บ 25 บ 27 บ 30 บ 31 บ 34 บ 35 บ");
gotoxy(25,14); printf("ฬออออฮออออฮออออฮออออฮออออฮออออน");
gotoxy(25,15); printf("บ 38 บ 39 บ 42 บ 43 บ 46 บ 47 บ");
gotoxy(25,16); printf("ฬออออฮออออฮออออฮออออฮออออฮออออน");
gotoxy(25,17); printf("บ 50 บ 51 บ 54 บ 55 บ 58 บ 59 บ");
gotoxy(25,18); printf("ศออออสออออสออออสออออสออออสออออผ");
}
void Third_Card(void)
{
gotoxy(25,6); printf("ษอออออออออออออออออออออออออออออป");
gotoxy(25,7); printf("บ C O M P U T E R G A M E บ");
gotoxy(25,8); printf("ฬออออหออออหออออหออออหออออหออออน");
gotoxy(25,9); printf("บ 4 บ 5 บ 6 บ 7 บ 12 บ 13 บ");
gotoxy(25,10); printf("ฬออออฮออออฮออออฮออออฮออออฮออออน");
gotoxy(25,11); printf("บ 14 บ 15 บ 20 บ 21 บ 22 บ 23 บ");
gotoxy(25,12); printf("ฬออออฮออออฮออออฮออออฮออออฮออออน");
gotoxy(25,13); printf("บ 28 บ 29 บ 30 บ 31 บ 36 บ 37 บ");
gotoxy(25,14); printf("ฬออออฮออออฮออออฮออออฮออออฮออออน");
gotoxy(25,15); printf("บ 38 บ 39 บ 44 บ 45 บ 46 บ 47 บ");
gotoxy(25,16); printf("ฬออออฮออออฮออออฮออออฮออออฮออออน");
gotoxy(25,17); printf("บ 52 บ 53 บ 54 บ 55 บ 60 บ 60 บ");
gotoxy(25,18); printf("ศออออสออออสออออสออออสออออสออออผ");
}
void Fourth_Card(void)
{
gotoxy(25,6); printf("ษอออออออออออออออออออออออออออออป");
gotoxy(25,7); printf("บ C O M P U T E R G A M E บ");
gotoxy(25,8); printf("ฬออออหออออหออออหออออหออออหออออน");
gotoxy(25,9); printf("บ 8 บ 9 บ 10 บ 11 บ 12 บ 13 บ");
gotoxy(25,10); printf("ฬออออฮออออฮออออฮออออฮออออฮออออน");
gotoxy(25,11); printf("บ 14 บ 15 บ 24 บ 25 บ 26 บ 27 บ");
gotoxy(25,12); printf("ฬออออฮออออฮออออฮออออฮออออฮออออน");
gotoxy(25,13); printf("บ 28 บ 29 บ 30 บ 31 บ 40 บ 41 บ");
gotoxy(25,14); printf("ฬออออฮออออฮออออฮออออฮออออฮออออน");
gotoxy(25,15); printf("บ 42 บ 43 บ 44 บ 45 บ 46 บ 47 บ");
gotoxy(25,16); printf("ฬออออฮออออฮออออฮออออฮออออฮออออน");
gotoxy(25,17); printf("บ 56 บ 57 บ 58 บ 59 บ 60 บ 60 บ");
gotoxy(25,18); printf("ศออออสออออสออออสออออสออออสออออผ");
}
void Fifth_Card(void)
{
gotoxy(25,6); printf("ษอออออออออออออออออออออออออออออป");
gotoxy(25,7); printf("บ C O M P U T E R G A M E บ");
gotoxy(25,8); printf("ฬออออหออออหออออหออออหออออหออออน");
gotoxy(25,9); printf("บ 16 บ 17 บ 18 บ 19 บ 20 บ 21 บ");
gotoxy(25,10); printf("ฬออออฮออออฮออออฮออออฮออออฮออออน");
gotoxy(25,11); printf("บ 22 บ 23 บ 24 บ 25 บ 26 บ 27 บ");
gotoxy(25,12); printf("ฬออออฮออออฮออออฮออออฮออออฮออออน");
gotoxy(25,13); printf("บ 28 บ 29 บ 30 บ 31 บ 48 บ 49 บ");
gotoxy(25,14); printf("ฬออออฮออออฮออออฮออออฮออออฮออออน");
gotoxy(25,15); printf("บ 50 บ 51 บ 52 บ 53 บ 54 บ 55 บ");
gotoxy(25,16); printf("ฬออออฮออออฮออออฮออออฮออออฮออออน");
gotoxy(25,17); printf("บ 56 บ 57 บ 58 บ 59 บ 60 บ 60 บ");
gotoxy(25,18); printf("ศออออสออออสออออสออออสออออสออออผ");
}
void Sixth_Card(void)
{
gotoxy(25,6); 
printf("ษอออออออออออออออออออออออออออออป 52 บ 53 บ 54 บ 55 บ");
gotoxy(25,16); printf("ฬออออฮออออฮออออฮออออฮออออฮออออน");
gotoxy(25,17); printf("บ 56 บ 57 บ 58 บ 59 บ 60 บ 60 บ");
gotoxy(25,18); printf("ศออออสออออสออออสออออสออออสออออผ");
}
Check(void)
{
int loop,key,index=0;
char *menu[]={" Yes "," No "};
textcolor(WHITE);
textbackground(CYAN);
while(1)
{ for (loop=0;loop<2;loop++)
{ if (loop==index)
textbackground(YELLOW);
else
textbackground(CYAN);
gotoxy(33+loop*10,20);cprintf("%s",menu[loop]);
}
key=getch();
switch(key)
{ case 75:
index--;if (index<0) index=1;break;
case 77:
index++;if (index>1) index=0;break;
case 13: return index;
}
}
}
void Analyze(void)
{
gotoxy(30,10); printf("Analyzing Result...");
gotoxy(25,11); printf("ษอออออออออออออออออออออออออออออป");
gotoxy(25,12); printf("บ ฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐ บ");
gotoxy(25,13); printf("ศอออออออออออออออออออออออออออออผ");
for(int a=27;a<=53;a++)
{ delay(100);
gotoxy(a,12);printf("%c",219);
}
}

