//
//  acc.h
//  accounting
//
//  Created by bill on 4/6/14.
//  Copyright (c) 2014 buildAll. All rights reserved.
//

#ifndef mmiinc_h
#define mmiinc_h

#endif

#include <stdbool.h>

#define MAXMENUITEM 1

/*
typedef enum boolen
{
    false = 0,
    true = 1
}bool;

*/

float mmiNewConsume;

bool newDay;

enum actionList
{
    quit,
    newExpense,
    checkToday,
    checkMonth,
    checkYear,
    checkHistory
};

int mmiGetAction(void);

void mmiHandleAction(int actionID);

float mmiGetNewExpense(void);

struct Expense
{
  /* data */
  char* dateExpense;   //the date of the expense be made
  float moneyExpense;    //how much for this expense
  char* gainExpense;   //what be gained from the expense
};

struct Expense firstEx;

void mmiCheckNewDay(void);

//bool mmiCheckDayChange();

#if(0)
//#include <limits.h>


/*data*/
struct Expense
{
	/* data */
	char* dateExpense;   //the date of the expense be made
	float moneyExpense;    //how much for this expense
	char* gainExpense;   //what be gained from the expense
};

struct Expense firstEx;

typedef enum boolen
{
    false = 0,
    true = 1
}bool;


enum actionList
{
    quit,
    newExpense,
    checkToday,
    checkMonth,
    checkYear,
    checkHistory
};

bool newDay;



/*Function*/

/*Below feature needs add for this function:
  1. get today's expense
  2. Optimise Today time display to delete the clock information(This feature may be implemented in getTodayDate function)
  3. Add signeture
*/
void displayWelcome(void);

/*Below feature needs add for this function:
   1.Handle the enter that is not a NUMBER.
 */
int getAction(void);

void handleAction(int actionID);


void getNewExpense(void);

float calTodayTotal(float newExpense);


char* getTodayDate(void);

bool checkDayChange();

void resetTodayTotal(void);

char* getUserName(void);

void creatDir(void);


int getTotalConsume(int expenseThisTime);
#endif
