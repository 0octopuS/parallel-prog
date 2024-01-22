#!/bin/bash

#SBATCH --job-name=message-chain
#SBATCH --account=project_2009502
#SBATCH --partition=small
#SBATCH --time=00:05:00
#SBATCH --ntasks=4

project_path=message-chain/c
project_name=message-chain
srun -o ${project_path}/${project_name}.out ${project_path}/${project_name}.exe
