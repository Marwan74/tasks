<<<<<<< HEAD
/*Write a C that asks the user to enter his ID and his password, if the ID is correct the
system will ask the user to enter his password up to 3 times, if he enters the password
right the system welcomes him, if the three times are incorrect, the system prints "No
more tries". The system prints "You are not registered" on every wrong try. (Login
code)*/
#include <stdio.h>
int main(){
    int ID,id,pass,password;
    id = 1044;
    pass = 1042004;
    printf("enter your ID : ");
    scanf("%d",&ID);
    if (ID == id){
        
            for (int i = 0;i<3;++i){
                 printf("enter your password: ");
                scanf("%d",&password);
                if (pass == password ){
                    printf("welcome! ");
                break;
                }
                else{
                    printf("you are not registered \n");
                    continue;
                }

            }
            if (password != pass){
                printf("no more tries ! \n ");
            }
    }
    else printf("your ID is wrong \n");

    

=======
/*Write a C that asks the user to enter his ID and his password, if the ID is correct the
system will ask the user to enter his password up to 3 times, if he enters the password
right the system welcomes him, if the three times are incorrect, the system prints "No
more tries". The system prints "You are not registered" on every wrong try. (Login
code)*/
#include <stdio.h>
int main(){
    int ID,id,pass,password;
    id = 1044;
    pass = 1042004;
    printf("enter your ID : ");
    scanf("%d",&ID);
    if (ID == id){
        
            for (int i = 0;i<3;++i){
                 printf("enter your password: ");
                scanf("%d",&password);
                if (pass == password ){
                    printf("welcome! ");
                break;
                }
                else{
                    printf("you are not registered \n");
                    continue;
                }

            }
            if (password != pass){
                printf("no more tries ! \n ");
            }
    }
    else printf("your ID is wrong \n");

    

>>>>>>> 5cf71c25eee0c32fe2e8c02d8ef3d153cd705752
}