## tmux install
`$sudo apt-get install tmux`

## tmux key bindings

`use Ctrl+b to enter key bindings mode`
1. 对窗格操作
	- %  **左右分窗格**
	- "  **上下分窗格** 
	- $exit/Ctrl+d **关闭窗格**
2. 对窗口操作
	- c      **创建新窗口** 
	- p    	 **切换到前一个窗格** 
	- n    	 **切换到后一个窗口**
	-  < n > **切换到n号窗口**
3. 对session操作
	- d  **detach脱离会话**
4. copy mode
	- [ **enter copy mode**
	- $set-window-option -g mode-keys vi  
	- press **space** begin selection
	- press **enter** quit copy mode 
	- press **]** to paste selection
