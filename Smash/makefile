MyProject : smash.o smash.c
	gcc smash.o -o smash
	./a.exe
MyProject : smash.c
	gcc -c smash.c -o smash.o
installemsdk: 
	cd .. && git clone https://github.com/emscripten-core/emsdk.git
	cd ../emsdk && emsdk install latest && emsdk activate latest && emsdk_env.bat && emcc smash.c -s WASM=1 -o project.html
	npm i http-server -g
runserver:
	  http-server