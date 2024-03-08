<<<<<<< HEAD
/*Write a C code defines an int initialized with 10, then print it, then define a pointer that
points to that int and change the value of the int through the pointer to be 20, then print
it again.*/
#include <stdio.h>
int main(){
    int x =10;
    int *ptr;
    ptr = &x;
     printf("no before changing: %d \n",*ptr);
    *ptr = 20;
    printf("no after changing : %d\n",*ptr);
    return 0;
=======
/*Write a C code defines an int initialized with 10, then print it, then define a pointer that
points to that int and change the value of the int through the pointer to be 20, then print
it again.*/
#include <stdio.h>
int main(){
    int x =10;
    int *ptr;
    ptr = &x;
     printf("no before changing: %d \n",*ptr);
    *ptr = 20;
    printf("no after changing : %d\n",*ptr);
    return 0;
>>>>>>> 5cf71c25eee0c32fe2e8c02d8ef3d153cd705752
}