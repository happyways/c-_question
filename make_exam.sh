#!/bin/bash

if [ $# -ge 1 ]
then
  mkdir "$1"
  cp ./.make_exam/Makefile "./$1"
  cp ./.make_exam/main.cc "./$1"
fi
