# reference: https://github.com/semitrivial/csv_parser
LIB_PATH=./lib/csv_parser
TARGET_PATH=./target

rm -rf $TARGET_PATH && mkdir -p $TARGET_PATH

gcc -c $LIB_PATH/csv.c -o $TARGET_PATH/csv.o
gcc -c $LIB_PATH/fread_csv_line.c -o $TARGET_PATH/fread_csv_line.o
gcc -c $LIB_PATH/split.c -o $TARGET_PATH/split.o

ar cr $TARGET_PATH/libcsv.a $TARGET_PATH/*.o
rm -rf $TARGET_PATH/*.o

cp $LIB_PATH/*.h $TARGET_PATH
