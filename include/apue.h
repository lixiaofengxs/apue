#ifndef _APUE_H
#define _APUE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>

#define MAXLINE 4096

#define min(a,b) ((a) < (b) ? (a) : (b))
#define max(a,b) ((a) > (b) ? (a) : (b))

void err_msg(const char *, ...);
void err_dump(const char *, ...) __attribute__((noreturn));
void err_quit(const char *, ...) __attribute__((noreturn));
void err_cont(int, const char *, ...);
void err_exit(int, const char *, ...) __attribute__((noreturn));
void err_ret(const char *, ...);
void err_sys(const char *, ...) __attribute__((noreturn));

#endif // _APUE_H