- **安装vundle**

	```$git clone https://github.com/VundleVim/Vundle.vim.git ~/.vim/bundle/Vundle.vim```

- **vundle插件配置**

	```$vim ~/.vimrc```

	- 添加配置信息

```vundle	
set nocompatible              " 这是必需的 
filetype off                  " 这是必需的 
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()
 
  Plugin 'VundleVim/Vundle.vim'
  Plugin 'iamcco/markdown-preview.vim'
  
call vundle#end()            " 这是必需的 
filetype plugin indent on    " 这是必需的 
```

- **安装所需插件**

```$vim + PluginInstall +qall或者$vim && :PluginInstall```


-  [Vundle参考](https://blog.csdn.net/zhangpower1993/article/details/52184581?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522164592652916780255217410%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=164592652916780255217410&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduend~default-1-52184581.pc_search_result_control_group&utm_term=vim+vundle&spm=1018.2226.3001.4187)



