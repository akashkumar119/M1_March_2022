#ifndef __FUNCTION_H__
#define __FUNCTION_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"
#include "assert.h"

#ifndef __FUNCTION_H__
#define __FUNCTION_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"
#include "assert.h"

#endif /* #define _FUNCTION_H__ */



/**
 * @brief admin can change prize of ticket after entering password .
 * 
 */
int changeprize(int);

/**
 * @brief A customer can reserve the ticket
 */
void reservation(int *,int,int );


int choice1(void);

/**
 * @brief A customer can cancel the ticket  
 */
void cancel(int *);   

/**
 * @brief Customer can purchase a ticket 
 */     
void ticket1(int choice,char name[10],int id2,int price);

/**
 * @brief Customer can purchase a ticket 
 */
void ticket2(int choice,char name[10],int id2,int price);

/**
 * @brief Customer can purchase a ticket 
 */
void ticket3(int choice,char name[10],int id2,int price);

/**
 * @brief Displays the movie available to purchase a ticket
 */
int cmovie(void);
int movie(void);

/**
* @brief display the detail of the booked ticket.
*/
void details(void);
#endif /* #define _FUNCTION_H__ */
