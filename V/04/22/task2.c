#include <stdio.h>
#include <stdlib.h>

int main()
{
    char in[16];
    int out[101];
    int i,l;

    out[0]=1;
    for(i=1;!feof(stdin);i++){
        scanf("%s",in);
        if(strcmp(in, "button_clicked")==0){
            if(out[i-1]==1)
                out[i]=4;
            if(out[i-1]==2)
                out[i]=3;
            if(out[i-1]==3)
                out[i]=5;
            if(out[i-1]==4)
                out[i]=6;
            if(out[i-1]==5)
                out[i]=4;
            if(out[i-1]==6)
                out[i]=3;
        }
        if(strcmp(in, "cycle_complete")==0){
            if(out[i-1]==3)
                out[i]=1;
            if(out[i-1]==4)
                out[i]=2;
        }

    }
    l=strlen(out);
    for(i=0;i<l-1;i++){
        if(out[i]==1)
            printf("\nCLOSED");
        if(out[i]==2)
            printf("\nOPEN");
        if(out[i]==3)
            printf("\nCLOSING");
        if(out[i]==4)
            printf("\nOPENING");
        if(out[i]==5)
            printf("\nSTOPPED_WHILE_CLOSING");
        if(out[i]==6)
            printf("\nSTOPPED_WHILE_OPENING");
    }


    return 420;
}
