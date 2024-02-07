#!/bin/zsh

# Check the input of the argument
if [ $# -ne 1 ]
then
    /usr/bin/echo "Usage: ./run.sh <relative_direction>" 
    /usr/bin/echo "e.g. ./run.sh ../0900/1909A"
    exit 1
fi

# Set the paths according to the file
file_path=$1
file_name="${file_path##*/}"
file_name=${file_name::4}

# Create the file if it doesn't exist with the standard template
if [ ! -f $file_path ]
then
    template=$(cat template.cpp) 
    /usr/bin/echo $template >> $file_path
fi

# Create the input test file and open the C++ file
/usr/bin/touch ../Test/$file_name.txt
/usr/bin/nvim $file_path
