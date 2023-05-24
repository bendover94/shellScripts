#!/bin/bash
# This is a script to create a dir including a template readme

mkdir $1
cd $1

current_date=$(date +%d.%m.%Y)
templateFile=/home/lucas/PRIV/shellScripts/template.md
Readme=Readme.md

cp $templateFile $Readme

sed -i "1s/.*/# This is the \`"$1"\` Project\ncreated by Lucas Schmirl on: "$current_date", last edit: "$current_date"\n/" $Readme

code .

echo -e "Directory created: \033[0;34m$1\033[0m"