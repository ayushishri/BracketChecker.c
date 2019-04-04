#include<stdio.h>
#include<stdlib.h>
#include "LinkedList.c"



int main(void){

   int n=-1;
   int i=1;
   char value;
   char value1;
   llnode *input_list=NULL;

   while ((scanf("%c",&value) != EOF && i)==1) {

      n=n+1;
      if(value == '('){
         push(&input_list,value);
      }
      else if(value == '{'){
          push(&input_list,value);
       }
      else if(value == '['){
         push(&input_list, value);
         }
      else if(value == ')' && input_list != NULL){
         pop(&input_list,&value1);
         if(value1 != '('){
            i =0;
           printf("FAIL,%i\n",n);
          }
     }
      else if(value == '}' && input_list!= NULL){
         pop(&input_list,&value1);
         if(value1 != '{'){
             i = 0;
            printf("FAIL,%i\n",n);
         }
      }
      else if(value == ']' && input_list!= NULL){
            pop(&input_list,&value1);
           /* printf("The value popped is:%c\n",value1);*/
            if(value1 != '['){
                i =0;
                printf("FAIL,%i\n",n);
            }
        }
      else if (value == ')' && input_list == NULL){
          i = 0;
          printf("Fail,%i\n",n);
      }

      else if (value == '}' && input_list == NULL){
          i = 0;
          printf("FAIL,%i\n",n);
      }
      else if (value == ']' && input_list == NULL){
          i = 0;
          printf("FAIL,%i\n",n);
      }

    /* printf("hi\n");
     llnode_print_from_head(input_list);  */
  }

 if ((input_list)==NULL && i== 1){
 printf("PASS\n");
 }

 return 0;
}