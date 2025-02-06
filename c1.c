#include <stdio.h>
int main()
{
    int mark;
    printf("enter mark:");
    scanf("%d/n",&mark);
if(mark>=90){
    printf("grade A");
}
else if(mark<90 && mark >=80){
    printf("grade B");
}
else if(mark<80  && mark >=70){
    printf("grade C");
}
else if(mark<70 && mark>=60){
    printf("grade D");
}
else if(mark<60 && mark>=50){
    printf("grade E");
}
else{
    printf("grade F");
}
return 0;
}


