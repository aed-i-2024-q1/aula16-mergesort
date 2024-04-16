## Aula 16 - Mergesort

Para fins de teste, optamos por criar módulos separados para a operação de mesclagem e a a 
operação de ordenação:

* `merge.h` e `merge.c`: operação de mesclagem
* `merge_sort.h` e `merge_sort.c`: operação de ordenação

O arquivo `merge_sort.c` contém duas versões do algoritmo mergesort: 

* `mergesortRecur`: versão recursiva (top-down)
* `mergesortIter`: versão iterativa (bottom-up)
