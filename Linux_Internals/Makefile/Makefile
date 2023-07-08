INSTALL_PATH=../
TAR_NAME=App
SRC_DIR=.
CUR_DIR=.
INCLUDE=-I

CC=gcc
Oflag=-o
Cflag=-c


App:App.c add.c print.c
	$(CC) $(INCLUDE)$(CUR_DIR) $^ $(Oflag) $@
	@echo "Application Binary Generated"
#App.o:App.c
#	$(CC) $^ $(Cflag) $(Oflag) $@
#	@echo "App.o Binary generated"
#add.o:add.c
#	$(CC) $^ $(Cflag) $(Oflag) $@
#	@echo "add.o Binary generated"
#print.o:print.c
#	$(CC) $^ $(Cflag) $(Oflag) $@
#	@echo "print.o Binary generated"
install:$(TAR_NAME)
	cp -rf ${CUR_DIR}/${TAR_NAME} $(INSTALL_PATH)
clean:
	rm -rf $(CUR_DIR)/*.o $(CUR_DIR)/$(TAR_NAME) $(INSTALL_PATH)/$(TAR_NAME)
	@echo "Removed the .o files"

.PHONY:
	clean
