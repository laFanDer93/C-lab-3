/*
 Написать программу, которая для введённой строки
 выводит самое длинное слово его длину
 Пояснение
 
 Строка, вводимая с клавиатуры может содержать любое количество пробельных и непробельных символов. Таким образом, мы рассматриваем слово как последовательность символов, разделенную любым количеством пробелов (пробелы могут находиться и в начале и в конце строки).
 
 Состав
 
 Программа должна состоять из функций:
 
 - int getMaxWord(char buf[],char word[]) - нахождение слова максимальной длины.
 Слово записывается в массив word, а его длина возвращается из функции
 - main()

 */

#include <stdio.h>
#include <string.h>
#include "task3.h"
#define N 1000

int main()
{
    char buf [N];
    char word [N] = { 0 };
    printf("Just enter something:\n");
    fgets(buf, N, stdin);
    printf("Longest word is:\n");
    printf("%s - %d\n", word, getMaxWord(buf, word));
    
    return 0;
  
}
