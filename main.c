#include <stdio.h>
int numxhoras,x,rep; //%d,%i
float acumulador,vhoras, vventas,y,z,m, total,w,salario;
float horasextras();
float comisiones();
int main(void) {
 do {
printf("Numero en horas trabajadas\n");
scanf("%d",&numxhoras);
printf("Numero de valor por horas\n");
scanf("%f",&vhoras);
printf("Ingrese valor en ventas\n");
scanf("%f",&vventas);
  printf("Numero en horas trabajadas = %d \n", numxhoras);
  printf("Valor por horas = %.2f \n", vhoras);
  printf("Valor en ventas=  %.2f\n", vventas);
  printf("--------------RESUMEN DE SALARIO MENSUAL DEL EMPLEADO--------\n\n");
  horasextras();
  comisiones();
  total =y+(40*vhoras);
  w=total*0.0945;
  salario=total-w+z;
  acumulador += salario;
  printf("SALARIO TOTAL DE ESTE MES =  %.2f\n", salario);
  printf("Quiere seguir intentando\n1.-Seguir\n2.-Salir\n");
  scanf("%d",&rep);
  } while (rep ==1);
  printf("SALARIO TOTAL DE TODOS LOS EMPLEADOS =  %.2f\n", acumulador);
  return 0;
}
//---------------HORAS EXTRAS--------------------------
float horasextras() {
 x=numxhoras-40;  
  if (x>=1) {
  if(x<=10){
    y=vhoras*1.1*x;
    printf("Numero de horas extras  trabajadas 0.1 = %.2f \n", y);
  }
  else if(x<=15){
    y=vhoras*1.15*x;
    printf("Numero de horas extras horas trabajadas 0.15 = %.2f \n", y);
    }
  else{
    y=vhoras*1.2*x;
    printf("Numero de horas extras horas trabajadas 0.20 = %.2f \n", y);
  }
  } 
  else {
    m=numxhoras*vhoras;
    printf("Horas trabajadas (Sin horas extras) = %.2f \n", m);
  }
  }    
//--------COMISIONES---------------
float comisiones() {
  if(vventas<=800) {
    z=vventas*0.02;
    printf("BONOS 2% = %.2f \n", z);
  }
  else if (vventas<=1500){
    z=vventas*0.04;
    printf("BONOS 4 % = %.2f \n", z);
  }
  else if (vventas<=3000){
    z=vventas*0.06;
    printf("BONOS 6% = %.2f \n", z);
  }
  else {
     z=vventas*0.08;
      printf("BONOS 8% = %.2f \n", z);
        }
}
