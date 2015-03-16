/**
  * Implementation des fermeture dans un langage imperatif.
  * From mini-ML to C. 		
  * By Manyanda Chitimbo & Thomas Perez
  * Computer Science students, major in Science and Technology of Software
  * Module, Advanced Compiling Technics
  * March 2015
  * Original work by Prof Emmanuel Chailloux 
  * Date April 2006 : From mini-ML to Java
*/


#ifndef RUNTIME_H
#define RUNTIME_H


#include <stdlib.h>
#include <stdio.h>
#include <string.h>


// acces aux champs des paires

#define MLfst 	    initialise_first();
#define MLsnd	    initialise_second(); 	

// acces aux champs des listes

#define MLhd initialise_head(); 
#define MLtl initialise_tail(); 


#define MLtrue  new_bool(true)
#define MLfalse new_bool(false)
#define MLlr 	new_unit() 
#define MLnil   new_list(NULL,NULL) 


 struct MLpair;
 struct MLlist;
 struct MLfun;
  
typedef enum MLkind  { unit=1 , integer,
		       real   , stringz,
		       boolean, pair,
		       list ,   function} MLkind;

typedef enum bool { 
	false =0, 
	true =1
} bool;


typedef struct MLValue {
  MLkind kind_;
  union {
    unsigned int  	asUnit;
    long	    	asInt;
    bool   		asBoolean;
    double		asDouble;
    char*	 	asString;
    struct MLpair   	*asPair;
    struct MLlist   	*asList;
    struct MLfun   *asFun;		
  } value; 
 
 void (*print) (void*);

 } MLvalue;


typedef struct MLlist {
  MLvalue* head;
  MLvalue  *next;   
 } MLlist;

typedef struct MLpair {
  MLvalue* first;
  MLvalue* second;
 } MLpair;


typedef struct MLfun {
   int MLcounter;
   MLvalue* env;
   void (*MLaddenv) (void *, MLvalue*, MLvalue *);
   MLvalue* (*invoke) (MLvalue*, MLvalue* ); 
  } MLfun;


void MLunit_print ();

void MLbool_print (MLvalue*);

void MLint_print(MLvalue*);

void MLdouble_print(MLvalue*);

void MLstring_print(MLvalue*);

MLvalue* get_tail (MLvalue* , MLvalue* list);

MLvalue* access_value (MLvalue*, MLvalue* list);

void print_list (MLvalue *list);

MLlist* initialize_list (MLvalue* val, MLvalue* next);

MLvalue* get_first (MLvalue*  invoker , MLvalue *paire );

MLvalue* get_second (MLvalue*  invoker, MLvalue *paire );

void print_pair (MLvalue *pair );

MLpair* initilize_pair (MLvalue* value1, MLvalue* value2 );

void addenv (MLfun *fun, MLvalue* , MLvalue *);

void print_fun (MLvalue* );
 
MLfun* initialise_fun ();

MLfun* initialize_fun (int);

/**
 * Les primitives de base 
 */

MLvalue* initialise_head ();
MLvalue* initialise_tail ();
MLvalue* initialise_first();
MLvalue* initialise_first();

/* la fonction d'affichage */
 
MLvalue* MLprint(MLvalue* );

/**
 * Creation of MLvalues*
 *
 **/  
MLvalue* new_unit ();

MLvalue* new_bool (bool);

MLvalue* new_int (int );

MLvalue* new_double ( double );

MLvalue* new_string (char*);

MLvalue* new_pair (MLvalue* , MLvalue* ); 

MLvalue* new_list (MLvalue*, MLvalue* ); 


/**
 * Operations on MLValue
 *
*/
MLvalue* MLaddInt (MLvalue*, MLvalue*); 
MLvalue* MLsubInt (MLvalue*, MLvalue*);
MLvalue* MLmultInt (MLvalue*, MLvalue*);
MLvalue* MLdivInt (MLvalue*, MLvalue*);
MLvalue* MLequals (MLvalue* , MLvalue*);
MLvalue* MLltint (MLvalue* , MLvalue *);
MLvalue* MLletint (MLvalue*, MLvalue *);
MLvalue* MLgtint (MLvalue*, MLvalue*);
MLvalue* MLgeint (MLvalue* , MLvalue*); 
MLvalue* MLconcat (MLvalue* , MLvalue*);
int checkSimilarity(MLvalue*, MLvalue*);
#endif 




