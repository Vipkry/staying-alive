#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "mpi.h"

int main(int argc, char** argv)    {
    MPI_Init (&argc, &argv);
    int comm_rank = 0;
    int comm_size = 0;

    MPI_Comm_rank(MPI_COMM_WORLD, &comm_rank);
    MPI_Comm_size(MPI_COMM_WORLD, &comm_size);
    MPI_Status mpi_status;

    char msg[100];
    int tag_global = 1;
    
    if(comm_rank == 0){
        printf("Who's staying alive now??\n");
        printf("Master is staying alive!\n");
        for(int i = 1; i < comm_size; i++){
            MPI_Recv(msg, 100, MPI_CHAR, i, tag_global, MPI_COMM_WORLD, &mpi_status);
            printf("%s", msg);
        }
    }else { // is slave
        sprintf(msg, "Slave %d is staying alive AH-AH-AH!!!\n", comm_rank);
        MPI_Send(msg, strlen(msg)+1, MPI_CHAR, 0, tag_global, MPI_COMM_WORLD);
    }

    MPI_Finalize();
    return 0;
}
