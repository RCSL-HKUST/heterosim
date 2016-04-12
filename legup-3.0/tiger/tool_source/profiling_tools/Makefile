all:
	gcc calc_hash.c -o calc_hash
	cd perfect_simple && make
	cp perfect_simple/perfect .

clean:
	rm -f calc_hash perfect perfect_simple/*.o perfect_simple/perfect
