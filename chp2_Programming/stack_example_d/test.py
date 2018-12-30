#!/usr/bin/python

from pygments.styles import get_all_styles as styles
for s in styles():
    c = 'dashboard -style syntax_highlighting {!r}'.format(s)
    gdb.execute(c)
    print(c)
    input()
