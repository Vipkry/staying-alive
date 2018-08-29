#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "mpi.h"

int main(int argc, char *argv[])
{
    MPI_Init (NULL, NULL);
    int comm_rank = 0;
    int comm_size = 0;

    MPI_Comm_rank(MPI_COMM_WORLD, &comm_rank);
    MPI_Comm_size(MPI_COMM_WORLD, &comm_size);
    MPI_Status mpi_status;

    if(comm_rank == 0){

    }else { // is slave
        
    }

    MPI_Finalize();
    return 0;
}
