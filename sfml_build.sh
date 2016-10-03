sudo apt-get install libxrandr-dev -y

cd external/SFML
cmake -DCMAKE_BUILD_TYPE=release
make
cmake -DCMAKE_BUILD_TYPE=debug
make
