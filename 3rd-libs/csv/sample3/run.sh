# reference: https://github.com/semitrivial/csv_parser
LIB_PATH=./lib/csv_parser
SRC_PATH=./src
BIN_PATH=./bin

rm -rf $BIN_PATH && mkdir $BIN_PATH
cp -R ./data/users.csv $BIN_PATH
gcc -L $LIB_PATH/ -l csv $SRC_PATH/sample.c -I$LIB_PATH -o $BIN_PATH/sample 
cd $BIN_PATH 
./sample
