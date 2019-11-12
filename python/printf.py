
import sys

_outfile = sys.stdout

def set_outfile(file):
    global _outfile
    _outfile = file

def get_outfile():
    return _outfile

def printf(fmt, *args, **kwargs):
    print(fmt.format(*args, **kwargs), end='', file=_outfile)

def printf_line(fmt, *args, **kwargs):
    print(fmt.format(*args, **kwargs), file=_outfile)

def print_sep(char = '-', width = 80):
    print(char * width, file=_outfile)

__all__ = ['set_outfile', 'printf', 'printf_line', 'print_sep']
