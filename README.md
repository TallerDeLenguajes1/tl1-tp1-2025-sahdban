# tp1 taller de lenguaje 1

## ¿Por que es conveniente incluir .gitignore?

Es conveniente incluir el archivo .gitingnore ya que esta nos permite configurar que archivos queremos mantener en privado y un tercero no pueda acceder a estos asi tambien para no subir archivos innecesarios al repo final 

## ¿Cuando se debe hacer?

se debe hacer al iniciar el repo y ir actualizandolo como veamos conveniente

## ¿Cómo configurar el archivo .gitignore?

este es un archivo de texto en donde depende de lo que escribimos define que hace: 
*Ignorar archivos en especifico: 
      *.env
*ignorar carpetas completas:
      *carpeta/
*ignorar extensiones de archivo:
      **.txt

### punto 3

a- en el codigo misterioso la primera funcion toma un numero entero a traves de su dirección de memoria y voltea sus digitos de atras hacia adelante. La segunda funcion toma el numero y lo divide por 2 y la ultima funcion toma los digitos del numero los suna entre si y a este resultado los suma al numero ingresado

b- lista de errores de el codigo sin funcionar: 
Errores de Sintaxis 
Falta de librerías: El código utiliza printf y scanf sin incluir la cabecera #include <stdio.h>

Punto y coma ausente en suma: La línea int suma = valor1 + valor2 termina sin el punto y coma (;) obligatorio en C.

Punto y coma ausente en return: La instrucción return 0 al final del main también carece de punto y coma (;).

Errores de Lógica y Memoria (Provocan fallos o resultados incorrectos)
Scanf: En la línea scanf("%d", valor1); falta el operador de dirección &.

Paso por valor (No modifica el original): La función duplicar_numero(int numero) recibe una copia del valor. El cambio numero = numero * 2 ocurre solo dentro de la función. 

        