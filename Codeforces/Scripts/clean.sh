#!/bin/zsh

# Delete all the input test on the folder
for file in ../Test/*.txt
do 
    /usr/bin/rm $file
done
