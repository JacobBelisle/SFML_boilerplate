g++ main.cpp -o main.exe -I src/include/ -L src/lib/ -lsfml-graphics -lsfml-window -lsfml-system
export LD_LIBRARY_PATH=src/lib/ && ./main.exe