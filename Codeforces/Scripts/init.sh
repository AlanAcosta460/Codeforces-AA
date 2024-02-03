#!/bin/zsh

# Check the input of 2 arguments
if [ $# -ne 2 ]
then
    /usr/bin/echo "Usage: ./run.sh <C++_file_name> <folder>"
    /usr/bin/echo "e.g. ./run.sh 1909A 0900"
    exit 1
fi

# Set the paths according to the file
file_name=$1
file_folder=$2
file_path=../$file_folder/$file_name.cpp

# Create the file if it doesn't exist with the standard template
if [ ! -f $file_path ]
then
    template=$(cat template.cpp) 
    /usr/bin/echo $template >> $file_path
fi

# Create the input test file and open the C++ file
/usr/bin/touch ../Test/$file_name.txt
/usr/bin/nvim $file_path
