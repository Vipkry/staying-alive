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

    if(comm_rank == 0){
        printf("Sou a master!\n");
        // for(int i = 0; i < comm_size; i++){
        //     MPI_Recv(msg, 100, MPI_CHAR, i, 0, MPI_COMM_WORLD, &mpi_status);
        // }
    }else { // is slave
        printf("Sou o processo %d!\n", comm_rank);
    }

    MPI_Finalize();
    return 0;
}
