#include "cpyext_object.h"

#ifdef _WIN64
#define Signed   Py_ssize_t          /* xxx temporary fix */
#define Unsigned unsigned long long  /* xxx temporary fix */
#else
#define Signed   Py_ssize_t     /* xxx temporary fix */
#define Unsigned unsigned long  /* xxx temporary fix */
#endif
        
#define PyMember_GetOne PyPyMember_GetOne
PyAPI_FUNC(struct _object *) PyMember_GetOne(const char *arg0, struct PyMemberDef *arg1);
#define PyMember_SetOne PyPyMember_SetOne
PyAPI_FUNC(int) PyMember_SetOne(char *arg0, struct PyMemberDef *arg1, struct _object *arg2);

#undef Signed    /* xxx temporary fix */
#undef Unsigned  /* xxx temporary fix */
