# Visualization-of-basic-Data-Strucutre-and-Algorithms

Graphic simulation for:
- CPU scheduling algorithms such as FCFS, SJF and Priority scheduling.
- Shortest & 2nd shortest path in a weighted graph using Dijkstra's Algorithm.
- Basic data structures such as Stack, Queue & Linked list and their basic operations.
- AVL Tree operations (Insert, Delete, Inorder, Postorder, etc).
- N Queen problem using backtracking.
used C/C++ graphics library and Object Oriented Programming concepts.
 


## Insructions for Linux User

- Linux users need to install some packages and library to compile graphics.h while windows user can use TURBO C for executing graphics program.

      1- sudo apt-get install build-essential

      2- sudo apt-get install libsdl-image1.2 libsdl-image1.2-dev guile-1.8 guile-1.8-dev libsdl1.2debian:i386 libsdl1.2debian libart-2.0-dev libaudiofile-dev libesd0-dev libdirectfb-dev libdirectfb-extra libfreetype6-dev libxext-dev x11proto-xext-dev libfreetype6 libaa1 libaa1-dev libslang2-dev libasound2 libasound2-dev

- Download libgraph

      tar -xvzf libgraph-1.0.2

      cd libgraph-1.0.2

      ./configure

      sudo make

      sudo make install

      sudo cp /usr/local/lib/libgraph.* /usr/lib
 
- Compile and Run

      gcc generatepid.c struct.h graphics.c main.c -lgraph

      ./a.out
      
 ## Basic Data Structure Operation Visualization
 
 ### Stack: 

