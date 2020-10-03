#include <mpi.h>
#include <iostream>

using namespace std;

int main (int argc, char **argv)
{
    int myid, numprocs;
    MPI_Init (&argc, &argv);
    MPI_Comm_rank (MPI_COMM_WORLD, &myid);
    MPI_Comm_size (MPI_COMM_WORLD, &numprocs);
    cout<<"Hello from process_"<<myid<<endl;
    MPI_Finalize();
    return 0;
}
