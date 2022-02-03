#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int Home();
int About();
int order();
int Menu();
void Thankyou(int total,char name[],char address[],char phno[]);

int totalAmount =0;

int main()
{
   int ch= Home();


       if(ch==1){
        int ordCh=order();       //Order section
          if(ordCh==1){
               int menuCh=Menu();
               int num=0;    //Menu section
               if(menuCh>0 && menuCh <=5){
                   char finish ='n';
                    while(finish !='y'){
                        printf("\n\t\t\tEnter order item number: ");
                        scanf("%d",&menuCh);
                         printf("\t\t\tEnter numbers of item : ");
                      scanf("%d",&num);
                    if(menuCh ==1){
                        int cost = num*250;
                       totalAmount +=(num * 250);
                       printf("\t\t\tCost : %d",cost);
                       printf("\n\t\t\tTotalCost : %d",totalAmount);
                       printf("\n\t\t\tHave you finished[y/n] : ");
                       getchar();
                      scanf("%c",&finish);
                      }else if(menuCh==2){
                         int cost = num*1500;
                       totalAmount +=(num * 1500);
                       printf("\t\t\tCost : %d",cost);
                       printf("\n\t\t\tTotalCost : %d",totalAmount);
                       printf("\n\t\t\tHave you finished[y/n] : ");
                       getchar();
                      scanf("%c",&finish);
                      }else if(menuCh==3){
                         int cost = num*2500;
                       totalAmount +=(num * 2500);
                       printf("\t\t\tCost : %d",cost);
                       printf("\n\t\t\tTotalCost : %d",totalAmount);
                       printf("\n\t\t\tHave you finished[y/n] : ");
                       getchar();
                      scanf("%c",&finish);
                      }else if(menuCh==4){
                         int cost = num*1600;
                       totalAmount +=(num * 1600);
                       printf("\t\t\tCost : %d",cost);
                       printf("\n\t\t\tTotalCost : %d",totalAmount);
                       printf("\n\t\t\tHave you finished[y/n] : ");
                       getchar();
                      scanf("%c",&finish);
                      }else {
                         int cost = num*500;
                       totalAmount +=(num * 500);
                       printf("\t\t\tCost : %d",cost);
                       printf("\n\t\t\tTotalCost : %d",totalAmount);
                       printf("\n\t\t\tHave you finished[y/n] : ");
                       getchar();
                      scanf("%c",&finish);
                      }
                    }
                    char name[30];
                    char address [30];
                   char phno[30];
                   char hello[30];
                   gets(hello);
                 printf("\n\t\t\tEnter Your Name : ");
                 //getch();
                 gets(name);

                 printf("\t\t\tEnter Your Address : ");
                 gets(address);

                printf("\t\t\tEnter Your Ph no : ");
                gets(phno);

              //  printf("\n\t\t\tView All your Order");
              Thankyou(totalAmount,name,address,phno);
               }else if(menuCh==0){
                   main();
               }else{
                printf("\n\t\t\tYou are exiting .....\n");
                exit(1);
               }
          }else if(ordCh ==2){
            main();
           }else{
                printf("\n\t\t\tYou are exiting .....\n");
              exit(1);
        }
    }else if(ch==2){
         int b = About();
         if(b==0){
            main();
         }else{
           printf("\n\t\tYou are exiting .....\n");
          exit(1);

         }
   }else if(ch==3){
         printf("\n\t\tYou are exiting .....\n");
     exit(1);
   }else{
     printf("\n\t\tInvalid number");
   }




   printf("\n\n\n");
    return 0;
}

int Home (){
    system("cls");
 int ch;
 printf("\t\t**************************************************\n");
printf("\t\t\t PAING's RESTRAUNT FOOD ORDER \n\n");
printf("\t\t\t1 > Order Food \n\t\t\t2 > About the Program \n\t\t\t3 > EXIT..\n\n");
 printf("\t\t**************************************************\n");
 printf("\t\tEnter a number to choice : ");
 scanf("%d",&ch);
return ch;
}
int  About(){
   system("cls");
   int b;
   printf("\t\t********************************************************\n");
printf("\t\t\t PAING's RESTRAUNT FOOD ORDER \n\n");
printf("\n\t\t  This is the program for restraunt food order system.\n\t\tDuring this covid 19 we can't go freely to everywhere.");
printf("\n\t\tSo,if you want some food for you or your family \n\t\tyou can order using this program");
printf("\n\t\tThis is educational purpose and just a testing program .\n\t\tFeel free to use");

printf("\n\n\t\t********************************************************\n");
printf("\n\t\t # BACK (enter 0) \n\t\t # Exit (enter any number) \n\t\t ");
scanf("%d",&b);

return b;
}

int order(){
 system("cls");
int ch;
 printf("\n\t\t*************************************\n");
 printf("\n\t\t\t 1 > View Menu \n\t\t\t 2 > Back \n\t\t\t # > Exit..(any num) ");

  printf("\n\n\t\t*************************************\n");

  printf("\n\t\t\tEnter a number  to Choice : ");
  scanf("%d",&ch);
  return ch;
}

int Menu(){
  system("cls");
  int ch;
  printf("\n\n\t\t***************************************************\n");
  printf("\n\n\t\t\t 1 > Half-fried egg       250ks/per");
  printf("\n\n\t\t\t 2 > Chicken Curry        1500ks/per");
  printf("\n\n\t\t\t 3 > Beef Curry           2500ks/per");
  printf("\n\n\t\t\t 4 > Tiger Beer           1600ks/per");
  printf("\n\n\t\t\t 5 > Ice-cream            500ks/per");
  printf("\n\n");
   printf("\n\t\t\t 0 > Back to Home");
    printf("\n\t\t\t # > Exit.. (any num)");
  printf("\n\n\t\t***************************************************\n");

  printf("\n\t\t\tEnter a valid number to enter (1 to 5) ");
  scanf("%d",&ch);

  return ch;
}

void Thankyou(int total,char name[],char address[],char phno[]){
 system("cls");
printf("\n\n\t\t***********************************************************\n");
    printf("\n\t\tThank you for your ordering food . We Will be on right time. \n");
    printf("\t\tYou Ordered cost %d KS",total);
    printf("\n\t\tName : %s ",name);
    printf("\n\t\tAddress : %s ",address);
    printf("\n\t\tPhone No : %s ",phno);
  printf("\n\n\t\t***********************************************************\n");
  printf("\n\t\t\t\t\t\t\t   PAING RESTRAUNT ");
  getch();
}
