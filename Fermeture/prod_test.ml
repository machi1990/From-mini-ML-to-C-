let prod_fun instr = match instr with 
  FUNCTION (ns,t1,ar,(lp,t2),instr) -> 
      let struct_name = "MLfun_"^ns in
      fun_header ns struct_name ;
      out_line ("int MAX_"^struct_name^" = "^(string_of_int ar)^";") ;
      out_line "";
      out_line ("typedef struct "^struct_name^" {");
      out_line "";
      out_line ("MLfun *fun; ");
      out_line "";
      out_line ("MLvalue* invoke_real (" );
      for i=0 to ar-2 do 
         out ("MLvalue*, ")
      done;
      out_line ("MLvalue* );");
      out_line (" } "^struct_name^"; ");

      prod_invoke_fun struct_name ar t1 lp instr;
      out_line "";

      prod_invoke stuct_name ar;
      out_line "";


      out_line ("  "^class_name^"() {super();}") ;  (* Initialisation de la structure fonction*)
      out_line "";
      out_line ("  "^class_name^"(int n) {super(n);}") ;      (* Initialisation de la structure fonction*)
      out_line "";
      
      out_line "}";
      out_line ("// fin de la classe "^struct_name)
      
      
|  _ -> ()
;;
