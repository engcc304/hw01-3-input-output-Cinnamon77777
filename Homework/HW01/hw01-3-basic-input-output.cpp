/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/
#include <stdio.h>
int main(){
    char Fname[50];
    char Lname[50];
    printf("Enter your First Name: ");
    scanf("%s",Fname);
    printf("Enter your Last Name");
    scanf("%s",Lname);
    printf("%s %ss TC,RMUTL,Chiang Mai,Thailand",Fname,Lname);
    return 0 ;
}

