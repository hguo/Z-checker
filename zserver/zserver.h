#ifndef _ZSERVER_H
#define _ZSERVER_H

#if __cplusplus
extern "C" {
#endif 

void zserver_start(int port);
void zserver_stop();
void zserver_commit_file(const char *key, const char *filename);

void zserver_commit_val(const char *key, double val);

#if __cplusplus
}
#endif

#endif
