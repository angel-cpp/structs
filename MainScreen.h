#include <stdio.h>
#include <stdlib.h>

char * structs[] = {
    "(01)  --  Node List"
};

void render_main_screen()
{   
    system("cls");
    printf("******************************************\n");
    printf("\nWelcome to the Angel's Data Structures \n");
    printf("Choose a data structure to play around\n\n");

    int len = sizeof(structs) / sizeof(char *);
    for(int i=0; i < len; i++) {
        printf("%s\n", structs[0]);
    }

    printf("\n");
    printf("******************************************\n");
    system("pause>0");
}