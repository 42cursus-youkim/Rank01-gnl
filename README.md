# get_next_line

## why just don't use _pathlib_ smh

![](https://badge42.herokuapp.com/api/project/youkim/get_next_line)

>  The aim of this project is to make you code a function that returns a line,
read from a file descriptor.

#### 📄 [subject pdf](https://cdn.intra.42.fr/pdf/pdf/35908/en.subject.pdf)

```python
from pathlib import Path
for line in Path('README.md').open():
    print(line)
```

## diffences to newer subject

### old (this)

`int	get_next_line(int fd, char **line)`

- reference to `char *line` is passed to store lines read
- returns lengths read, -1 if error

### new

`char *get_next_line(int fd)`

- returns read line
- returns `NULL` if error
