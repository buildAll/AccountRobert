//
//  displaysrc.c
//  
//
//  Created by bill on 4/11/14.
//  Copyright (c) 2014 buildAll. All rights reserved.
//

#include "displayinc.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>


void displayWelcome()
{
    //displayBounderay(BOUNDERAYTYPE);
   // FILE* dateFile;
  time_t rawtime;
  struct tm * timeinfo;
  char buffer [80];

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );

  strftime (buffer,80,"Now it's 20%y/%m/%d.",timeinfo);
  printf("Hello, I am Robert.Account.\n");
  puts (buffer);
  
  return;
}

void displayExpense(char* period,float consume)
{
     printf("You have spent : %.2f ", consume);
     printf(period);
     printf("\n");
     return;
}

void displayBounderay(char *displayBounderayType)
{
     printf(displayBounderayType);
	 printf("\n");
     return;
}

//void displayMenu(char *ptrToMenuListFile)

void displayMenu()
{

     printf("1. NEW expense\n");
     printf("0. Quit\n");
        
#if(0)
    FILE* menuList;
    long length;
    long count;
    char*msgForUser;
    char chOfFile;

    if((menuList = fopen("c:\\Users\\uidu8827\\Desktop\\menuItem", "r+")) == NULL)
        {
            printf("system fail, type 0\n");
            getchar();
            exit(0);
        }
    
        else
        {
            fseek(menuList,0L,SEEK_END);
            length = (int)ftell(menuList);
            //printf("the file's length is %1dB\n",length);
            //fclose(interfaceForUser);
            rewind(menuList);            
        }

      msgForUser = (char*)malloc(length*sizeof(char));  
      
    for (count = 0L; count<length; count++)
    {
        chOfFile = getc(menuList);
        
        if (chOfFile == '#')
        {
            break;
        }
        
        if (chOfFile == '\r')
            putchar('\n');
        else
            putchar(chOfFile);
        
    }
    
    fclose(menuList);
#endif    

    return;
}



