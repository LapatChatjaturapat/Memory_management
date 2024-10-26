#include<stdio.h>
#include<stdlib.h>
int global_var_1;
int global_var_2;
int global_var_3;

void func3(){
    printf("In func3:\n");
    int *malloc_var_3=malloc(sizeof(int));
    int func_var_3;
    int func_var_4;
    printf("Address of global_var_1 = %p\n",&global_var_1);
    printf("Address of global_var_2 = %p\n",&global_var_2);
    printf("Address of global_var_3 = %p\n",&global_var_3);
    printf("Address of func_var_3 = %p\n",&func_var_3);
    printf("Address of func_var_4 = %p\n",&func_var_4);
    printf("Address of malloc_var_3 = %p\n",malloc_var_3);
    printf("\n");

    free(malloc_var_3);

    return;
}

void func2(){
    printf("In func2:\n");
    int func_var_2;
    printf("Address of global_var_1 = %p\n",&global_var_1);
    printf("Address of global_var_2 = %p\n",&global_var_2);
    printf("Address of global_var_3 = %p\n",&global_var_3);
    printf("Address of func_var_2 = %p\n",&func_var_2);
    printf("\n");
    func3();

    return;
}

void func1(){
    printf("In func1:\n");
    int func_var_1;
    printf("Address of global_var_1 = %p\n",&global_var_1);
    printf("Address of global_var_2 = %p\n",&global_var_2);
    printf("Address of global_var_3 = %p\n",&global_var_3);
    printf("Address of func_var_1 = %p\n",&func_var_1);
    printf("\n");
    func2();

    return;
}

int main(){
    printf("In main:\n");
    int *malloc_var_1=malloc(sizeof(int));
    int *malloc_var_2=malloc(sizeof(int) );
    printf("Address of global_var_1 = %p\n",&global_var_1);
    printf("Address of global_var_2 = %p\n",&global_var_2);
    printf("Address of global_var_3 = %p\n",&global_var_3);
    printf("Address of malloc_var_1 = %p\n",malloc_var_1);
    printf("Address of malloc_var_2 = %p\n",malloc_var_2);
    printf("\n");
    func1();

    free(malloc_var_1);
    free(malloc_var_2);

    return 0;
}