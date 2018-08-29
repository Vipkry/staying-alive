Para saber como instalar o MPI e configurar o ambiente:  
https://github.com/Vipkry/ParalelMatrixMultiplier  
  
Como compilar:  
  
mpicc main.c -o main.o  
  
Como executar:  
  
mpirun -np 4 --hostfile hostfile -mca plm_rsh_no_tree_spawn 1 main.o

(OBS: edite o hostfile para ter os slots desejados.  
Na verdade o hostfile é opcional, se quiser saber mais: https://www.open-mpi.org/faq/?category=running#mpirun-hostfile)  

Grupo:  
João Victor Monteiro  
Matheus Torres  
Gustavo Pergola  

