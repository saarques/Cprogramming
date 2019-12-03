#include <stdio.h>
#include <math.h>


float result[2];

void menu_start(){

	//printing menu
	printf("\n\t************ WELCOME ************\n");
	printf("\t1. Farm Machinery, Belt Conveyor\n");
	printf("\t2. Saw Mills, Paper Mills\n");
	printf("\t3. Other\n");

}

void menu_load(){
	//printing menu
	printf("\n\t************ Type of Load ************\n");
	printf("\t1. Centrifugal Pump, Fan, Light machine tool, Conveyors.\n");
	printf("\t2. Heavy duty fan, Blower, Compressor, Reciprocating Pump, Line shaft, Heavy duty Machine.\n");
	printf("\t3. Vacuum Pump, Rolling Mills, Hammers, Grinders \n");
	printf("\t4. Others\n");
}

void selection_of_belt(float Power, float corrected_belt_rating){
	int i= 0, j = 0, standard_width[4][10] = {{25, 40, 50, 63, 76, 0, 0, 0, 0, 0}, 
								{40, 44, 50, 63, 76, 90, 100, 112, 125, 152},
								{76, 100, 112, 125, 152, 0, 0, 0, 0, 0},
								{112, 125, 152, 180, 200, 0, 0, 0, 0, 0}};

	float minimum, score[4], margin[4], width_of_belt[4], select_belt;
	select_belt = Power*1.0/corrected_belt_rating;
	for(i = 0; i<4; i++)
		width_of_belt[i] = select_belt/(i+3);

	for(i = 0; i < 4 ; i++){
		for(j=0; j < 10; j++){
			if(width_of_belt[i] == standard_width[i][j]){
				result[0] = standard_width[i][j];
				result[1] = i+3;
			}
			else if((width_of_belt[i]>standard_width[i][j]) && (width_of_belt[i]<standard_width[i][j+1])){
				if((width_of_belt[i]-standard_width[i][j]) < (standard_width[i][j+1]-width_of_belt[i]))
					score[i] = standard_width[i][j];
				else
					score[i] = standard_width[i][j+1];
			}
		}
	}
	for(i=0; i<4; i++){
		if(width_of_belt[i] > score[i])
			margin[i] = width_of_belt[i] - score[i];
		else
			margin[i] = score[i] - width_of_belt[i];
	}
	minimum = margin[0];
	for(i=0; i<4; i++){
		if(minimum > margin[i]){
			minimum = margin[i];
			j=i;
		}
	}
	result[0] = score[j];
	result[1] = j+3;
}


float arc_factor(double angle){

	int angle_of_contact[9] = {120, 130, 140, 150, 160, 170, 180, 190, 200};
	float x1, y1, x2, y2, arc_of_contact_factor[9] = {1.33, 1.26, 1.19, 1.13, 1.08, 1.04, 1.00, 0.97, 0.94};

	for(int i= 0; i<8; i++){
		if((angle>angle_of_contact[i]) && (angle<angle_of_contact[i+1])){
			y1 = angle_of_contact[i];
			y2 = angle_of_contact[i+1];
			x1 = arc_of_contact_factor[i];
			x2 = arc_of_contact_factor[i+1];
		}
	}

	return ((x2-x1)*(angle-y1)/(y2-y1)) + x1;
}
int main(){
	int choice, N1, N2, i = 0;
	float P, C, velocity, transmission_factor, dia_lp, dia_sp, factor_A, angle_of_contact, factor_arc, corrected_belt_rating, length_of_belt;
	menu_start();
	printf("\tEnter your choice: ");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
				printf("\t'You should use Fabric Belt.'\n");
				break;
		case 2:
				printf("\t'You should use Rubber Belt.'\n");
				break;
		case 3:
				printf("\t'You should use Leather Belt.'\n");
				break;
	}

	// USER INPUT
	printf("Enter value for Speed of Driving Pulley(in rpm): ");
	scanf("%d", &N1);
	printf("\n");
	printf("Enter value for Speed of Driven Pulley(in rpm): ");
	scanf("%d", &N2);
	printf("\n");
	printf("Enter value for Power of Motor(in kW): ");
	scanf("%f", &P);
	printf("\n");
	printf("Enter value for Space Available(in mm): ");
	scanf("%f", &C);
	printf("\n");
	printf("\tChoose Transmission Type:\n");
	printf("\t1. HI-SPEED.\n");
	printf("\t2. FORT.\n");
	scanf("\tChoose one: %d\n", &choice);
	// printf("\n");


	switch(choice){
		case 1: 
				transmission_factor = 0.0118;
				break;
		case 2:
				transmission_factor = 0.0147;
				break;
		default:
				transmission_factor = 0.0118;
				break;
	}
	dia_sp = 343774.67/N1;
	int standard_dia[34] = {40, 45, 50, 56, 63, 71, 80, 90, 100, 112, 125, 160, 180, 200, 224, 250, 280, 
		315, 355, 400, 450, 500, 560, 630, 710, 800, 900, 1000, 1120, 1250, 1400, 1600, 1800, 2000};
	for(i=0;i<33;i++){
		if((standard_dia[i]<dia_sp) && (standard_dia[i+1]>dia_sp)){
			dia_sp = standard_dia[i+1];
			break;
		}
	if(i==32)
		printf("Standard Pulley not available.\n");
	}

	velocity = (22*N1*dia_sp)/(7*60*1000);
	// printf("Velocity %f\n", velocity);

	menu_load();
	printf("Enter Choice: ");
	scanf("%d\n\n\n", &choice);
	switch(choice){
		case 1:
				factor_A = 1.2;
				break;
		case 2:
				factor_A = 1.3;
				break;
		case 3:
				factor_A = 1.5;
				break;
		case 4:
				factor_A = 1.0;
				break;
	}
	P = factor_A*P;
	// printf("Power %f\n", P);
	dia_lp = N1*dia_sp/N2;
	printf("****************************\n");
	printf("Designing Specifications.\n\nSmall Pulley diameter %f mm\n", dia_sp);
	printf("Large Pulley diameter: %f mm\n", dia_lp);
	double ans;
	ans= (dia_lp-dia_sp)/(2*C);
	angle_of_contact = 180 - 2*(180*7/22)*asin(ans);
	// printf("Angle of c: %lf\n", (double)angle_of_contact);

	factor_arc = arc_factor(angle_of_contact);
	P = factor_arc*P;
	// printf("Power updated %f\n", P);

	corrected_belt_rating = (transmission_factor*velocity)/(5.08);
	selection_of_belt(P, corrected_belt_rating);

	printf("Width of Belt : %f mm\n No. of Plies: %f\n", result[0], result[1]);
	length_of_belt = 2*C*1.0 + ( (11.0/7) * (dia_lp+dia_sp) ) + ( ( (dia_lp-dia_sp) * (dia_lp-dia_sp) * (1.0) ) / (4*C) );
	printf("Length of belt: %f mm\n*********************************", length_of_belt);
	return 0;
}