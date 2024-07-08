Algoritmo Multiplicacion_Rusa
	Definir multiplicandoM, multiplicadorN, procesoM, procesoN, acumulador,cantidadDiv, i Como Entero;
	
	acumulador = 0;
	cantidadDiv = 0;
	
	Mostrar "Ingrese el multiplicando (M) (Entre 0-10000):";
	Leer multiplicandoM;
	
	Mostrar "Ingrese el multiplicador (N) (Entre 0-10000):";
	Leer multiplicadorN;
	
	Mientras (multiplicandoM < 0) o (multiplicadorN < 0) o (multiplicandoM > 10000) o (multiplicadorN > 10000) Hacer
		Mostrar "Al menos un número ingresado está fuera del rango definido o tiene decimales";
		Mostrar "Ingrese números enteros positivos dentro del rango";
		
		Mostrar "Ingrese el multiplicando (M) (Entre 0-10000):";
		Leer multiplicandoM;
		
		Mostrar "Ingrese el multiplicador (N) (Entre 0-10000):";
		Leer multiplicadorN;
	Fin Mientras
	
	procesoM = multiplicandoM;
	procesoN = multiplicadorN;

	Mientras (procesoM > 0) Hacer
		cantidadDiv = cantidadDiv + 1;
		procesoM = trunc(procesoM/2);
	Fin Mientras
	
	procesoM = multiplicandoM;
	
	Para i=0 Hasta cantidadDiv Con Paso 1 Hacer
		Mostrar "M: ", procesoM; 
		
		Si ((procesoM MOD 2) == 1) Entonces
			acumulador = acumulador + procesoN;
			Mostrar "N: ", procesoN, "*"; 
		SiNo
			Mostrar "N: ", procesoN; 
		Fin Si
		
		Mostrar "Acumulado: ", acumulador; 
		
		procesoM = trunc(procesoM/2);
		procesoN = procesoN*2;
		
	Fin Para

	Mostrar "El resultado de multiplicar ", multiplicandoM " x ", multiplicadorN, " es: ", acumulador;
	
FinAlgoritmo
