/**
 *  more_test.c engendre par ml2C 
 */
#include "runtime.h"

 /** Declaration des variables globales*/
  MLvalue* vide___24;
  MLvalue* iu___26;
  MLvalue* b___28;
  MLvalue* i___37;
  MLvalue* k___43;
  MLvalue* fd___51;
  MLvalue* fgd___53;
  MLvalue* fghgh___57;
  MLvalue* liste___81;

/**
 *  de'claration de la fonction null___1
 *    vue comme la structure Fun  : MLfun_null___1
 */ 
int MAX_MLfun_null___1 = 1;

MLvalue*  null___1;

MLvalue* new_MLfun_null___1();

MLvalue* new_MLfun_null___1_args(int n);


  MLvalue* invoke_real_MLfun_null___1(MLvalue* l___2) {

    { 
      MLvalue* T___3;
      { 
        MLvalue* T___4;
        MLvalue* T___5;
        T___4=l___2;
        T___5=MLnil;
        T___3=MLequals( (MLvalue* )T___4,(MLvalue* )T___5);
      }
      if (((MLvalue*)T___3)->value.asBoolean)
        { 
          MLvalue* T___6;
          T___6=MLtrue;
          return T___6;
        }
      else
        { 
          MLvalue* T___7;
          T___7=MLfalse;
          return T___7;
        }
    }
  }

  MLvalue* invoke_MLfun_null___1(MLvalue* function , MLvalue* MLparam){
    MLfun* temp = function->value.asFun; 
    int counter = temp->MLcounter; 
    if ( counter== (MAX_MLfun_null___1  - 1)) {
      return invoke_real_MLfun_null___1(MLparam);
    }
    else {
      MLvalue *l = new_MLfun_null___1_args(counter+1);
      MLfun* fun = l->value.asFun;
      fun->MLaddenv(fun,temp->env,MLparam);
      return l;
    }
  }

MLvalue* new_MLfun_null___1() { 
	MLfun *fun = initialise_fun ();
	fun->invoke = &invoke_MLfun_null___1;
	MLvalue* v= (MLvalue*)malloc(sizeof(MLvalue));
  	v->kind_ = function;
  	v->value.asFun = fun; 	
        v->print = &print_fun;
        return v;  
	}

 MLvalue* new_MLfun_null___1_args(int n) {
	MLfun *fun = initialize_fun (n);
	fun->invoke = &invoke_MLfun_null___1;
	MLvalue* v= (MLvalue*)malloc(sizeof(MLvalue));
  	v->kind_ = function;
  	v->value.asFun = fun;
  	v->print = &print_fun;
  	return v; }

// fin de la fonction MLfun_null___1


/**
 *  de'claration de la fonction inter___8
 *    vue comme la structure Fun  : MLfun_inter___8
 */ 
int MAX_MLfun_inter___8 = 2;

MLvalue*  inter___8;

MLvalue* new_MLfun_inter___8();

MLvalue* new_MLfun_inter___8_args(int n);


  MLvalue* invoke_real_MLfun_inter___8(MLvalue* a___9, MLvalue* b___10) {

    { 
      MLvalue* T___11;
      { 
        MLvalue* T___12;
        MLvalue* T___13;
        T___12=a___9;
        T___13=b___10;
        T___11=MLgtint( (MLvalue* )T___12,(MLvalue* )T___13);
      }
      if (((MLvalue*)T___11)->value.asBoolean)
        { 
          MLvalue* T___14;
          T___14=MLnil;
          return T___14;
        }
      else
        { 
          MLvalue* T___15;
          { 
            MLvalue* T___16;
            MLvalue* T___17;
            T___16=a___9;
            { 
              MLvalue* T___18;
              MLvalue* T___23;
              { 
                MLvalue* T___19;
                MLvalue* T___20;
                T___19=inter___8;
                { 
                  MLvalue* T___21;
                  MLvalue* T___22;
                  T___21=a___9;
                  T___22=new_int(1);
                  T___20=MLaddInt( (MLvalue* )T___21,(MLvalue* )T___22);
                }
                T___18=T___19->value.asFun->invoke(T___19 , T___20);
              }
              T___23=b___10;
              T___17=T___18->value.asFun->invoke(T___18 , T___23);
            }
            T___15=new_list( (MLvalue* )T___16,(MLvalue* )T___17);
          }
          return T___15;
        }
    }
  }

  MLvalue* invoke_MLfun_inter___8(MLvalue* function , MLvalue* MLparam){
    MLfun* temp = function->value.asFun; 
    int counter = temp->MLcounter; 
    if ( counter== (MAX_MLfun_inter___8  - 1)) {
      return invoke_real_MLfun_inter___8(&temp->env[0], MLparam);
    }
    else {
      MLvalue *l = new_MLfun_inter___8_args(counter+1);
      MLfun* fun = l->value.asFun;
      fun->MLaddenv(fun,temp->env,MLparam);
      return l;
    }
  }

MLvalue* new_MLfun_inter___8() { 
	MLfun *fun = initialise_fun ();
	fun->invoke = &invoke_MLfun_inter___8;
	MLvalue* v= (MLvalue*)malloc(sizeof(MLvalue));
  	v->kind_ = function;
  	v->value.asFun = fun; 	
        v->print = &print_fun;
        return v;  
	}

 MLvalue* new_MLfun_inter___8_args(int n) {
	MLfun *fun = initialize_fun (n);
	fun->invoke = &invoke_MLfun_inter___8;
	MLvalue* v= (MLvalue*)malloc(sizeof(MLvalue));
  	v->kind_ = function;
  	v->value.asFun = fun;
  	v->print = &print_fun;
  	return v; }

// fin de la fonction MLfun_inter___8


/**
 *  de'claration de la fonction mult___32
 *    vue comme la structure Fun  : MLfun_mult___32
 */ 
int MAX_MLfun_mult___32 = 2;

MLvalue*  mult___32;

MLvalue* new_MLfun_mult___32();

MLvalue* new_MLfun_mult___32_args(int n);


  MLvalue* invoke_real_MLfun_mult___32(MLvalue* x___33, MLvalue* y___34) {

    { 
      MLvalue* T___35;
      MLvalue* T___36;
      T___35=x___33;
      T___36=y___34;
      return MLmultInt( (MLvalue* )T___35,(MLvalue* )T___36);
    }
  }

  MLvalue* invoke_MLfun_mult___32(MLvalue* function , MLvalue* MLparam){
    MLfun* temp = function->value.asFun; 
    int counter = temp->MLcounter; 
    if ( counter== (MAX_MLfun_mult___32  - 1)) {
      return invoke_real_MLfun_mult___32(&temp->env[0], MLparam);
    }
    else {
      MLvalue *l = new_MLfun_mult___32_args(counter+1);
      MLfun* fun = l->value.asFun;
      fun->MLaddenv(fun,temp->env,MLparam);
      return l;
    }
  }

MLvalue* new_MLfun_mult___32() { 
	MLfun *fun = initialise_fun ();
	fun->invoke = &invoke_MLfun_mult___32;
	MLvalue* v= (MLvalue*)malloc(sizeof(MLvalue));
  	v->kind_ = function;
  	v->value.asFun = fun; 	
        v->print = &print_fun;
        return v;  
	}

 MLvalue* new_MLfun_mult___32_args(int n) {
	MLfun *fun = initialize_fun (n);
	fun->invoke = &invoke_MLfun_mult___32;
	MLvalue* v= (MLvalue*)malloc(sizeof(MLvalue));
  	v->kind_ = function;
  	v->value.asFun = fun;
  	v->print = &print_fun;
  	return v; }

// fin de la fonction MLfun_mult___32


/**
 *  de'claration de la fonction succ___47
 *    vue comme la structure Fun  : MLfun_succ___47
 */ 
int MAX_MLfun_succ___47 = 1;

MLvalue*  succ___47;

MLvalue* new_MLfun_succ___47();

MLvalue* new_MLfun_succ___47_args(int n);


  MLvalue* invoke_real_MLfun_succ___47(MLvalue* x___48) {

    { 
      MLvalue* T___49;
      MLvalue* T___50;
      T___49=x___48;
      T___50=iu___26;
      return MLaddInt( (MLvalue* )T___49,(MLvalue* )T___50);
    }
  }

  MLvalue* invoke_MLfun_succ___47(MLvalue* function , MLvalue* MLparam){
    MLfun* temp = function->value.asFun; 
    int counter = temp->MLcounter; 
    if ( counter== (MAX_MLfun_succ___47  - 1)) {
      return invoke_real_MLfun_succ___47(MLparam);
    }
    else {
      MLvalue *l = new_MLfun_succ___47_args(counter+1);
      MLfun* fun = l->value.asFun;
      fun->MLaddenv(fun,temp->env,MLparam);
      return l;
    }
  }

MLvalue* new_MLfun_succ___47() { 
	MLfun *fun = initialise_fun ();
	fun->invoke = &invoke_MLfun_succ___47;
	MLvalue* v= (MLvalue*)malloc(sizeof(MLvalue));
  	v->kind_ = function;
  	v->value.asFun = fun; 	
        v->print = &print_fun;
        return v;  
	}

 MLvalue* new_MLfun_succ___47_args(int n) {
	MLfun *fun = initialize_fun (n);
	fun->invoke = &invoke_MLfun_succ___47;
	MLvalue* v= (MLvalue*)malloc(sizeof(MLvalue));
  	v->kind_ = function;
  	v->value.asFun = fun;
  	v->print = &print_fun;
  	return v; }

// fin de la fonction MLfun_succ___47


/**
 *  de'claration de la fonction map___61
 *    vue comme la structure Fun  : MLfun_map___61
 */ 
int MAX_MLfun_map___61 = 2;

MLvalue*  map___61;

MLvalue* new_MLfun_map___61();

MLvalue* new_MLfun_map___61_args(int n);


  MLvalue* invoke_real_MLfun_map___61(MLvalue* f___62, MLvalue* l___63) {

    { 
      MLvalue* T___64;
      { 
        MLvalue* T___65;
        MLvalue* T___66;
        T___65=null___1;
        T___66=l___63;
        T___64=T___65->value.asFun->invoke(T___65 , T___66);
      }
      if (((MLvalue*)T___64)->value.asBoolean)
        { 
          MLvalue* T___67;
          T___67=MLnil;
          return T___67;
        }
      else
        { 
          MLvalue* T___68;
          { 
            MLvalue* T___69;
            MLvalue* T___74;
            { 
              MLvalue* T___70;
              MLvalue* T___71;
              T___70=f___62;
              { 
                MLvalue* T___72;
                MLvalue* T___73;
                T___72=MLhd;
                T___73=l___63;
                T___71=T___72->value.asFun->invoke(T___72 , T___73);
              }
              T___69=T___70->value.asFun->invoke(T___70 , T___71);
            }
            { 
              MLvalue* T___75;
              MLvalue* T___78;
              { 
                MLvalue* T___76;
                MLvalue* T___77;
                T___76=map___61;
                T___77=f___62;
                T___75=T___76->value.asFun->invoke(T___76 , T___77);
              }
              { 
                MLvalue* T___79;
                MLvalue* T___80;
                T___79=MLtl;
                T___80=l___63;
                T___78=T___79->value.asFun->invoke(T___79 , T___80);
              }
              T___74=T___75->value.asFun->invoke(T___75 , T___78);
            }
            T___68=new_list( (MLvalue* )T___69,(MLvalue* )T___74);
          }
          return T___68;
        }
    }
  }

  MLvalue* invoke_MLfun_map___61(MLvalue* function , MLvalue* MLparam){
    MLfun* temp = function->value.asFun; 
    int counter = temp->MLcounter; 
    if ( counter== (MAX_MLfun_map___61  - 1)) {
      return invoke_real_MLfun_map___61(&temp->env[0], MLparam);
    }
    else {
      MLvalue *l = new_MLfun_map___61_args(counter+1);
      MLfun* fun = l->value.asFun;
      fun->MLaddenv(fun,temp->env,MLparam);
      return l;
    }
  }

MLvalue* new_MLfun_map___61() { 
	MLfun *fun = initialise_fun ();
	fun->invoke = &invoke_MLfun_map___61;
	MLvalue* v= (MLvalue*)malloc(sizeof(MLvalue));
  	v->kind_ = function;
  	v->value.asFun = fun; 	
        v->print = &print_fun;
        return v;  
	}

 MLvalue* new_MLfun_map___61_args(int n) {
	MLfun *fun = initialize_fun (n);
	fun->invoke = &invoke_MLfun_map___61;
	MLvalue* v= (MLvalue*)malloc(sizeof(MLvalue));
  	v->kind_ = function;
  	v->value.asFun = fun;
  	v->print = &print_fun;
  	return v; }

// fin de la fonction MLfun_map___61
/**
 * 
 */


int main(int argc, char** args) {   

  null___1= new_MLfun_null___1(1);
  inter___8= new_MLfun_inter___8(2);
  mult___32= new_MLfun_mult___32(2);
  succ___47= new_MLfun_succ___47(1);
  map___61= new_MLfun_map___61(2);
vide___24=MLnil;
{ 
  MLvalue* bidon___25;
  bidon___25=MLlr;
  bidon___25=MLprint( (MLvalue* )vide___24);
}
iu___26=new_int(7);
{ 
  MLvalue* bidon___27;
  bidon___27=MLlr;
  bidon___27=MLprint( (MLvalue* )iu___26);
}
{ 
  MLvalue* T___29;
  MLvalue* T___30;
  T___29=null___1;
  T___30=vide___24;
  b___28=T___29->value.asFun->invoke(T___29 , T___30);
}
{ 
  MLvalue* bidon___31;
  bidon___31=MLlr;
  bidon___31=MLprint( (MLvalue* )b___28);
}
{ 
  MLvalue* T___38;
  MLvalue* T___41;
  { 
    MLvalue* T___39;
    MLvalue* T___40;
    T___39=inter___8;
    T___40=new_int(1);
    T___38=T___39->value.asFun->invoke(T___39 , T___40);
  }
  T___41=new_int(10);
  i___37=T___38->value.asFun->invoke(T___38 , T___41);
}
{ 
  MLvalue* bidon___42;
  bidon___42=MLlr;
  bidon___42=MLprint( (MLvalue* )i___37);
}
{ 
  MLvalue* T___44;
  MLvalue* T___45;
  T___44=null___1;
  T___45=i___37;
  k___43=T___44->value.asFun->invoke(T___44 , T___45);
}
{ 
  MLvalue* bidon___46;
  bidon___46=MLlr;
  bidon___46=MLprint( (MLvalue* )k___43);
}
fd___51=inter___8;
{ 
  MLvalue* bidon___52;
  bidon___52=MLlr;
  bidon___52=MLprint( (MLvalue* )fd___51);
}
{ 
  MLvalue* T___54;
  MLvalue* T___55;
  T___54=inter___8;
  T___55=new_int(6);
  fgd___53=T___54->value.asFun->invoke(T___54 , T___55);
}
{ 
  MLvalue* bidon___56;
  bidon___56=MLlr;
  bidon___56=MLprint( (MLvalue* )fgd___53);
}
{ 
  MLvalue* T___58;
  MLvalue* T___59;
  T___58=fgd___53;
  T___59=new_int(9);
  fghgh___57=T___58->value.asFun->invoke(T___58 , T___59);
}
{ 
  MLvalue* bidon___60;
  bidon___60=MLlr;
  bidon___60=MLprint( (MLvalue* )fghgh___57);
}
{ 
  MLvalue* T___82;
  MLvalue* T___87;
  { 
    MLvalue* T___83;
    MLvalue* T___84;
    T___83=map___61;
    { 
      MLvalue* T___85;
      MLvalue* T___86;
      T___85=mult___32;
      T___86=new_int(5);
      T___84=T___85->value.asFun->invoke(T___85 , T___86);
    }
    T___82=T___83->value.asFun->invoke(T___83 , T___84);
  }
  T___87=i___37;
  liste___81=T___82->value.asFun->invoke(T___82 , T___87);
}
{ 
  MLvalue* bidon___88;
  bidon___88=MLlr;
  bidon___88=MLprint( (MLvalue* )liste___81);
}
}

// fin du fichier more_test.c
