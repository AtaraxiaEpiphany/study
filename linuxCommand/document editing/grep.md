- [GNU grep manual](https://www.gnu.org/software/grep/manual/)
# Global Regular Expression Pring
**Usage: grep [OPTION]... PATTERNS [FILE]...**

###Pattern selection and interpretation:(模式选择与解释)
- **-i,--ignore-case**    ***ignore case distinctions in patterns and data***忽略大小写
- **-E,--extended-regexp**    ***PATTERNS are extended regular express
ions***扩展正则表达式,等价于egrep
- **-F,--fixed-strings**    ***PATTERNS are strings***模式为固定字符串,等价于fgrep

###Output control:(输出控制)
- **-n,--line-number**    ***print line number with output lines***使用输出行打印行号
- **-v,--invert-match**    ***select non-matching lines***反向匹配输出
- **-c,--count**    ***print only a count of selected lines***只打印匹配行的个数

##special characters
```
' .?*+{|()[\^$ '
‘.’
    matches any single character.
‘?’
    The preceding item is optional and is matched at most once.
‘*’
    The preceding item is matched zero or more times.
‘+’
    The preceding item is matched one or more times.
‘{n}’
    The preceding item is matched exactly n times.
‘{n,}’
    The preceding item is matched n or more times.
‘{,m}’
    The preceding item is matched at most m times. This is a GNU extension.
‘{n,m}’
    The preceding item is matched at least n times, but not more than m times.

```

###行首行尾匹配
```

'^'
    '^s':匹配以s为行首的
'$' 
    's$':匹配以s为行末的
'^$'
    '^$':匹配空行
```
###范围匹配    
```

'[]'
    范围匹配:[0-9a-zA-Z]:匹配 包含 所有数字大小写字母的行
    范围匹配:[^0-9a-zA-Z]:匹配 不包含 所有数字大小写字母的行
'\b'
    边界匹配:'\bstring\b':严格匹配string字符,如tsring不匹配

```


