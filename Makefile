create: clean
	mkdir -p working-dir
	cp main.c working-dir/
	cp Monocypher/src/monocypher.* working-dir/
	cp Monocypher/src/optional/* working-dir/
clean:
	rm -rf working-dir
