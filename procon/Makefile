file := test
arg := 

.PHONY: exec clean;
exec: $(file).cpp
	gcc -stdlib=libstdc++ -o $(file).out $(file).cpp
	./$(file).out $(arg)
	rm -f *.out

clean:
	rm -f *.out
