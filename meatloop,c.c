#include <stdio.h>
 int main() {

char *meat[20]= {"mutton","chicken","duck","pork"};
for(int i =0; i <=5; ++i ){
    if( meat[i] == "chicken"){
        printf("I love Chicken \n");

    continue;
    } else {
        printf("i eat %s\n",meat[i]);
    }

    if(meat[i] == "pork") {
    printf("I crave pork \n");
    break;
    }
}
    return 0;
}
