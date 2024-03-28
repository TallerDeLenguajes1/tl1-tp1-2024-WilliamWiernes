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