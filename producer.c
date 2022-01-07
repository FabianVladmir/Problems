#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <unistd.h>
#include <time.h>

#define SIZE_BUFF 10000

struct region {
    int size;
    char buffer[SIZE_BUFF];
};

int shm_fd;

int main(void){

    struct region *ptr;
    //Create shared memory
    /* shm_opne -> Abre un objeto de memoria compartida y devuelve un descriptor de archivo*/
    shm_fd = shm_open("lab", O_CREAT | O_RDWR,  S_IRUSR | S_IWUSR);
    if (shm_fd < 0){
        perror("shm memory error: ");
        exit(EXIT_FAILURE);
    }
   
    //ftruncate(shm_fd, SIZE_BUFF*sizeof(struct region));
    /* ftruncate establece la longitud del objt de memoria*/
    if (ftruncate(shm_fd, sizeof(struct region)) == -1){
        perror("Truncation failed: ");
        exit(EXIT_FAILURE);
    }

    int size = 0;
    int cont=0;
    while (cont < 3){
        pid_t pid = fork();

        if(pid > 0){
            printf("Father->ppid = %d\n",getppid());
            struct timespec time1,time2;
            clock_gettime(CLOCK_REALTIME,&time1);
            time_t iTotal_sec=time(0);
            struct tm *time= localtime((const time_t*)&iTotal_sec);
            char tiempo[8];
            strftime(tiempo, 100, "%H:%M:%S", time);
            printf("[%s] ",tiempo);			
			sleep(2);
			clock_gettime(CLOCK_REALTIME, &time2);
			if (time2.tv_nsec < time1.tv_nsec) {
				time2.tv_nsec += 1000000000;
				time2.tv_sec--;
			}

			printf("P(%d): creation proccess  %d (%s)\n",getppid(),getpid(),tiempo);

            ptr = mmap(NULL, sizeof(struct region), PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd, 0);
            if (ptr == MAP_FAILED)
                printf("Error\n");
        }

        else if (pid == 0)
        {
            printf("Son->pid = %d\n",getpid());
            struct timespec time1,time2;
            clock_gettime(CLOCK_REALTIME,&time1);
            time_t iTotal_sec=time(0);
            struct tm *time= localtime((const time_t*)&iTotal_sec);
            char tiempo[8];
            strftime(tiempo, 100, "%H:%M:%S", time);            
			sleep(2);
			clock_gettime(CLOCK_REALTIME, &time2);
			if (time2.tv_nsec < time1.tv_nsec) {
				time2.tv_nsec += 1000000000;
				time2.tv_sec--;
			}

			//printf("[HIJO] El proceso hijo se creo con PID = %d\n",getpid());
            /*mmap mapea el objeto en la memoria*/
            ptr = mmap(NULL,sizeof(struct region), PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd, 0);
            if (ptr == MAP_FAILED)
                printf("Error\n");            

            ptr->buffer[size]=getpid();
            size++;
            
        }

        else
        {
            printf("Error: fork\n");
        }
        
    /*shm_unlink -> elimina el objeto memoria compartida , opcionalmente elemina un archivo 
    mapeado en la memoria con una llamada a la funcion desvinculacion*/
    shm_unlink("/myregion"); 
    close(shm_fd);
    return 0;
}
