# TC1030 RESTAURANTE TIPO IRISH PUB
Este proyecto está programado en C++, aplicando los conocimientos de la materia TC1030 para crear un sistema basado en los restaurantes tipo irish pub. Trata de un sistema donde puedes ir metiendo platillos y bebidas en el ticket de los comensales, para esto, se ocupa una consulta del inventario de los alimentos/bebidas que hay disponibles, asi como su precio, descripcion y nombre, el programa no funcionará a menos de que al inicio se añadan alimentos al inventario.

# FUNCIONALIDAD
El programa solo permite ingresar alimentos y bebidas, además de contar con un inventario que tendrá la función de almacenar alimentos y bebidas asi como su precio y demás datos.
Consta de un menú para saber que es lo que se preferirá, si pedir cover o alimentos.

# CONSIDERACIONES
El proyecto solo corre en la consola en C++ standard por lo que no hay problema en ningún sistema operativo.

# CASOS DE FALLO
+ El programa no funcionará de la manera correcta si no se ingresan alimentos al inventario de inicio.
+ Al ingresar parametros tipo string, tendrán que estar separados por guiones bajo, ya que si lo hacemos con espacio no funciona, es decir "Pancakes con fresas" tendría que ser "Pancakes_con_fresas" para que funcione.
+ No se validan opciones del menú, es decir, si el usuario pone otro numero no aceptado el programa falla.
+ Al especificar la cantidad de gramos de Vegetales, Carbohidratos y Proteina, se deben ingresar numeros enteros (ya que son aproximaciones, no datos de lleno), de otra manera colapsa el sistema.

# DOCUMENTACIÓN

Uso de la libreria <vector>
TylerMSFT. (n.d.). vector class. Microsoft Learn. https://learn.microsoft.com/en-us/cpp/standard-library/vector-class?view=msvc-170
+ <vector> se utilizó para hacer "cadenas" de variables donde se encuentran los datos de los alimentos (platillos, bebidas)

