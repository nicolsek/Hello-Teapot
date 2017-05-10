all: HelloTeapot.cpp
	g++ HelloTeapot.cpp  -IC:\MinGW\include\GL -LC:\MinGW\lib -w -lmingw32 -lglew32 -lglut32 -o teapot
