#!/bin/zsh

# Check the input of 2 arguments
if [ $# -ne 2 ]
then
    /usr/bin/echo "Usage: ./run.sh <folder> <C++_file_name>"
    /usr/bin/echo "e.g. ./run.sh 0900 1909A"
    exit 1
fi

# Set the paths according to the file
file_folder=$1
file_name=$2
file_path=$file_folder/$file_name.cpp

# Create the file if it doesn't exist with the standard template
if [ ! -f $file_path ]
then
    template=$(cat template.cpp) 
    /usr/bin/echo $template >> $file_path
fi

# Create the input test file and open the C++ file
/usr/bin/touch ../Test/$file_name.txt
/usr/bin/nvim $file_path
