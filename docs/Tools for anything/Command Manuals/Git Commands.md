[course](https://zhuanlan.zhihu.com/p/193140870)

 **Upload Repository**
```bash
# Create a new Git repository in this directory.
git init

# Upload the specific files
git add README.md

# '.' signifies all files. 'git add .' adds all untracked or modified files under Git's management.
git add .

# Commit the staged files to the repository. "first commit" is the commit message describing this change.
git commit -m "first commit"

# change branch
git branch -M main

# Inform Git of the remote repository where changes will be pushed.
git remote add origin git@github.com:Yux-lab/DevToolsCommands.git

# Push changes to the main branch of the remote repository forcefully.
git push -u origin main

```


**Push Changes**
```
git add -A

git commit -m "something new"

git push -u origin master/main -f
```

```bash
git fetch --all

git branch -a

git checkout -b gh-pages origin/gh-pages

git checkout -b gh-pages

git push -u origin gh-pages
```