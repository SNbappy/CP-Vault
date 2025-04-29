#compile all file -just run this file
g++ -o bruteforces bruteforces.cpp
g++ -o efficient efficient.cpp
g++ -o gen gen.cpp
#generate test-case
for ((i = 1; true; ++i)); do
./gen $i > in.txt
diff -w <(./bruteforces < in.txt) <(./efficient < in.txt) || break
done