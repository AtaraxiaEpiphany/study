#  Markdown

##  <a id = "1">1️⃣代码块</a>

````markdown
// 代码块 语法

```<language>
  代码...
  代码...
  代码...
```
````

```<language>
  代码...
  代码...
  代码...
```

<a name = "1">2️⃣标题</a>

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
//	加粗斜体
***加粗斜体***
```

###   实例

1. **两个星号+字体+两个星号**
2. 
   - ```三个反引号+字体+三个反引号```
   - ==两个等号+字体+两个等号==
3. ~~两个波浪号+字体+两个波浪号~~
4. *一个星号 + 字体 + 一个星号*
4. ***三个星号+字体+三个星号***

##  4️⃣引用

 ### 引用语法

```markdown
> + 内容
>> + 内容
>>> + 内容
>> + 内容
> + 内容
```

###  实例

> 第一层引用	//    > +  ...
>
> > 第二层引用	>> + ...
> >
> > > 第三层引用   >>> + ...
> >
> > //
>
> //



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
//  + + 空格
任务列表
//	- [空格] +空格 +内容
```

###  实例

1. 有序列表
   - //	-+空格
   - //    *+空格
   - //    ++空格
2. 无序列表
   - ​	//	数字n+.+空格
3. 任务列表
   - - [ ] ​	//	-+空格+[空格]+空格+内容

##  ⑨表格

###  语法

```markdown
|表头|表头|表头|
|---|:--:|---:|
|内容|内容|内容|
|内容|内容|内容|

第二行分割表头和内容。
- 有一个就行，为了对齐，多加了几个
文字默认居左
-两边加：表示文字居中
-右边加：表示文字居右
```

| 表头 | 表头 | 表头 |
| ---- | :--: | ---: |
| 内容 | 内容 | 内容 |
| 内容 | 内容 | 内容 |

//  粘贴自语法



##  ⑩锚点

##  语法

```html
//
- [name](#锚点)   //  点击跳转 
### <a id="锚点">name</a>   //  设置标签
//	
	<a>label</a>   // 添加标签
	<a name = "锚点名称">name</a>	//添加锚点(将要跳转的地方)
	<a href = #锚点名称">label</a> 	// 修改添加的标签,点击跳转至锚点
```

1. 方法1

   - [代码块](#1)

2. 方法2

   - <a href= "#1">标题</a>
   - 

   

#  流程图

+ [流程图详解](https://blog.csdn.net/suoxd123/article/details/84992282?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522164592907916780366538270%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=164592907916780366538270&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~top_ulrmf~default~default-3-84992282.pc_search_insert_ulrmf&utm_term=markdown+%E6%B5%81%E7%A8%8B%E5%9B%BE&spm=1018.2226.3001.4187)
