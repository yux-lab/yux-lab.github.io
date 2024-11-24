D:
D:\blog\yux-lab.github.io
git add -A
git commit -m "something new"
git push -u origin main

git ls-files --deleted -z | xargs -0 git rm || echo "No deleted files to remove."


git commit -m "Remove deleted files"


git push -u origin main
