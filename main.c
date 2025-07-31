#include <stdio.h>
#include <stdlib.h>

int main()
{    char str[] = "HKKLL";
int flage;
for(int i=0;i<5;i++){
    printf("%c",str[i]);
}
for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
            if(str[i]==str[j])
            {
       printf("\nFirst repeating character is :%c",str[i]);
  return 0;
  printf("hdbbj");
            }
}
}

    return 0;
}
