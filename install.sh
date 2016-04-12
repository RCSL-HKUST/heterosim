cd legup-3.0
make
cd ../verilator-3.880
./configure
make
make test
sudo make install
cd ../m2s
./configure
make
sudo make install
