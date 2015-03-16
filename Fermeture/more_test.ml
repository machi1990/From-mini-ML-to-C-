let null = function l -> if l = [] then true else false ;;


let rec inter = function a -> function b -> 
    if a > b then [] else a::(inter (a+1) b)
;;

let vide = [];;

let iu = 7;;


let b = null vide;;

let mult  = function x -> function y -> x * y;; 

let i = inter 1 10;;

let k = null i;;

let succ = function x-> x + iu;;
let fd = inter;;

let fgd = inter 6;;

let fghgh = fgd 9;;

let rec map = function f -> function l -> 
    if null l then [] else (f (hd l))::(map f (tl l))
;;

let liste = map ( mult 5) i;;
