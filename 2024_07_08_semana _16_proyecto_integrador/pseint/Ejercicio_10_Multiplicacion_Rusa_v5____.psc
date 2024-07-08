Algoritmo Multiplicacion_Rusa
	Definir m, n, mProcess, nProcess, acum Como Entero;
	
	acum = 0;
	
	Repetir
		Mostrar "Ingrese el multiplicando (M) (Entre 0-10000):";
		Leer m;
		
		Mostrar "Ingrese el multiplicador (N) (Entre 0-10000):";
		Leer n;
		
		Si (m < 0) o (n < 0) o (m > 10000) o (n > 10000) Entonces
			Mostrar "Al menos un número ingresado está fuera del rango definido o tiene decimales";
			Mostrar "Ingrese números enteros positivos dentro del rango";
		Fin Si
	Hasta Que (m >= 0) y (n >= 0) y (m <= 10000) y (n <= 10000)
	
	mProcess = m;
	nProcess = n;
	
	Repetir
		Mostrar "M: ", mProcess; 
		
		Si ((mProcess MOD 2) == 1) Entonces
			acum = acum + nProcess;
			Mostrar "N: ", nProcess, "*"; 
		SiNo
			Mostrar "N: ", nProcess; 
		Fin Si
		
		Mostrar "Acumulado: ", acum; 
		
		mProcess = trunc(mProcess/2);
		nProcess = nProcess*2;
		
		Si (mProcess==0) y (m<>0) Entonces
			Mostrar "M: ", mProcess;
			Mostrar "N: ", nProcess; 
			Mostrar "Acumulado: ", acum; 
		Fin Si
		
	Hasta Que (mProcess == 0)
	
	Mostrar "El resultado de multiplicar ", m " x ", n, " es: ", acum;
	
FinAlgoritmo
