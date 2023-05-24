# If you want to implement `mydir`

mydir is used to generate a folder (like `mkdir`) with the addition of including a generic Readme file to start your projects.

It enables you to type `mydir` instead of `mkdir`:

![mydir_demo](/mydir/mydir_demo.gif)

## How to install

- Copy the `mydir` folder into your workspace.

- Modify the `mydir.sh` and the `template.md`.

- Than make the `.sh` script executable.

```bash
chmod +x mydir.sh
```

run to insert alias
```bash
echo "alias mydir='~/./your/path/to/mydir.sh'" >> ~/.bash_aliases
```

<br>

---
---


## If you want to install aliases into ~/.bash_aliases
Command:
```bash
./install_bash_aliases.sh
```

Notes:

NONE

<br>

---

## If you want to install ROS Noetic (for Ubuntu 20.04)
Command:
```bash
./install_ROS_noetic.sh
```

Notes:

NONE

<br>

---

## If you want to install OpenCv 3.4.13
Command:
```bash
./install_openCv.sh
```

Notes:

do the following before starting the script:
```bash
sudo -s
```

If needed, mod the CMake build arguments before running the script.

<br>

before running the scripts you need to make it executable.

```bash
chmod +x xxx.sh
```