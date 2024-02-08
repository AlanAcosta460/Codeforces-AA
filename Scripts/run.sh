#!/bin/zsh

# Check the input of 2 arguments
if [ $# -ne 1 ]
then
    /usr/bin/echo "Usage: ./run.sh <relative_direction>" 
    /usr/bin/echo "e.g. ./run.sh ../Codeforces/1300/0004C.cpp"
    exit 1
fi

# Set the paths according to the file
file_path=$1
file_name="${file_path##*/}"
file_name=${file_name::-4}
test_path="../Test/$file_name.txt"

# Check if the file to run exist
if [ ! -f $file_path ] 
then 
    /usr/bin/echo "File not found"
    exit 2
fi

# Check if the file with the input test exist
if [ ! -f $test_path ]
then
    /usr/bin/touch $test_path
    /usr/bin/echo "Test file not found, new test file created"
    exit 3
fi

# Run the C++ file
if g++ $file_path 
then 
    input=$(cat $test_path)
    ./a.out << EOF 
    $input
EOF
    /usr/bin/rm a.out
fi
