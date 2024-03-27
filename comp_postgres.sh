# Compile the postgres C++ program
g++ -o postgres postgres.cpp $CPPFLAGS $LDFLAGS -lpq
./postgres

