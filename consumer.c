#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <string.h>
#include <signal.h>
#include <sys/wait.h>


#define SIZE_BUFF 10000

struct region{
    int size;
    char buffer[SIZE_BUFF];
};

int shm_fd;

int main(void)
{

	struct region *ptr;
	/* shm_opne -> Abre un objeto de memoria compartida y devuelve un descriptor de archivo*/
    shm_fd = shm_open("lab", O_RDONLY, 0666);
	if (shm_fd == -1) {
		perror("shm memory error: ");
        exit(EXIT_FAILURE);
	}
	/*mmap mapea el objeto en la memoria*/
	ptr = mmap(NULL,sizeof(struct region), PROT_READ, MAP_SHARED,shm_fd, 0);
	if (ptr == MAP_FAILED) {
		perror("Mapping failed: ");
        exit(EXIT_FAILURE);
	}
	int it=0;

	int size=0;
	while(it<3)
	{
		printf("killin process PID = %d\n",ptr->buffer[size]);
		kill(ptr->size, SIGKILL);
		size++;
		
	}
	shm_unlink("/myregion"); 
    close(shm_fd);
    return 0;
}