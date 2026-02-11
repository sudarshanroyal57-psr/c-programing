#include <stdio.h>
int main(){
int period;
printf("enter the period number to know the class:");
scanf("%d",&period);
switch(period){
case 1:
    period=1;
    printf("subject:cp\ntime:7:15-8:15");
        break;
        case 2:
            period=2;
            printf("subject:co\ntime:8:15-9:15");
            break;
            case 3:
                period=3;
                printf("subject:cmat\ntime:10:00-11:00");
                break;
            case 4:
                printf("subject :physics\ntime:11:00-01:00");
                break;
            default:
                printf("invalid class");
                break;

}
return 0;

}
