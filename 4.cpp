#include <stdio.h>

int main(void){

	int i=0;
	double min=0, max=0, tmp=0, sum=0, avg=0, time=0;

	while(1){
		scanf("%lf", &tmp);

		if((tmp<=0) || (tmp>300)){
			printf("Zemrel jsi\n");
			break;
		}

/*priklad B*/   if(tmp > 180) printf("Uklidni se!\n");

		sum += tmp;

		if(i==0) min=max=tmp;
		if(min > tmp) min = tmp;
		if(max < tmp) max = tmp;

		i++;

		avg = (sum/i);

/*priklad C*/	time += (60/tmp);

		if(time >= 10){

			printf("[MIN: %.2lf|MAX: %.2lf|AVG: %.2lf]\n", min, max, avg);
			min=500;
			max=-1;
			avg=time=i=sum=0;
		}
	}



	return 0;
}
