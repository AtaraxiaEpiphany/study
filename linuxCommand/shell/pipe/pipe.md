## shell脚本流
` 标准输入(stdin ) - 0`

` 标准输出(stdout) - 1`	

` 标准错误(stderr) - 2`

###重定向
 - command > file		***将输出重定向到 file***
 - command < file 	 	***将输入重定向到 file***
 - command >> file 		***将输出以追加的方式重定向到 file***
 - n > file		 	***将文件描述符为 n 的文件重定向到 file***
 - n >> file		 	***将文件描述符为 n 的文件以追加的方式重定向到 file***
 - n >& m 			***将输出文件 m 和 n 合并***
 - n <& m		 	***将输入文件 m 和 n 合并***
 - << tag  		 	***将开始标记 tag 和结束标记 tag 之间的内容作为输入***

```
command > file 将 stdout 重定向到 file,command < file将stdin重定向到file
如果希望 stderr 重定向到 file, $command 2> file
```
###管道

```
command a | command b
将命令a的stdout作为命令b的stdin
```

