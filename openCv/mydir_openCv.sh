#!/bin/bash
# This is a script by Lucas Schmirl to create a dir including openCv stuff and a template readme

# creating a directory with given argument
mkdir $1
# navigating into that directory
cd $1

# get the current date, the template.md file and mem for the new Readme.md
current_date=$(date +%d.%m.%Y)

# get paths to stuff
templateFile=/home/lucas/PRIV/shellScripts/openCv/template_openCv.md
DataFolder=/home/lucas/PRIV/shellScripts/openCv/mydir_openCv/Data
IncludeFolder=/home/lucas/PRIV/shellScripts/openCv/mydir_openCv/include
SrcFolder=/home/lucas/PRIV/shellScripts/openCv/mydir_openCv/src
gignore=/home/lucas/PRIV/shellScripts/openCv/mydir_openCv/.gitignore
license=/home/lucas/PRIV/shellScripts/openCv/mydir_openCv/LICENSE
Makef=/home/lucas/PRIV/shellScripts/openCv/mydir_openCv/Makefile

Readme=Readme.md

# copy the template.md into your new directory, naming it Readme.md
cp $templateFile $Readme

# copy stuff
cp -R $DataFolder Data
cp -R $IncludeFolder include
cp -R $SrcFolder src
cp $gignore .gitignore
cp $license LICENSE
cp $Makef Makefile

# change the first line of your Readme.md file
sed -i "1s/.*/# This is the \`"$1"\` Project\ncreated by Lucas Schmirl on: "$current_date", last edit: "$current_date"\n/" $Readme

# open your new folder in vscode
code .

# ansi-coloring variables
colorBlue="\033[0;34m"
colorOff="\033[0m"

# display message in terminal
echo -e "Directory created: $colorBlue$1$colorOff"