#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>

int main(int argc, char *argv[])
{
    // TODO: say hello! in parallel
    MPI_Init(&argc,&argv);

    // Get the number of processes
    int n;
    MPI_Comm_size( MPI_COMM_WORLD , & n);

    // Get the rank of processes
    int rank;
    MPI_Comm_rank( MPI_COMM_WORLD ,& rank);

    char processor_name[MPI_MAX_PROCESSOR_NAME];
    int name_len;
    MPI_Get_processor_name( processor_name , &name_len);
    printf("Hello world from processor %s, rand %d out of %d processor\n", processor_name, rank, n);

    MPI_Finalize();
    return 0;
}
