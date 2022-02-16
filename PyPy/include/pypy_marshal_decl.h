#include "cpyext_object.h"

#ifdef _WIN64
#define Signed   Py_ssize_t          /* xxx temporary fix */
#define Unsigned unsigned long long  /* xxx temporary fix */
#else
#define Signed   Py_ssize_t     /* xxx temporary fix */
#define Unsigned unsigned long  /* xxx temporary fix */
#endif
        
#define PyMarshal_ReadObjectFromString PyPyMarshal_ReadObjectFromString
PyAPI_FUNC(struct _object *) PyMarshal_ReadObjectFromString(char *arg0, Signed arg1);
#define PyMarshal_WriteObjectToString PyPyMarshal_WriteObjectToString
PyAPI_FUNC(struct _object *) PyMarshal_WriteObjectToString(struct _object *arg0, int arg1);

#undef Signed    /* xxx temporary fix */
#undef Unsigned  /* xxx temporary fix */
