# get_next_line

![](https://badge42.herokuapp.com/api/project/youkim/get_next_line)

## diffences to newer subject

### old (this)

`int	get_next_line(int fd, char **line)`

- reference to `char *line` is passed to store lines read
- returns lengths read, -1 if error

### new

`char *get_next_line(int fd)`

- returns read line
- returns `NULL` if error
