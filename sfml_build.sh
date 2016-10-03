sudo apt-get install libjpeg-dev libxrandr-dev libfreetype6-dev libX11-dev libx11-xcb-dev libxcb-image0-dev libxcb-randr0-dev libxcb1-dev libflac-dev libogg-dev libvorbis-dev libvorbisenc2 libvorbisfile3 libopenal-dev libpthread-stubs0-dev -y

cd external/SFML
cmake -DCMAKE_BUILD_TYPE=release
make
cmake -DCMAKE_BUILD_TYPE=debug
make
