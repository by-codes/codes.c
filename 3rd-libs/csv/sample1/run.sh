# reference: https://github.com/semitrivial/csv_parser
LIB_PATH=./lib/csv_parser
SRC_PATH=./src
BIN_PATH=./bin

rm -rf $BIN_PATH && mkdir -p $BIN_PATH
gcc $LIB_PATH/csv.c \
    $LIB_PATH/split.c \
    $LIB_PATH/fread_csv_line.c \
    $SRC_PATH/sample.c \
    -I$LIB_PATH \
    -o $BIN_PATH/sample \
    && $BIN_PATH/sample