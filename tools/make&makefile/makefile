Srcs := $(wildcard *.c)
Dest := $(patsubst %.c,%.o,$(Srcs))
Objs := $(Srcs:.c=)

ifndef DIR 
DIR := $(shell if [ ! -d "objdump" ];then mkdir "objdump"; fi\
  	&& touch objdump/objdump.txt) 
endif  #判断目录是否存在,创建objdump文本文件

all : $(Objs)
.PHONY : all 


$(Objs) : %:%.o 
	-gcc -g $< -o $@  
	-objdump -S $< >> ./objdump/objdump.txt
	@echo "_______________________________________________________________" >> ./objdump/objdump.txt 

$(Dest) :%.o:%.c
	-gcc -c -g $< -o $@

.PHONY : clean cleanobj cleandir
clean : cleanobj cleandir
	-rm -rf *.o 
cleanobj : 
	-rm $(Objs)
cleandir : 
	-cat ./objdump/objdump.txt
	-rm -rf ./objdump	


































