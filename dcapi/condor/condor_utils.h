/* Local variables: */
/* c-file-style: "linux" */
/* End: */

#ifndef __DC_API_CONDOR_UTILS_H_
#define __DC_API_CONDOR_UTILS_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <fcntl.h>


extern int _DC_mkdir_with_parents(char *dn, mode_t mode);
extern int _DC_rm(char *name);
extern int _DC_create_message(char *box,
			      char *name,
			      const char *message,
			      char *msgfile);
extern int _DC_nuof_messages(char *box, char *name);
extern char *_DC_message_name(char *box, char *name);
extern char *_DC_read_message(char *box, char *name, int del_msg);


#ifdef __cplusplus
}
#endif

#endif

/* End of condor/condor_utils.h */