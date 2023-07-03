#!/bin/bash

if [ $# -ne 1 ]; then
  echo "Usage: $0 2xx" 1>&2
  exit 1
fi

if ! [[ "$1" =~ ^[1-9][0-9]{,2}$ ]]; then
  echo "Usage: $0 2xx (x=[0-9])" 1>&2
  exit 1
fi

if [ ! -e abc ]; then
  echo "Error: directory 'abc' not exists." 1>&2
  exit 1
fi

mkdir -p abc/$1

cp -n template.cpp abc/$1/a.cpp
cp -n template.cpp abc/$1/b.cpp
cp -n template.cpp abc/$1/c.cpp
cp -n template.cpp abc/$1/d.cpp

cp -n template.py abc/$1/a.py
cp -n template.py abc/$1/b.py
cp -n template.py abc/$1/c.py
cp -n template.py abc/$1/d.py

exit 0