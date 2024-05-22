#!/bin/bash

# Sample script written for Part 4 of the RHCE series

# This script will return the following set of system

information: # -Hostname information:

echo -e "\e[31;43m***** HOSTNAME INFORMATION *****\e[0m" 

hostnamectl

echo ""

# -File system disk space usage:

echo -e "\e[31;43m***** FILE SYSTEM DISK SPACE USAGE

*****\e[0m" df -h

echo ""

# -Free and used memory in the system:

echo -e "\e[31;43m ***** FREE AND USED MEMORY

*****\e[0m" free

echo ""

# -System uptime and load:

echo -e "\e[31;43m***** SYSTEM UPTIME AND LOAD *****\e[0m" 

uptime

echo ""
