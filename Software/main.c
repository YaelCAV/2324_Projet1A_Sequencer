
#include <stdio.h>
#include <main.h>
#include <classes.h>
#include <math.h>

#define PCA9635_ADDRESS 0x60 // adresse A0 A1 A2=0
#define PCA9635_ADDRESS 0x61 // adresse A0=3.3V A1=A2=0 cf docu



//Initialisation des structures (StepInit() eventuellement)
//Voice
struct Voice voice1= {0,0,0,0,0};
struct Voice voice2= {0,0,0,0,0};
struct Voice voice3= {0,0,0,0,0};

//Step
struct step1 {int state;int note;int octave;struct Voice voice1; struct Voice voice2; struct Voice voice3;};
struct step2 {int state;int note;int octave;struct Voice voice1; struct Voice voice2; struct Voice voice3;};
struct step3 {int state;int note;int octave;struct Voice voice1; struct Voice voice2; struct Voice voice3;};
struct step4 {int state;int note;int octave;struct Voice voice1; struct Voice voice2; struct Voice voice3;};
struct step5 {int state;int note;int octave;struct Voice voice1; struct Voice voice2; struct Voice voice3;};
struct step6 {int state;int note;int octave;struct Voice voice1; struct Voice voice2; struct Voice voice3;};
struct step7 {int state;int note;int octave;struct Voice voice1; struct Voice voice2; struct Voice voice3;};
struct step8 {int state;int note;int octave;struct Voice voice1; struct Voice voice2; struct Voice voice3;};
struct step9 {int state;int note;int octave;struct Voice voice1; struct Voice voice2; struct Voice voice3;};
struct step10 {int state;int note;int octave;struct Voice voice1; struct Voice voice2; struct Voice voice3;};
struct step11 {int state;int note;int octave;struct Voice voice1; struct Voice voice2; struct Voice voice3;};
struct step12 {int state;int note;int octave;struct Voice voice1; struct Voice voice2; struct Voice voice3;};
struct step13 {int state;int note;int octave;struct Voice voice1; struct Voice voice2; struct Voice voice3;};
struct step14 {int state;int note;int octave;struct Voice voice1; struct Voice voice2; struct Voice voice3;};
struct step15 {int state;int note;int octave;struct Voice voice1; struct Voice voice2; struct Voice voice3;};
struct step16 {int state;int note;int octave;struct Voice voice1; struct Voice voice2; struct Voice voice3;};

struct Step step1={0,0,0,{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
struct Step step2={0,0,0,{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
struct Step step3={0,0,0,{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
struct Step step4={0,0,0,{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
struct Step step5={0,0,0,{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
struct Step step6={0,0,0,{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
struct Step step7={0,0,0,{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
struct Step step8={0,0,0,{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
struct Step step9={0,0,0,{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
struct Step step10={0,0,0,{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
struct Step step11={0,0,0,{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
struct Step step12={0,0,0,{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
struct Step step13={0,0,0,{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
struct Step step14={0,0,0,{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
struct Step step15={0,0,0,{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
struct Step step16={0,0,0,{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};




//Filter
//Paramètres initiaux
struct filter {int mode;int fres;int res;};

struct Filter filter={0,0,0};
//LED
//Paramètres initiaux de LED
struct led1 {int IDred;int IDgreen;int red;int green;int dimm;};
struct led2 {int IDred;int IDgreen;int red;int green;int dimm;};
struct led3 {int IDred;int IDgreen;int red;int green;int dimm;};
struct led4 {int IDred;int IDgreen;int red;int green;int dimm;};
struct led5 {int IDred;int IDgreen;int red;int green;int dimm;};
struct led6 {int IDred;int IDgreen;int red;int green;int dimm;};
struct led7 {int IDred;int IDgreen;int red;int green;int dimm;};
struct led8 {int IDred;int IDgreen;int red;int green;int dimm;};
struct led9 {int IDred;int IDgreen;int red;int green;int dimm;};
struct led10 {int IDred;int IDgreen;int red;int green;int dimm;};
struct led11 {int IDred;int IDgreen;int red;int green;int dimm;};
struct led12 {int IDred;int IDgreen;int red;int green;int dimm;};
struct led13 {int IDred;int IDgreen;int red;int green;int dimm;};
struct led14 {int IDred;int IDgreen;int red;int green;int dimm;};
struct led15 {int IDred;int IDgreen;int red;int green;int dimm;};
struct led16 {int IDred;int IDgreen;int red;int green;int dimm;};

struct Led led1={0,0,0,0,0};
struct Led led2={0,0,0,0,0};
struct Led led3={0,0,0,0,0};
struct Led led4={0,0,0,0,0};
struct Led led5={0,0,0,0,0};
struct Led led6={0,0,0,0,0};
struct Led led7={0,0,0,0,0};
struct Led led8={0,0,0,0,0};
struct Led led9={0,0,0,0,0};
struct Led led10={0,0,0,0,0};
struct Led led11={0,0,0,0,0};
struct Led led12={0,0,0,0,0};
struct Led led13={0,0,0,0,0};
struct Led led14={0,0,0,0,0};
struct Led led15={0,0,0,0,0};
struct Led led16={0,0,0,0,0};


//Convertisseur Décimal->Binaire
int decimal_To_binary(int n, int binaryArray[8])    // binaryArray[N] où N=8 ou N=16 pour ...
{
	if (n>=256)
	{
		return 0;
	}
	for (int i = 7; i >= 0; i--)
	{
		if (n>=pow(2,i))
		{
			binaryArray[i] = 1 ;
		}
		else
		{
			binaryArray[i]=0 ;
		}
	}
	return binaryArray;
}




// Code I2C
int main(void)
{
	HAL_Init();
	MX_GPIO_Init();
	MX_I2C1_Init();
	uint8_t button_state_a=0;
	uint8_t button_state_b=0;
	HAL_IncTick();
	I2C_HandleTypeDef hi2c1;
	/*
	struct Sequence {struct Step note1 ;struct Step note2 ;struct Step note3 ;struct Step note4; struct Step note5 ;struct Step note6 ;struct Step note7 ;struct Step note8 ;struct Step note9 ;struct Step note10 ;struct Step note11 ;struct Step note12 ;struct Step note13 ;struct Step note14 ;struct Step note15 ;struct Step note16;};
	struct Sequence sequence={ step1 , step2 , step3 , step4 , step5 , step6 , step7 , step8 , step9 , step10 , step11 , step12 , step13 , step14 , step15 , step16};
	*/
	while(1){
		HAL_I2C_Master_Receive(&hi2c1, (0x60<<1), &button_state_a , 1 , HAL_MAX_DELAY);
		HAL_I2C_Master_Receive(&hi2c1, (0x61<<1), &button_state_b , 1 , HAL_MAX_DELAY);

		for (int i=0; i<8; i++)
		{
			if ((button_state_a & (1<<i))==1)
			{
				int debut;
				int fin;
				int duree_appui;
				debut=HAL_GetTick();    // en ms
				while (button_state_a==1)
				{
					fin=HAL_GetTick();   // en ms
					duree_appui= fin-debut;
					if (duree_appui>=1000)
					{
						editstep(i);
					}
				}
				if (duree_appui<1000)
				{
					if (i==0){
						step1.state=1-step1.state;
					}
					if (i==1){
						step2.state=1-step2.state;
					}
					if (i==2){
						step3.state=1-step3.state;
					}
					if (i==3){
						step4.state=1-step4.state;
					}
					if (i==4){
						step5.state=1-step5.state;
					}
					if (i==5){
						step6.state=1-step6.state;
					}
					if (i==6){
						step7.state=1-step7.state;
					}
					if (i==7){
						step8.state=1-step8.state;
					}


				}
			}
		}

		for (int i=0; i<8; i++)
		{
					if ((button_state_b & (1<<i))==1)
					{
						int debut;
						int fin;
						int duree_appui;
						debut=HAL_GetTick();    // en ms
						while (button_state_b==1)
						{
							fin=HAL_GetTick();   // en ms
							duree_appui= fin-debut;
							if (duree_appui>=1000)
							{
								editstep(i+8);
							}
						}
						if (duree_appui<1000)
						{
							if (i==0){
								step9.state=1-step9.state;
							}
							if (i==1){
								step10.state=1-step10.state;
							}
							if (i==2){
								step11.state=1-step11.state;
							}
							if (i==3){
								step12.state=1-step12.state;
							}
							if (i==4){
								step13.state=1-step13.state;
							}
							if (i==5){
								step14.state=1-step14.state;
							}
							if (i==6){
								step15.state=1-step15.state;
							}
							if (i==7){
								step16.state=1-step16.state;
							}

						}
					}
		}
	}
}



//Jouer une note
//pitch(a,b) où a est compris entre 1 et 12 (note) et b compris entre 0 et 7 (octave)

int editstep(int i){
	ADC_HandleTypeDef hadc1;

	//Recuperation des valeurs des potentiometres de modification de pitch et param
//	voice1.voiceMode=HAL_   ;
//	voice1.pw=HAL_  ;
//	voice1.attack=HAL_   ;
//	voice1.decay=HAL_   ;
//	voice1.release=HAL_   ;
	int a;
	int b;
	a=HAL_ADC_GetValue(&hadc1)  ; //note
	HAL_ADC_PollForConversion(&hadc1, HAL_MAX_DELAY);
	b=HAL_ADC_GetValue(&hadc1) ;  //octave

	//Enregistrement du pitch
	if (i==0){
		step1.note=a;
		step1.octave=b;
		step1.voice1=voice1;
	}
	if (i==1){
		step2.note=a;
		step2.octave=b;
		step2.voice1=voice1;
	}
	if (i==2){
		step3.note=a;
		step3.octave=b;
		step3.voice1=voice1;
	}
	if (i==3){
		step4.note=a;
		step4.octave=b;
		step4.voice1=voice1;
	}
	if (i==4){
		step5.note=a;
		step5.octave=b;
		step5.voice1=voice1;
	}
	if (i==5){
		step6.note=a;
		step6.octave=b;
		step6.voice1=voice1;
	}
	if (i==6){
		step7.note=a;
		step7.octave=b;
		step7.voice1=voice1;
	}
	if (i==7){
		step8.note=a;
		step8.octave=b;
		step8.voice1=voice1;
	}
	if (i==8){
		step9.note=a;
		step9.octave=b;
		step9.voice1=voice1;
	}
	if (i==9){
		step10.note=a;
		step10.octave=b;
		step10.voice1=voice1;
	}
	if (i==10){
		step11.note=a;
		step11.octave=b;
		step11.voice1=voice1;
	}
	if (i==11){
		step12.note=a;
		step12.octave=b;
		step12.voice1=voice1;
	}
	if (i==12){
		step13.note=a;
		step13.octave=b;
		step13.voice1=voice1;
	}
	if (i==13){
		step14.note=a;
		step14.octave=b;
		step14.voice1=voice1;
	}
	if (i==14){
		step15.note=a;
		step15.octave=b;
		step15.voice1=voice1;
	}
	if (i==15){
		step16.note=a;
		step16.octave=b;
		step16.voice1=voice1;
	}

}
