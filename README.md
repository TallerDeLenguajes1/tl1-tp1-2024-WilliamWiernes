# Trabajo Práctico N° 1
### :question: 2.2a.- Investigar el archivo .gitignore ¿Por qué es conveniente incluirlo? ¿Cuándo se debe hacer? ¿Cómo configuraría el archivo .gitignore?   

:black_nib: El `.gitignore` es un archivo de texto en donde se especifican qué archivos o directorios **GIT** tiene que ignorar a la hora de realizar un _commit_.

Es conveniente incluirlo debido a que nos permite:
- Evitar archivos que no deseamos sean subidos a nuestro repositorio remoto, como archivos temporales o que contengan información sensible.
- Mantener el repositorio limpio.
- Ayudar a optimizar el flujo de trabajo, sobre todo cuando trabajamos en equipo.
- Mejorar la velocidad de GIT, menos archivos que traquear, añadir, comitear, pushear.

En cuanto a cuándo se debe realizar, lo mejor es hacerlo al comenzar cualquier proyecto, permitiendonos evitar problemas a futuro, debido a que los archivos que ya están siendo traqueados por **GIT** no se ven afectados. Sin embargo no exiten problemas si decimos agregarlo más adelante, aunque hay que tener algunas consideraciones en estos casos. [CONSIDERACIONES](https://git-scm.com/docs/gitignore#_notes).

Para configurar el archivo, debemos saber que existen ciertos formatos de patrones a seguir. Por ejemplo, básicamente para ignorar un archivo _ignorado.txt_, bastaría con colocar su nombre y extensión dentro del `.gitignore`. Similar si deseamos hacerlo con un directorio, debiendo agregar su nombre junto a una barra diagonal _directorioIgnorado/_. [MAS PATRONES](https://git-scm.com/docs/gitignore#_pattern_format).

### :question: 2.3c.- Revise los archivos subidos en su repositorio de github. ¿Qué archivos vé? ¿Cuál cree que no hace falta que esté?

:black_nib: Se pueden ver tres archivos: `README.md`, `tp1_1.cpp`, `tp1_1.exe`. En este caso, considero que no es necesario el archivo _ejecutable_.

### :question: 2.3g.- Si resolvió correctamente los apartados 2 y 3 del punto anterior notará que el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el punto 4? ¿Es igual a los anteriores? ¿Por qué? Responder en el archivo readme.md

:black_nib: Hay que entender que los **punteros**, son variables como cualquier otra, que se encargan de almacenar _las direcciones de memoria de otras variables_. En el apartado _2_, se pide mostrar ese valor almacenado por el puntero (el cual es la dirección de memoria de la variable "num"), y en el _3_ la dirección de memoria de la variable en sí. Por consiguiente, ambos valores mostrados por pantalla son iguales. 

En el apartado _4_ se obtiene la propia dirección de memoria del puntero, ya que, como se mencionó anteriormente, los punteros son _variables_, y ocupan un espacio en la memoria, obteniendo su propia dirección. Siendo así, al tener su propia dirección, el resultado obtenido no es igual a los anteriores.