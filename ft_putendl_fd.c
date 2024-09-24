#include <unistd.h>
#include <fcntl.h> 

void ft_putendl_fd(char *s, int fd) {
    if (!s)
        return;
    
    while (*s) {
        write(fd, s, 1);
        s++;
    }
    write(fd, "\n", 1);  // Escribir el salto de línea
}
int main() {
    // Abrir el archivo "output.txt" en modo de escritura (crear si no existe)
    int fd = open("output.txt", O_WRONLY | O_CREAT, 0644);

    if (fd < 0) {
        // Si no se pudo abrir el archivo, imprimir un error y salir
        write(1, "Error al abrir el archivo\n", 26);
        return 1;
    }

    // Llamar a ft_putendl_fd para escribir en el archivo
    ft_putendl_fd("Hola mundo", fd);

    // Cerrar el archivo
    close(fd);

    return 0;
}