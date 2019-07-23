#!/bin/bash

touch aaaa.fstest
touch AAAA.fstest

if [[ $(ls *.fstest | wc -l | awk '{print $1}') != '2' ]]; then
  echo "WARNING!!! YOU ARE NOT USING A CASE SENSITIVE FILE SYSTEM"
  exit 1
else
  echo "You are using a case senisitive file system and this repo will work correctly"
fi

rm *.fstest
