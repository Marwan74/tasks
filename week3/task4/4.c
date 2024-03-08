<<<<<<< HEAD
/*Write a c code login code but use a function called login.*/
#include <stdio.h>
int login (int ID, int password){
    int id,pass;
     printf("enter your ID : ");
    scanf("%d",&id);
    if (ID == id){
        
            for (int i = 0;i<3;++i){
                 printf("enter your password: ");
                scanf("%d",&pass);
                if (pass == password ){
                    printf("welcome! \n ");
                    printf("login successfully ! ");
                break;
                }
                else{
                    printf("you are not registered \n");
                    continue;
                }

            }
            if (pass != password){
                printf("no more tries ! \n ");
            }
    }
    else printf("your ID is wrong \n");
}
   
int main(){
    int ID,password ;
    ID = 1044;
    password = 1042004;
    login(ID,password);
    return 0 ;
    
   


=======
/*Write a c code login code but use a function called login.*/
#include <stdio.h>
int login (int ID, int password){
    int id,pass;
     printf("enter your ID : ");
    scanf("%d",&id);
    if (ID == id){
        
            for (int i = 0;i<3;++i){
                 printf("enter your password: ");
                scanf("%d",&pass);
                if (pass == password ){
                    printf("welcome! \n ");
                    printf("login successfully ! ");
                break;
                }
                else{
                    printf("you are not registered \n");
                    continue;
                }

            }
            if (pass != password){
                printf("no more tries ! \n ");
            }
    }
    else printf("your ID is wrong \n");
}
   
int main(){
    int ID,password ;
    ID = 1044;
    password = 1042004;
    login(ID,password);
    return 0 ;
    
   


>>>>>>> 5cf71c25eee0c32fe2e8c02d8ef3d153cd705752
}