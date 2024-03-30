// D int *f(int n){
//   int *num = malloc(sizeof(int)*n);
//   return num;
// }

/*Esse é o trecho errado, pois nele está sendo alocado memória através do uso da função malloc,
porém este espaço de memória não é liberado, causando assim um vazamento de meméria*/