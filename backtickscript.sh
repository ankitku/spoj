#!/bin/bash

for i in `ls *.c`
do
echo "Outputting $i ..."
cat $i
done
