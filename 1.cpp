#include <stdio.h>

int main(void){

        double i=0, HR=0, AP=0, halotan=0, halotanTMP=0, time=0;

        printf("Zadavej hodnoty po dvou:\n");

        while(1){
                scanf("%lf", &HR);
                scanf("%lf", &AP);

                printf("Zadal jsi HR: %lf a AP: %lf\n", HR, AP );

                if((HR == 0) && (AP > 1000)){
                        printf("PROGRAM UKONCEN\n");
                        break;
                }


/*priklad A*/   /*if (AP < 12) halotan += 4;

                if (AP >= 12 && AP <= 66) halotan += 2;

                if (AP >= 67 && AP <= 97) halotan += 1;

                if (AP > 97) halotan += 0;

                printf("Celkem podano halotanu: %d\n", halotan );

!!!!!!!!!!!!!!!!ODEBER hvezdicka lomeno pred if a pod timhle koncem aby fungoval
                priklad A!!!!!!!!!!!!!

                */

/*priklad B*/   if (AP < 12) halotanTMP = 4;

                if (AP >= 12 && AP <= 66) halotanTMP = 2;

                if (AP >= 67 && AP <= 97) halotanTMP = 1;

                if (AP > 97) halotanTMP = 0;

                if (HR < 100) halotanTMP = 0;

                if (HR >= 100 && HR <= 145) {
                  if (halotanTMP >= 1) halotanTMP -= 1;
                }

                if (HR > 540) {
                  if (halotanTMP < 4) halotanTMP += 1;
                }

                halotan += halotanTMP;

                printf("Celkem podano halotanu: %lf a aktualne: %lf\n", halotan, halotanTMP);

                i++;

                halotanTMP = 0;



/*priklad C*/   time += (60/HR);

                printf("TIME: %lf\n",time);

                if(time >= 60 && (halotan / i) == 4){               //i mi pocita pocet cyklu tzn celkovy halotan=40, pocet cyklu 10 => 40/10=0 => vzdy byly 4 kapky

                        printf("Preslehla si potkana, kontroluj ho!\n");

                        time=i=0;
                }
        }



        return 0;
}
