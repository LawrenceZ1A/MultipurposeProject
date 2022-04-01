#ifndef Py_GENERICALIASOBJECT_H
#define Py_GENERICALIASOBJECT_H
#ifdef __cplusplus
extern "C" {
#endif

#define Py_GenericAlias PyPy_GenericAlias
PyAPI_FUNC(struct _object *) Py_GenericAlias(struct _object *arg0, struct _object *arg1);
#ifdef __cplusplus
}
#endif
#endif /* !Py_GENERICALIASOBJECT_H */