C=g++

all: clean compile

compile: main.cpp funcs.cpp
	$C *.cpp -o res
	./res

clean:
	rm -rf res

git:
	git add .
	git commit -am "from make"
	git push