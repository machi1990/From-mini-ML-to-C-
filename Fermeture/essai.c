/**
 *  essai.c engendre par ml2C 
 */
#include "runtime.h"

 /** Declaration des variables globales*/
  MLvalue* k___1;
  MLvalue* vide___3;
  MLvalue* y___13;
  MLvalue* k___17;

/**
 *  de'claration de la fonction machin___5
 *    vue comme la structure Fun  : MLfun_machin___5
 */ 
int MAX_MLfun_machin___5 = 1;

MLvalue*  machin___5;

MLvalue* new_MLfun_machin___5();

MLvalue* new_MLfun_machin___5_args(int n);


  MLvalue* invoke_real_MLfun_machin___5(MLvalue* x___6) {

    { 
      MLvalue* T___7;
      MLvalue* T___8;
      T___7=x___6;
      T___8=new_int(0);
      return MLaddInt( (MLvalue* )T___7,(MLvalue* )T___8);
    }
  }

  MLvalue* invoke_MLfun_machin___5(MLvalue* function , MLvalue* MLparam){
    MLfun* temp = function->value.asFun; 
    int counter = temp->MLcounter; 
    if ( counter== (MAX_MLfun_machin___5  - 1)) {
      return invoke_real_MLfun_machin___5(MLparam);
    }
    else {
      MLvalue *l = new_MLfun_machin___5_args(counter+1);
      MLfun* fun = l->value.asFun;
      fun->MLaddenv(fun,temp->env,MLparam);
      return l;
    }
  }

MLvalue* new_MLfun_machin___5() { 
	MLfun *fun = initialise_fun ();
	fun->invoke = &invoke_MLfun_machin___5;
	MLvalue* v= (MLvalue*)malloc(sizeof(MLvalue));
  	v->kind_ = function;
  	v->value.asFun = fun; 	
        v->print = &print_fun;
        return v;  
	}

 MLvalue* new_MLfun_machin___5_args(int n) {
	MLfun *fun = initialize_fun (n);
	fun->invoke = &invoke_MLfun_machin___5;
	MLvalue* v= (MLvalue*)malloc(sizeof(MLvalue));
  	v->kind_ = function;
  	v->value.asFun = fun;
  	v->print = &print_fun;
  	return v; }

// fin de la fonction MLfun_machin___5


/**
 *  de'claration de la fonction succ___9
 *    vue comme la structure Fun  : MLfun_succ___9
 */ 
int MAX_MLfun_succ___9 = 1;

MLvalue*  succ___9;

MLvalue* new_MLfun_succ___9();

MLvalue* new_MLfun_succ___9_args(int n);


  MLvalue* invoke_real_MLfun_succ___9(MLvalue* x___10) {

    { 
      MLvalue* T___11;
      MLvalue* T___12;
      T___11=x___10;
      T___12=new_int(1);
      return MLaddInt( (MLvalue* )T___11,(MLvalue* )T___12);
    }
  }

  MLvalue* invoke_MLfun_succ___9(MLvalue* function , MLvalue* MLparam){
    MLfun* temp = function->value.asFun; 
    int counter = temp->MLcounter; 
    if ( counter== (MAX_MLfun_succ___9  - 1)) {
      return invoke_real_MLfun_succ___9(MLparam);
    }
    else {
      MLvalue *l = new_MLfun_succ___9_args(counter+1);
      MLfun* fun = l->value.asFun;
      fun->MLaddenv(fun,temp->env,MLparam);
      return l;
    }
  }

MLvalue* new_MLfun_succ___9() { 
	MLfun *fun = initialise_fun ();
	fun->invoke = &invoke_MLfun_succ___9;
	MLvalue* v= (MLvalue*)malloc(sizeof(MLvalue));
  	v->kind_ = function;
  	v->value.asFun = fun; 	
        v->print = &print_fun;
        return v;  
	}

 MLvalue* new_MLfun_succ___9_args(int n) {
	MLfun *fun = initialize_fun (n);
	fun->invoke = &invoke_MLfun_succ___9;
	MLvalue* v= (MLvalue*)malloc(sizeof(MLvalue));
  	v->kind_ = function;
  	v->value.asFun = fun;
  	v->print = &print_fun;
  	return v; }

// fin de la fonction MLfun_succ___9
/**
 * 
 */


int main(int argc, char** args) {   

  machin___5= new_MLfun_machin___5(1);
  succ___9= new_MLfun_succ___9(1);
k___1=new_int(7);
{ 
  MLvalue* bidon___2;
  bidon___2=MLlr;
  bidon___2=MLprint( (MLvalue* )k___1);
}
vide___3=MLnil;
{ 
  MLvalue* bidon___4;
  bidon___4=MLlr;
  bidon___4=MLprint( (MLvalue* )vide___3);
}
{ 
  MLvalue* T___14;
  MLvalue* T___15;
  T___14=succ___9;
  T___15=new_int(0);
  y___13=T___14->value.asFun->invoke(T___14 , T___15);
}
{ 
  MLvalue* bidon___16;
  bidon___16=MLlr;
  bidon___16=MLprint( (MLvalue* )y___13);
}
{ 
  MLvalue* T___18;
  MLvalue* T___19;
  T___18=machin___5;
  { 
    MLvalue* T___20;
    MLvalue* T___21;
    T___20=succ___9;
    { 
      MLvalue* T___22;
      MLvalue* T___23;
      T___22=succ___9;
      T___23=new_int(9);
      T___21=T___22->value.asFun->invoke(T___22 , T___23);
    }
    T___19=T___20->value.asFun->invoke(T___20 , T___21);
  }
  k___17=T___18->value.asFun->invoke(T___18 , T___19);
}
{ 
  MLvalue* bidon___24;
  bidon___24=MLlr;
  bidon___24=MLprint( (MLvalue* )k___17);
}
}

// fin du fichier essai.c
