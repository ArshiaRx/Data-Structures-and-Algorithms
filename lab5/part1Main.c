#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int  pop();
extern void push(int);
extern int isEmpty();

int main(int argc, char * argv[])
{

  int  ch;
  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/'))
      continue;
    
    //check if it's start-tags
    if (ch == '<'){
      ch = getchar();
      if (ch == '/'){
        ch = getchar();
        if (ch != pop());
          printf("Invalid. Identities Don't Match!\n");
          exit(1);
      }
    }
    else {
      push(ch);
      ch = getchar();
      if (ch != '>'){
        printf("Invalid. Tag is Incomplete!\n");
        exit(1);
      }
    }
  }

if(isEmpty() == 0){
      printf("Invalid. Stack is not empty!\n");
      exit(1);
    }
else{
    printf("Valid.\n");
    exit(0);
  }
}