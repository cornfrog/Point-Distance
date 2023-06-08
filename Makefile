all:
	@gcc point-distance.c -o point-distance -lm
	@mv point-distance bin
	@echo MAKE Success: use \'make run\' next

run:
	@./bin/point-distance

clean:
	@rm bin/point-distance
	@echo MAKE CLEAN Succes: use \'make\' to get exe back
