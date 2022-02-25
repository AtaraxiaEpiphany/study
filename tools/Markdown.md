#  Markdown

##  <a id = "1">1️⃣代码块</a>

```markdown
// 代码块 语法
```<language>   ```java
```c + enter
```

##  <a name = "1">2️⃣标题</a>

// ##  标题  

```markdown
# 一级标题
## 二级标题
### 三级标题
#### 四级标题
##### 五级标题
###### 六级标题
```

##  3️⃣字体

###  字体语法

```markdown
// 加粗
**粗体**
// 代码高亮显示
==高亮代码==        ```高亮代码```
// 删除线 
~~删除~~ 
// 斜体
*斜体*
```

###   实例

1. **两个星号+字体+两个星号**

2. 
   - ```三个飘号+字体+三个飘号```
   - ==两个等号+字体+两个等号==

3. ~~两个波浪号+字体+两个波浪号~~

4. *一个星号 + 字体 + 一个星号*

##  4️⃣引用

 ### 引用语法

```markdown
> + 内容
>> + 内容
>>> + 内容
```

###  实例

> 第一层引用	//    > +  ...

> > 第二层引用	>> + ...

> > > 第三层引用	>>> + ...

##  5️⃣分割线

###  分隔线语法

```markdown
--- 
***
```

###  实例

***

​	//	三个星号

---

​	//	三个减号

##  ⑥图片插入

###  相应语法

```markdown
![comment](address)
//	![喵星人](~/img.png)
```

###  实例

- <img src="C:\Users\AClockworkOrange\Desktop\Pictures\微信图片_20220214092640.jpg" alt="China" style="zoom:25%;" />
- <img src="C:\Users\AClockworkOrange\Desktop\Pictures\QQ图片20210308154423.jpg" alt="Jerk" style="zoom:25%;" />
- <img src="https://gss0.baidu.com/-fo3dSag_xI4khGko9WTAnF6hhy/zhidao/pic/item/08f790529822720e329623bc76cb0a46f21fab18.jpg" alt="李健" style="zoom:25%;" />

##  ⑦超链接

###  语法

```markdown
[comment](link)
//[ucore7种工具](https://github.com/chyyuu/ucore_os_docs/blob/master/lab0/lab0_ref_ucore-tools.md)

```

###  实例

[ucore7种工具](https://github.com/chyyuu/ucore_os_docs/blob/master/lab0/lab0_ref_ucore-tools.md)

##  8️⃣列表

## 语法

```markdown
有序列表
//	1 + 空格 +enter
无序列表
//	- + 空格
// 	* + 空格
任务列表
//	- [空格] +空格 +内容
```

###  实例

1. 有序列表
   - //	-+空格
   - //    *+空格
2. 无序列表
   - ​	//	数字n+.+空格
3. 任务列表
   - - [ ] ​	//	-+空格+[空格]+空格+内容

##  ⑨表格

###  语法

```markdown
|A|B|C| + enter
```

|  num  |  name  |   scores   |
| :---: | :----: | :--------: |
| \|num | \|name | \|scores\| |

##  ⑩锚点

##  语法

```html
//
- [name](#锚点)   //  点击跳转 
### <a id="锚点">name</a>   //  设置标签
//	
	<a>label</a>   // 添加标签
	<a name = "锚点名称"></a>	//添加锚点(将要跳转的地方)
	<a href = #锚点名称">label</a> 	// 修改添加的标签,点击跳转至锚点
```

1. 方法1

   - [代码块](#1)

2. 方法2

   - <a href= "#1">标题</a>
   - 

   



