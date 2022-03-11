#查看本地分支与远程库分支对应关系
- `$git branch -vv`
#git pull 上游分支
- `$git branch --set-upstream-to=origin<远程库分支> <本地分支>`
#git push 上游分支
- `$git push --set-upstream-to <远程库分支> <本地分支>`
#取消上游分支
- `$git branch --unset-upstream`
