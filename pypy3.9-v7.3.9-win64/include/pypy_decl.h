
#include "cpyext_object.h"

#ifdef _WIN64
#define Signed   Py_ssize_t          /* xxx temporary fix */
#define Unsigned unsigned long long  /* xxx temporary fix */
#else
#define Signed   Py_ssize_t     /* xxx temporary fix */
#define Unsigned unsigned long  /* xxx temporary fix */
#endif
typedef struct { PyObject_HEAD } PyMethodObject;
typedef struct { PyObject_HEAD } PyListObject;
typedef struct { PyObject_HEAD } PyLongObject;
typedef struct { PyObject_HEAD } PyBaseExceptionObject;

/* hack for https://bugs.python.org/issue29943 */

PyAPI_FUNC(int) PyPySlice_GetIndicesEx(PyObject *arg0,
                    Signed arg1, Signed *arg2,
                    Signed *arg3, Signed *arg4, Signed *arg5);
#ifdef __GNUC__
__attribute__((__unused__))
#endif
static int PySlice_GetIndicesEx(PyObject *arg0, Py_ssize_t arg1,
        Py_ssize_t *arg2, Py_ssize_t *arg3, Py_ssize_t *arg4,
        Py_ssize_t *arg5) {
    return PyPySlice_GetIndicesEx(arg0, arg1, arg2, arg3,
                arg4, arg5);
}
#define PyAnySet_Check PyPyAnySet_Check
PyAPI_FUNC(int) PyAnySet_Check(struct _object *arg0);
#define PyAnySet_CheckExact PyPyAnySet_CheckExact
PyAPI_FUNC(int) PyAnySet_CheckExact(struct _object *arg0);
#define PyBool_FromLong PyPyBool_FromLong
PyAPI_FUNC(struct _object *) PyBool_FromLong(int arg0);
#define PyBuffer_FillInfo PyPyBuffer_FillInfo
PyAPI_FUNC(int) PyBuffer_FillInfo(struct bufferinfo *arg0, struct _object *arg1, void *arg2, Signed arg3, int arg4, int arg5);
#define PyBuffer_IsContiguous PyPyBuffer_IsContiguous
PyAPI_FUNC(int) PyBuffer_IsContiguous(struct bufferinfo *arg0, char arg1);
#define PyByteArray_AsString PyPyByteArray_AsString
PyAPI_FUNC(char *) PyByteArray_AsString(struct _object *arg0);
#define PyByteArray_Check PyPyByteArray_Check
PyAPI_FUNC(int) PyByteArray_Check(void * arg0);
#define PyByteArray_CheckExact PyPyByteArray_CheckExact
PyAPI_FUNC(int) PyByteArray_CheckExact(void * arg0);
#define PyByteArray_Concat PyPyByteArray_Concat
PyAPI_FUNC(struct _object *) PyByteArray_Concat(struct _object *arg0, struct _object *arg1);
#define PyByteArray_FromObject PyPyByteArray_FromObject
PyAPI_FUNC(struct _object *) PyByteArray_FromObject(struct _object *arg0);
#define PyByteArray_FromStringAndSize PyPyByteArray_FromStringAndSize
PyAPI_FUNC(struct _object *) PyByteArray_FromStringAndSize(const char *arg0, Signed arg1);
#define PyByteArray_Resize PyPyByteArray_Resize
PyAPI_FUNC(int) PyByteArray_Resize(struct _object *arg0, Signed arg1);
#define PyByteArray_Size PyPyByteArray_Size
PyAPI_FUNC(Signed) PyByteArray_Size(struct _object *arg0);
#define PyBytes_AS_STRING PyPyBytes_AS_STRING
PyAPI_FUNC(char *) PyBytes_AS_STRING(void *arg0);
#define PyBytes_AsString PyPyBytes_AsString
PyAPI_FUNC(char *) PyBytes_AsString(struct _object *arg0);
#define PyBytes_AsStringAndSize PyPyBytes_AsStringAndSize
PyAPI_FUNC(int) PyBytes_AsStringAndSize(struct _object *arg0, char **arg1, Signed *arg2);
#define PyBytes_Concat PyPyBytes_Concat
PyAPI_FUNC(void) PyBytes_Concat(struct _object **arg0, struct _object *arg1);
#define PyBytes_ConcatAndDel PyPyBytes_ConcatAndDel
PyAPI_FUNC(void) PyBytes_ConcatAndDel(struct _object **arg0, struct _object *arg1);
#define PyBytes_FromObject PyPyBytes_FromObject
PyAPI_FUNC(struct _object *) PyBytes_FromObject(struct _object *arg0);
#define PyBytes_FromString PyPyBytes_FromString
PyAPI_FUNC(struct _object *) PyBytes_FromString(const char *arg0);
#define PyBytes_FromStringAndSize PyPyBytes_FromStringAndSize
PyAPI_FUNC(struct _object *) PyBytes_FromStringAndSize(const char *arg0, Signed arg1);
#define PyBytes_Size PyPyBytes_Size
PyAPI_FUNC(Signed) PyBytes_Size(struct _object *arg0);
#define PyCFunction_Call PyPyCFunction_Call
PyAPI_FUNC(struct _object *) PyCFunction_Call(struct _object *arg0, struct _object *arg1, struct _object *arg2);
#define PyCFunction_Check PyPyCFunction_Check
PyAPI_FUNC(int) PyCFunction_Check(struct _object *arg0);
#define PyCFunction_GetFunction PyPyCFunction_GetFunction
PyAPI_FUNC(PyCFunction) PyCFunction_GetFunction(PyObject * arg0);
#define PyCMethod_New PyPyCMethod_New
PyAPI_FUNC(struct _object *) PyCMethod_New(struct PyMethodDef *arg0, struct _object *arg1, struct _object *arg2, struct _object *arg3);
#define PyCallIter_New PyPyCallIter_New
PyAPI_FUNC(struct _object *) PyCallIter_New(struct _object *arg0, struct _object *arg1);
#define PyCallable_Check PyPyCallable_Check
PyAPI_FUNC(int) PyCallable_Check(struct _object *arg0);
#define PyClassMethod_New PyPyClassMethod_New
PyAPI_FUNC(struct _object *) PyClassMethod_New(struct _object *arg0);
#define PyCode_Addr2Line PyPyCode_Addr2Line
PyAPI_FUNC(int) PyCode_Addr2Line(PyCodeObject *arg0, int arg1);
#define PyCode_Check PyPyCode_Check
PyAPI_FUNC(int) PyCode_Check(void * arg0);
#define PyCode_CheckExact PyPyCode_CheckExact
PyAPI_FUNC(int) PyCode_CheckExact(void * arg0);
#define PyCode_GetNumFree PyPyCode_GetNumFree
PyAPI_FUNC(Signed) PyCode_GetNumFree(PyCodeObject *arg0);
#define PyCode_New PyPyCode_New
PyAPI_FUNC(PyCodeObject *) PyCode_New(int arg0, int arg1, int arg2, int arg3, int arg4, struct _object *arg5, struct _object *arg6, struct _object *arg7, struct _object *arg8, struct _object *arg9, struct _object *arg10, struct _object *arg11, struct _object *arg12, int arg13, struct _object *arg14);
#define PyCode_NewEmpty PyPyCode_NewEmpty
PyAPI_FUNC(PyCodeObject *) PyCode_NewEmpty(const char *arg0, const char *arg1, int arg2);
#define PyCodec_Decode PyPyCodec_Decode
PyAPI_FUNC(struct _object *) PyCodec_Decode(struct _object *arg0, const char *arg1, const char *arg2);
#define PyCodec_Decoder PyPyCodec_Decoder
PyAPI_FUNC(struct _object *) PyCodec_Decoder(const char *arg0);
#define PyCodec_Encode PyPyCodec_Encode
PyAPI_FUNC(struct _object *) PyCodec_Encode(struct _object *arg0, const char *arg1, const char *arg2);
#define PyCodec_Encoder PyPyCodec_Encoder
PyAPI_FUNC(struct _object *) PyCodec_Encoder(const char *arg0);
#define PyCodec_IncrementalDecoder PyPyCodec_IncrementalDecoder
PyAPI_FUNC(struct _object *) PyCodec_IncrementalDecoder(const char *arg0, const char *arg1);
#define PyCodec_IncrementalEncoder PyPyCodec_IncrementalEncoder
PyAPI_FUNC(struct _object *) PyCodec_IncrementalEncoder(const char *arg0, const char *arg1);
#define PyComplex_Check PyPyComplex_Check
PyAPI_FUNC(int) PyComplex_Check(void * arg0);
#define PyComplex_CheckExact PyPyComplex_CheckExact
PyAPI_FUNC(int) PyComplex_CheckExact(void * arg0);
#define PyComplex_FromDoubles PyPyComplex_FromDoubles
PyAPI_FUNC(struct _object *) PyComplex_FromDoubles(double arg0, double arg1);
#define PyComplex_ImagAsDouble PyPyComplex_ImagAsDouble
PyAPI_FUNC(double) PyComplex_ImagAsDouble(struct _object *arg0);
#define PyComplex_RealAsDouble PyPyComplex_RealAsDouble
PyAPI_FUNC(double) PyComplex_RealAsDouble(struct _object *arg0);
#define PyContextVar_Get PyPyContextVar_Get
PyAPI_FUNC(int) PyContextVar_Get(struct _object *arg0, struct _object *arg1, struct _object **arg2);
#define PyContextVar_New PyPyContextVar_New
PyAPI_FUNC(struct _object *) PyContextVar_New(const char *arg0, struct _object *arg1);
#define PyContextVar_Set PyPyContextVar_Set
PyAPI_FUNC(struct _object *) PyContextVar_Set(struct _object *arg0, struct _object *arg1);
#define PyCoro_Check PyPyCoro_Check
PyAPI_FUNC(int) PyCoro_Check(void * arg0);
#define PyCoro_CheckExact PyPyCoro_CheckExact
PyAPI_FUNC(int) PyCoro_CheckExact(void * arg0);
#define PyDateTime_Check PyPyDateTime_Check
PyAPI_FUNC(int) PyDateTime_Check(struct _object *arg0);
#define PyDateTime_CheckExact PyPyDateTime_CheckExact
PyAPI_FUNC(int) PyDateTime_CheckExact(struct _object *arg0);
#define PyDateTime_DATE_GET_HOUR PyPyDateTime_DATE_GET_HOUR
PyAPI_FUNC(int) PyDateTime_DATE_GET_HOUR(void *arg0);
#define PyDateTime_DATE_GET_MICROSECOND PyPyDateTime_DATE_GET_MICROSECOND
PyAPI_FUNC(int) PyDateTime_DATE_GET_MICROSECOND(void *arg0);
#define PyDateTime_DATE_GET_MINUTE PyPyDateTime_DATE_GET_MINUTE
PyAPI_FUNC(int) PyDateTime_DATE_GET_MINUTE(void *arg0);
#define PyDateTime_DATE_GET_SECOND PyPyDateTime_DATE_GET_SECOND
PyAPI_FUNC(int) PyDateTime_DATE_GET_SECOND(void *arg0);
#define PyDateTime_DELTA_GET_DAYS PyPyDateTime_DELTA_GET_DAYS
PyAPI_FUNC(int) PyDateTime_DELTA_GET_DAYS(void *arg0);
#define PyDateTime_DELTA_GET_MICROSECONDS PyPyDateTime_DELTA_GET_MICROSECONDS
PyAPI_FUNC(int) PyDateTime_DELTA_GET_MICROSECONDS(void *arg0);
#define PyDateTime_DELTA_GET_SECONDS PyPyDateTime_DELTA_GET_SECONDS
PyAPI_FUNC(int) PyDateTime_DELTA_GET_SECONDS(void *arg0);
#define PyDateTime_FromTimestamp PyPyDateTime_FromTimestamp
PyAPI_FUNC(struct _object *) PyDateTime_FromTimestamp(struct _object *arg0);
#define PyDateTime_GET_DAY PyPyDateTime_GET_DAY
PyAPI_FUNC(int) PyDateTime_GET_DAY(void *arg0);
#define PyDateTime_GET_FOLD PyPyDateTime_GET_FOLD
PyAPI_FUNC(int) PyDateTime_GET_FOLD(void *arg0);
#define PyDateTime_GET_MONTH PyPyDateTime_GET_MONTH
PyAPI_FUNC(int) PyDateTime_GET_MONTH(void *arg0);
#define PyDateTime_GET_YEAR PyPyDateTime_GET_YEAR
PyAPI_FUNC(int) PyDateTime_GET_YEAR(void *arg0);
#define PyDateTime_TIME_GET_FOLD PyPyDateTime_TIME_GET_FOLD
PyAPI_FUNC(int) PyDateTime_TIME_GET_FOLD(void *arg0);
#define PyDateTime_TIME_GET_HOUR PyPyDateTime_TIME_GET_HOUR
PyAPI_FUNC(int) PyDateTime_TIME_GET_HOUR(void *arg0);
#define PyDateTime_TIME_GET_MICROSECOND PyPyDateTime_TIME_GET_MICROSECOND
PyAPI_FUNC(int) PyDateTime_TIME_GET_MICROSECOND(void *arg0);
#define PyDateTime_TIME_GET_MINUTE PyPyDateTime_TIME_GET_MINUTE
PyAPI_FUNC(int) PyDateTime_TIME_GET_MINUTE(void *arg0);
#define PyDateTime_TIME_GET_SECOND PyPyDateTime_TIME_GET_SECOND
PyAPI_FUNC(int) PyDateTime_TIME_GET_SECOND(void *arg0);
#define PyDate_Check PyPyDate_Check
PyAPI_FUNC(int) PyDate_Check(struct _object *arg0);
#define PyDate_CheckExact PyPyDate_CheckExact
PyAPI_FUNC(int) PyDate_CheckExact(struct _object *arg0);
#define PyDate_FromTimestamp PyPyDate_FromTimestamp
PyAPI_FUNC(struct _object *) PyDate_FromTimestamp(struct _object *arg0);
#define PyDelta_Check PyPyDelta_Check
PyAPI_FUNC(int) PyDelta_Check(struct _object *arg0);
#define PyDelta_CheckExact PyPyDelta_CheckExact
PyAPI_FUNC(int) PyDelta_CheckExact(struct _object *arg0);
#define PyDescr_NewClassMethod PyPyDescr_NewClassMethod
PyAPI_FUNC(PyObject *) PyDescr_NewClassMethod(PyTypeObject * arg0, PyMethodDef * arg1);
#define PyDescr_NewGetSet PyPyDescr_NewGetSet
PyAPI_FUNC(struct _object *) PyDescr_NewGetSet(struct _typeobject *arg0, struct PyGetSetDef *arg1);
#define PyDescr_NewMethod PyPyDescr_NewMethod
PyAPI_FUNC(PyObject *) PyDescr_NewMethod(PyTypeObject * arg0, PyMethodDef * arg1);
#define PyDictProxy_Check PyPyDictProxy_Check
PyAPI_FUNC(int) PyDictProxy_Check(void * arg0);
#define PyDictProxy_CheckExact PyPyDictProxy_CheckExact
PyAPI_FUNC(int) PyDictProxy_CheckExact(void * arg0);
#define PyDictProxy_New PyPyDictProxy_New
PyAPI_FUNC(struct _object *) PyDictProxy_New(struct _object *arg0);
#define PyDict_Clear PyPyDict_Clear
PyAPI_FUNC(void) PyDict_Clear(struct _object *arg0);
#define PyDict_Contains PyPyDict_Contains
PyAPI_FUNC(int) PyDict_Contains(struct _object *arg0, struct _object *arg1);
#define PyDict_Copy PyPyDict_Copy
PyAPI_FUNC(struct _object *) PyDict_Copy(struct _object *arg0);
#define PyDict_DelItem PyPyDict_DelItem
PyAPI_FUNC(int) PyDict_DelItem(struct _object *arg0, struct _object *arg1);
#define PyDict_DelItemString PyPyDict_DelItemString
PyAPI_FUNC(int) PyDict_DelItemString(struct _object *arg0, const char *arg1);
#define PyDict_GetItem PyPyDict_GetItem
PyAPI_FUNC(struct _object *) PyDict_GetItem(struct _object *arg0, struct _object *arg1);
#define PyDict_GetItemString PyPyDict_GetItemString
PyAPI_FUNC(struct _object *) PyDict_GetItemString(struct _object *arg0, const char *arg1);
#define PyDict_GetItemWithError PyPyDict_GetItemWithError
PyAPI_FUNC(struct _object *) PyDict_GetItemWithError(struct _object *arg0, struct _object *arg1);
#define PyDict_Items PyPyDict_Items
PyAPI_FUNC(struct _object *) PyDict_Items(struct _object *arg0);
#define PyDict_Keys PyPyDict_Keys
PyAPI_FUNC(struct _object *) PyDict_Keys(struct _object *arg0);
#define PyDict_Merge PyPyDict_Merge
PyAPI_FUNC(int) PyDict_Merge(struct _object *arg0, struct _object *arg1, int arg2);
#define PyDict_New PyPyDict_New
PyAPI_FUNC(struct _object *) PyDict_New(void);
#define PyDict_Next PyPyDict_Next
PyAPI_FUNC(int) PyDict_Next(struct _object *arg0, Signed *arg1, struct _object **arg2, struct _object **arg3);
#define PyDict_SetDefault PyPyDict_SetDefault
PyAPI_FUNC(PyObject *) PyDict_SetDefault(PyObject * arg0, PyObject * arg1, PyObject * arg2);
#define PyDict_SetItem PyPyDict_SetItem
PyAPI_FUNC(int) PyDict_SetItem(struct _object *arg0, struct _object *arg1, struct _object *arg2);
#define PyDict_SetItemString PyPyDict_SetItemString
PyAPI_FUNC(int) PyDict_SetItemString(struct _object *arg0, const char *arg1, struct _object *arg2);
#define PyDict_Size PyPyDict_Size
PyAPI_FUNC(Signed) PyDict_Size(struct _object *arg0);
#define PyDict_Update PyPyDict_Update
PyAPI_FUNC(int) PyDict_Update(struct _object *arg0, struct _object *arg1);
#define PyDict_Values PyPyDict_Values
PyAPI_FUNC(struct _object *) PyDict_Values(struct _object *arg0);
#define PyErr_BadArgument PyPyErr_BadArgument
PyAPI_FUNC(int) PyErr_BadArgument(void);
#define PyErr_BadInternalCall PyPyErr_BadInternalCall
PyAPI_FUNC(void) PyErr_BadInternalCall(void);
#define PyErr_CheckSignals PyPyErr_CheckSignals
PyAPI_FUNC(int) PyErr_CheckSignals(void);
#define PyErr_Clear PyPyErr_Clear
PyAPI_FUNC(void) PyErr_Clear(void);
#define PyErr_Display PyPyErr_Display
PyAPI_FUNC(void) PyErr_Display(struct _object *arg0, struct _object *arg1, struct _object *arg2);
#define PyErr_ExceptionMatches PyPyErr_ExceptionMatches
PyAPI_FUNC(int) PyErr_ExceptionMatches(struct _object *arg0);
#define PyErr_Fetch PyPyErr_Fetch
PyAPI_FUNC(void) PyErr_Fetch(struct _object **arg0, struct _object **arg1, struct _object **arg2);
#define PyErr_GetExcInfo PyPyErr_GetExcInfo
PyAPI_FUNC(void) PyErr_GetExcInfo(struct _object **arg0, struct _object **arg1, struct _object **arg2);
#define PyErr_GivenExceptionMatches PyPyErr_GivenExceptionMatches
PyAPI_FUNC(int) PyErr_GivenExceptionMatches(struct _object *arg0, struct _object *arg1);
#define PyErr_NoMemory PyPyErr_NoMemory
PyAPI_FUNC(struct _object *) PyErr_NoMemory(void);
#define PyErr_NormalizeException PyPyErr_NormalizeException
PyAPI_FUNC(void) PyErr_NormalizeException(struct _object **arg0, struct _object **arg1, struct _object **arg2);
#define PyErr_Occurred PyPyErr_Occurred
PyAPI_FUNC(struct _object *) PyErr_Occurred(void);
#define PyErr_Print PyPyErr_Print
PyAPI_FUNC(void) PyErr_Print(void);
#define PyErr_PrintEx PyPyErr_PrintEx
PyAPI_FUNC(void) PyErr_PrintEx(int arg0);
#define PyErr_Restore PyPyErr_Restore
PyAPI_FUNC(void) PyErr_Restore(struct _object *arg0, struct _object *arg1, struct _object *arg2);
#define PyErr_SetExcInfo PyPyErr_SetExcInfo
PyAPI_FUNC(void) PyErr_SetExcInfo(struct _object *arg0, struct _object *arg1, struct _object *arg2);
#define PyErr_SetFromErrno PyPyErr_SetFromErrno
PyAPI_FUNC(struct _object *) PyErr_SetFromErrno(struct _object *arg0);
#define PyErr_SetFromErrnoWithFilename PyPyErr_SetFromErrnoWithFilename
PyAPI_FUNC(struct _object *) PyErr_SetFromErrnoWithFilename(struct _object *arg0, const char *arg1);
#define PyErr_SetFromErrnoWithFilenameObject PyPyErr_SetFromErrnoWithFilenameObject
PyAPI_FUNC(struct _object *) PyErr_SetFromErrnoWithFilenameObject(struct _object *arg0, struct _object *arg1);
#define PyErr_SetFromWindowsErr PyPyErr_SetFromWindowsErr
PyAPI_FUNC(struct _object *) PyErr_SetFromWindowsErr(int arg0);
#define PyErr_SetInterrupt PyPyErr_SetInterrupt
PyAPI_FUNC(void) PyErr_SetInterrupt(void);
#define PyErr_SetNone PyPyErr_SetNone
PyAPI_FUNC(void) PyErr_SetNone(struct _object *arg0);
#define PyErr_SetObject PyPyErr_SetObject
PyAPI_FUNC(void) PyErr_SetObject(struct _object *arg0, struct _object *arg1);
#define PyErr_SetString PyPyErr_SetString
PyAPI_FUNC(void) PyErr_SetString(struct _object *arg0, const char *arg1);
#define PyErr_Warn PyPyErr_Warn
PyAPI_FUNC(int) PyErr_Warn(struct _object *arg0, const char *arg1);
#define PyErr_WarnEx PyPyErr_WarnEx
PyAPI_FUNC(int) PyErr_WarnEx(struct _object *arg0, const char *arg1, int arg2);
#define PyErr_WarnExplicit PyPyErr_WarnExplicit
PyAPI_FUNC(int) PyErr_WarnExplicit(struct _object *arg0, const char *arg1, const char *arg2, int arg3, const char *arg4, struct _object *arg5);
#define PyErr_WriteUnraisable PyPyErr_WriteUnraisable
PyAPI_FUNC(void) PyErr_WriteUnraisable(struct _object *arg0);
#define PyEval_AcquireThread PyPyEval_AcquireThread
PyAPI_FUNC(void) PyEval_AcquireThread(PyThreadState *arg0);
#define PyEval_CallObjectWithKeywords PyPyEval_CallObjectWithKeywords
PyAPI_FUNC(struct _object *) PyEval_CallObjectWithKeywords(struct _object *arg0, struct _object *arg1, struct _object *arg2);
#define PyEval_EvalCode PyPyEval_EvalCode
PyAPI_FUNC(struct _object *) PyEval_EvalCode(struct _object *arg0, struct _object *arg1, struct _object *arg2);
#define PyEval_GetBuiltins PyPyEval_GetBuiltins
PyAPI_FUNC(struct _object *) PyEval_GetBuiltins(void);
#define PyEval_GetFrame PyPyEval_GetFrame
PyAPI_FUNC(PyFrameObject *) PyEval_GetFrame(void);
#define PyEval_GetGlobals PyPyEval_GetGlobals
PyAPI_FUNC(struct _object *) PyEval_GetGlobals(void);
#define PyEval_GetLocals PyPyEval_GetLocals
PyAPI_FUNC(struct _object *) PyEval_GetLocals(void);
#define PyEval_InitThreads PyPyEval_InitThreads
PyAPI_FUNC(void) PyEval_InitThreads(void);
#define PyEval_MergeCompilerFlags PyPyEval_MergeCompilerFlags
PyAPI_FUNC(int) PyEval_MergeCompilerFlags(PyCompilerFlags *arg0);
#define PyEval_ReleaseThread PyPyEval_ReleaseThread
PyAPI_FUNC(void) PyEval_ReleaseThread(PyThreadState *arg0);
#define PyEval_RestoreThread PyPyEval_RestoreThread
PyAPI_FUNC(void) PyEval_RestoreThread(PyThreadState *arg0);
#define PyEval_SaveThread PyPyEval_SaveThread
PyAPI_FUNC(PyThreadState *) PyEval_SaveThread(void);
#define PyEval_ThreadsInitialized PyPyEval_ThreadsInitialized
PyAPI_FUNC(int) PyEval_ThreadsInitialized(void);
#define PyExceptionInstance_Class PyPyExceptionInstance_Class
PyAPI_FUNC(struct _object *) PyExceptionInstance_Class(struct _object *arg0);
#define PyException_GetCause PyPyException_GetCause
PyAPI_FUNC(struct _object *) PyException_GetCause(struct _object *arg0);
#define PyException_GetContext PyPyException_GetContext
PyAPI_FUNC(struct _object *) PyException_GetContext(struct _object *arg0);
#define PyException_GetTraceback PyPyException_GetTraceback
PyAPI_FUNC(struct _object *) PyException_GetTraceback(struct _object *arg0);
#define PyException_SetCause PyPyException_SetCause
PyAPI_FUNC(void) PyException_SetCause(struct _object *arg0, struct _object *arg1);
#define PyException_SetContext PyPyException_SetContext
PyAPI_FUNC(void) PyException_SetContext(struct _object *arg0, struct _object *arg1);
#define PyException_SetTraceback PyPyException_SetTraceback
PyAPI_FUNC(int) PyException_SetTraceback(struct _object *arg0, struct _object *arg1);
#define PyFile_FromFd PyPyFile_FromFd
PyAPI_FUNC(struct _object *) PyFile_FromFd(int arg0, const char *arg1, const char *arg2, int arg3, const char *arg4, const char *arg5, const char *arg6, int arg7);
#define PyFile_FromString PyPyFile_FromString
PyAPI_FUNC(struct _object *) PyFile_FromString(const char *arg0, const char *arg1);
#define PyFile_GetLine PyPyFile_GetLine
PyAPI_FUNC(struct _object *) PyFile_GetLine(struct _object *arg0, int arg1);
#define PyFile_WriteObject PyPyFile_WriteObject
PyAPI_FUNC(int) PyFile_WriteObject(struct _object *arg0, struct _object *arg1, int arg2);
#define PyFile_WriteString PyPyFile_WriteString
PyAPI_FUNC(int) PyFile_WriteString(const char *arg0, struct _object *arg1);
#define PyFloat_AS_DOUBLE PyPyFloat_AS_DOUBLE
PyAPI_FUNC(double) PyFloat_AS_DOUBLE(void *arg0);
#define PyFloat_AsDouble PyPyFloat_AsDouble
PyAPI_FUNC(double) PyFloat_AsDouble(struct _object *arg0);
#define PyFloat_FromDouble PyPyFloat_FromDouble
PyAPI_FUNC(struct _object *) PyFloat_FromDouble(double arg0);
#define PyFloat_FromString PyPyFloat_FromString
PyAPI_FUNC(struct _object *) PyFloat_FromString(struct _object *arg0);
#define PyFrame_New PyPyFrame_New
PyAPI_FUNC(PyFrameObject *) PyFrame_New(PyThreadState *arg0, PyCodeObject *arg1, struct _object *arg2, struct _object *arg3);
#define PyFrozenSet_Check PyPyFrozenSet_Check
PyAPI_FUNC(int) PyFrozenSet_Check(void * arg0);
#define PyFrozenSet_CheckExact PyPyFrozenSet_CheckExact
PyAPI_FUNC(int) PyFrozenSet_CheckExact(void * arg0);
#define PyFrozenSet_New PyPyFrozenSet_New
PyAPI_FUNC(struct _object *) PyFrozenSet_New(struct _object *arg0);
#define PyFunction_Check PyPyFunction_Check
PyAPI_FUNC(int) PyFunction_Check(void * arg0);
#define PyFunction_CheckExact PyPyFunction_CheckExact
PyAPI_FUNC(int) PyFunction_CheckExact(void * arg0);
#define PyFunction_GetCode PyPyFunction_GetCode
PyAPI_FUNC(struct _object *) PyFunction_GetCode(struct _object *arg0);
#define PyGILState_Check PyPyGILState_Check
PyAPI_FUNC(int) PyGILState_Check(void);
#define PyGILState_Ensure PyPyGILState_Ensure
PyAPI_FUNC(int) PyGILState_Ensure(void);
#define PyGILState_Release PyPyGILState_Release
PyAPI_FUNC(void) PyGILState_Release(int arg0);
#define PyGen_Check PyPyGen_Check
PyAPI_FUNC(int) PyGen_Check(void * arg0);
#define PyGen_CheckExact PyPyGen_CheckExact
PyAPI_FUNC(int) PyGen_CheckExact(void * arg0);
#define PyImport_AddModule PyPyImport_AddModule
PyAPI_FUNC(struct _object *) PyImport_AddModule(const char *arg0);
#define PyImport_ExecCodeModule PyPyImport_ExecCodeModule
PyAPI_FUNC(struct _object *) PyImport_ExecCodeModule(const char *arg0, struct _object *arg1);
#define PyImport_ExecCodeModuleEx PyPyImport_ExecCodeModuleEx
PyAPI_FUNC(struct _object *) PyImport_ExecCodeModuleEx(const char *arg0, struct _object *arg1, const char *arg2);
#define PyImport_GetModule PyPyImport_GetModule
PyAPI_FUNC(struct _object *) PyImport_GetModule(struct _object *arg0);
#define PyImport_GetModuleDict PyPyImport_GetModuleDict
PyAPI_FUNC(struct _object *) PyImport_GetModuleDict(void);
#define PyImport_Import PyPyImport_Import
PyAPI_FUNC(struct _object *) PyImport_Import(struct _object *arg0);
#define PyImport_ImportModule PyPyImport_ImportModule
PyAPI_FUNC(struct _object *) PyImport_ImportModule(const char *arg0);
#define PyImport_ImportModuleLevelObject PyPyImport_ImportModuleLevelObject
PyAPI_FUNC(PyObject *) PyImport_ImportModuleLevelObject(PyObject * arg0, PyObject * arg1, PyObject * arg2, PyObject * arg3, int arg4);
#define PyImport_ImportModuleNoBlock PyPyImport_ImportModuleNoBlock
PyAPI_FUNC(struct _object *) PyImport_ImportModuleNoBlock(const char *arg0);
#define PyImport_ReloadModule PyPyImport_ReloadModule
PyAPI_FUNC(struct _object *) PyImport_ReloadModule(struct _object *arg0);
#define PyIndex_Check PyPyIndex_Check
PyAPI_FUNC(int) PyIndex_Check(struct _object *arg0);
#define PyInstanceMethod_Check PyPyInstanceMethod_Check
PyAPI_FUNC(int) PyInstanceMethod_Check(struct _object *arg0);
#define PyInstanceMethod_Function PyPyInstanceMethod_Function
PyAPI_FUNC(struct _object *) PyInstanceMethod_Function(struct _object *arg0);
#define PyInstanceMethod_GET_FUNCTION PyPyInstanceMethod_GET_FUNCTION
PyAPI_FUNC(struct _object *) PyInstanceMethod_GET_FUNCTION(struct _object *arg0);
#define PyInstanceMethod_New PyPyInstanceMethod_New
PyAPI_FUNC(struct _object *) PyInstanceMethod_New(struct _object *arg0);
#define PyInterpreterState_Head PyPyInterpreterState_Head
PyAPI_FUNC(PyInterpreterState *) PyInterpreterState_Head(void);
#define PyInterpreterState_Next PyPyInterpreterState_Next
PyAPI_FUNC(PyInterpreterState *) PyInterpreterState_Next(PyInterpreterState *arg0);
#define PyIter_Check PyPyIter_Check
PyAPI_FUNC(int) PyIter_Check(struct _object *arg0);
#define PyIter_Next PyPyIter_Next
PyAPI_FUNC(struct _object *) PyIter_Next(struct _object *arg0);
#define PyList_Append PyPyList_Append
PyAPI_FUNC(int) PyList_Append(struct _object *arg0, struct _object *arg1);
#define PyList_AsTuple PyPyList_AsTuple
PyAPI_FUNC(struct _object *) PyList_AsTuple(struct _object *arg0);
#define PyList_GET_ITEM PyPyList_GET_ITEM
PyAPI_FUNC(struct _object *) PyList_GET_ITEM(void *arg0, Signed arg1);
#define PyList_GET_SIZE PyPyList_GET_SIZE
PyAPI_FUNC(Signed) PyList_GET_SIZE(void *arg0);
#define PyList_GetItem PyPyList_GetItem
PyAPI_FUNC(struct _object *) PyList_GetItem(struct _object *arg0, Signed arg1);
#define PyList_GetSlice PyPyList_GetSlice
PyAPI_FUNC(struct _object *) PyList_GetSlice(struct _object *arg0, Signed arg1, Signed arg2);
#define PyList_Insert PyPyList_Insert
PyAPI_FUNC(int) PyList_Insert(struct _object *arg0, Signed arg1, struct _object *arg2);
#define PyList_New PyPyList_New
PyAPI_FUNC(struct _object *) PyList_New(Signed arg0);
#define PyList_Reverse PyPyList_Reverse
PyAPI_FUNC(int) PyList_Reverse(struct _object *arg0);
#define PyList_SET_ITEM PyPyList_SET_ITEM
PyAPI_FUNC(void) PyList_SET_ITEM(void *arg0, Signed arg1, struct _object *arg2);
#define PyList_SetItem PyPyList_SetItem
PyAPI_FUNC(int) PyList_SetItem(struct _object *arg0, Signed arg1, struct _object *arg2);
#define PyList_SetSlice PyPyList_SetSlice
PyAPI_FUNC(int) PyList_SetSlice(struct _object *arg0, Signed arg1, Signed arg2, struct _object *arg3);
#define PyList_Size PyPyList_Size
PyAPI_FUNC(Signed) PyList_Size(struct _object *arg0);
#define PyList_Sort PyPyList_Sort
PyAPI_FUNC(int) PyList_Sort(struct _object *arg0);
#define PyLong_AsDouble PyPyLong_AsDouble
PyAPI_FUNC(double) PyLong_AsDouble(struct _object *arg0);
#define PyLong_AsLong PyPyLong_AsLong
PyAPI_FUNC(int) PyLong_AsLong(struct _object *arg0);
#define PyLong_AsLongAndOverflow PyPyLong_AsLongAndOverflow
PyAPI_FUNC(int) PyLong_AsLongAndOverflow(struct _object *arg0, int *arg1);
#define PyLong_AsLongLong PyPyLong_AsLongLong
PyAPI_FUNC(Signed) PyLong_AsLongLong(struct _object *arg0);
#define PyLong_AsLongLongAndOverflow PyPyLong_AsLongLongAndOverflow
PyAPI_FUNC(Signed) PyLong_AsLongLongAndOverflow(struct _object *arg0, int *arg1);
#define PyLong_AsSize_t PyPyLong_AsSize_t
PyAPI_FUNC(Unsigned) PyLong_AsSize_t(struct _object *arg0);
#define PyLong_AsSsize_t PyPyLong_AsSsize_t
PyAPI_FUNC(Signed) PyLong_AsSsize_t(struct _object *arg0);
#define PyLong_AsUnsignedLong PyPyLong_AsUnsignedLong
PyAPI_FUNC(unsigned int) PyLong_AsUnsignedLong(struct _object *arg0);
#define PyLong_AsUnsignedLongLong PyPyLong_AsUnsignedLongLong
PyAPI_FUNC(Unsigned) PyLong_AsUnsignedLongLong(struct _object *arg0);
#define PyLong_AsUnsignedLongLongMask PyPyLong_AsUnsignedLongLongMask
PyAPI_FUNC(Unsigned) PyLong_AsUnsignedLongLongMask(struct _object *arg0);
#define PyLong_AsUnsignedLongMask PyPyLong_AsUnsignedLongMask
PyAPI_FUNC(unsigned int) PyLong_AsUnsignedLongMask(struct _object *arg0);
#define PyLong_AsVoidPtr PyPyLong_AsVoidPtr
PyAPI_FUNC(void *) PyLong_AsVoidPtr(struct _object *arg0);
#define PyLong_FromDouble PyPyLong_FromDouble
PyAPI_FUNC(struct _object *) PyLong_FromDouble(double arg0);
#define PyLong_FromLong PyPyLong_FromLong
PyAPI_FUNC(struct _object *) PyLong_FromLong(int arg0);
#define PyLong_FromLongLong PyPyLong_FromLongLong
PyAPI_FUNC(struct _object *) PyLong_FromLongLong(Signed arg0);
#define PyLong_FromSize_t PyPyLong_FromSize_t
PyAPI_FUNC(struct _object *) PyLong_FromSize_t(Unsigned arg0);
#define PyLong_FromSsize_t PyPyLong_FromSsize_t
PyAPI_FUNC(struct _object *) PyLong_FromSsize_t(Signed arg0);
#define PyLong_FromString PyPyLong_FromString
PyAPI_FUNC(struct _object *) PyLong_FromString(const char *arg0, char **arg1, int arg2);
#define PyLong_FromUnicode PyPyLong_FromUnicode
PyAPI_FUNC(struct _object *) PyLong_FromUnicode(wchar_t *arg0, Signed arg1, int arg2);
#define PyLong_FromUnicodeObject PyPyLong_FromUnicodeObject
PyAPI_FUNC(struct _object *) PyLong_FromUnicodeObject(struct _object *arg0, int arg1);
#define PyLong_FromUnsignedLong PyPyLong_FromUnsignedLong
PyAPI_FUNC(struct _object *) PyLong_FromUnsignedLong(unsigned int arg0);
#define PyLong_FromUnsignedLongLong PyPyLong_FromUnsignedLongLong
PyAPI_FUNC(struct _object *) PyLong_FromUnsignedLongLong(Unsigned arg0);
#define PyLong_FromVoidPtr PyPyLong_FromVoidPtr
PyAPI_FUNC(struct _object *) PyLong_FromVoidPtr(void *arg0);
#define PyMapping_Check PyPyMapping_Check
PyAPI_FUNC(int) PyMapping_Check(struct _object *arg0);
#define PyMapping_GetItemString PyPyMapping_GetItemString
PyAPI_FUNC(struct _object *) PyMapping_GetItemString(struct _object *arg0, const char *arg1);
#define PyMapping_HasKey PyPyMapping_HasKey
PyAPI_FUNC(int) PyMapping_HasKey(struct _object *arg0, struct _object *arg1);
#define PyMapping_HasKeyString PyPyMapping_HasKeyString
PyAPI_FUNC(int) PyMapping_HasKeyString(struct _object *arg0, const char *arg1);
#define PyMapping_Items PyPyMapping_Items
PyAPI_FUNC(struct _object *) PyMapping_Items(struct _object *arg0);
#define PyMapping_Keys PyPyMapping_Keys
PyAPI_FUNC(struct _object *) PyMapping_Keys(struct _object *arg0);
#define PyMapping_Length PyPyMapping_Length
PyAPI_FUNC(Signed) PyMapping_Length(struct _object *arg0);
#define PyMapping_SetItemString PyPyMapping_SetItemString
PyAPI_FUNC(int) PyMapping_SetItemString(struct _object *arg0, const char *arg1, struct _object *arg2);
#define PyMapping_Size PyPyMapping_Size
PyAPI_FUNC(Signed) PyMapping_Size(struct _object *arg0);
#define PyMapping_Values PyPyMapping_Values
PyAPI_FUNC(struct _object *) PyMapping_Values(struct _object *arg0);
#define PyMemoryView_Check PyPyMemoryView_Check
PyAPI_FUNC(int) PyMemoryView_Check(void * arg0);
#define PyMemoryView_CheckExact PyPyMemoryView_CheckExact
PyAPI_FUNC(int) PyMemoryView_CheckExact(void * arg0);
#define PyMemoryView_FromBuffer PyPyMemoryView_FromBuffer
PyAPI_FUNC(struct _object *) PyMemoryView_FromBuffer(struct bufferinfo *arg0);
#define PyMemoryView_FromMemory PyPyMemoryView_FromMemory
PyAPI_FUNC(PyObject *) PyMemoryView_FromMemory(char * arg0, Py_ssize_t arg1, int arg2);
#define PyMemoryView_FromObject PyPyMemoryView_FromObject
PyAPI_FUNC(struct _object *) PyMemoryView_FromObject(struct _object *arg0);
#define PyMemoryView_GetContiguous PyPyMemoryView_GetContiguous
PyAPI_FUNC(struct _object *) PyMemoryView_GetContiguous(struct _object *arg0, int arg1, char arg2);
#define PyMethodDescr_Check PyPyMethodDescr_Check
PyAPI_FUNC(int) PyMethodDescr_Check(void * arg0);
#define PyMethodDescr_CheckExact PyPyMethodDescr_CheckExact
PyAPI_FUNC(int) PyMethodDescr_CheckExact(void * arg0);
#define PyMethod_Check PyPyMethod_Check
PyAPI_FUNC(int) PyMethod_Check(void * arg0);
#define PyMethod_CheckExact PyPyMethod_CheckExact
PyAPI_FUNC(int) PyMethod_CheckExact(void * arg0);
#define PyMethod_Function PyPyMethod_Function
PyAPI_FUNC(struct _object *) PyMethod_Function(struct _object *arg0);
#define PyMethod_New PyPyMethod_New
PyAPI_FUNC(struct _object *) PyMethod_New(struct _object *arg0, struct _object *arg1);
#define PyMethod_Self PyPyMethod_Self
PyAPI_FUNC(struct _object *) PyMethod_Self(struct _object *arg0);
#define PyModule_AddFunctions PyPyModule_AddFunctions
PyAPI_FUNC(int) PyModule_AddFunctions(struct _object *arg0, struct PyMethodDef *arg1);
#define PyModule_Check PyPyModule_Check
PyAPI_FUNC(int) PyModule_Check(void * arg0);
#define PyModule_CheckExact PyPyModule_CheckExact
PyAPI_FUNC(int) PyModule_CheckExact(void * arg0);
#define PyModule_Create2 PyPyModule_Create2
PyAPI_FUNC(struct _object *) PyModule_Create2(struct PyModuleDef *arg0, int arg1);
#define PyModule_ExecDef PyPyModule_ExecDef
PyAPI_FUNC(int) PyModule_ExecDef(struct _object *arg0, struct PyModuleDef *arg1);
#define PyModule_GetDict PyPyModule_GetDict
PyAPI_FUNC(struct _object *) PyModule_GetDict(struct _object *arg0);
#define PyModule_GetName PyPyModule_GetName
PyAPI_FUNC(char *) PyModule_GetName(struct _object *arg0);
#define PyModule_New PyPyModule_New
PyAPI_FUNC(struct _object *) PyModule_New(const char *arg0);
#define PyModule_NewObject PyPyModule_NewObject
PyAPI_FUNC(struct _object *) PyModule_NewObject(struct _object *arg0);
#define PyNumber_Absolute PyPyNumber_Absolute
PyAPI_FUNC(struct _object *) PyNumber_Absolute(struct _object *arg0);
#define PyNumber_Add PyPyNumber_Add
PyAPI_FUNC(struct _object *) PyNumber_Add(struct _object *arg0, struct _object *arg1);
#define PyNumber_And PyPyNumber_And
PyAPI_FUNC(struct _object *) PyNumber_And(struct _object *arg0, struct _object *arg1);
#define PyNumber_AsSsize_t PyPyNumber_AsSsize_t
PyAPI_FUNC(Signed) PyNumber_AsSsize_t(struct _object *arg0, struct _object *arg1);
#define PyNumber_Check PyPyNumber_Check
PyAPI_FUNC(int) PyNumber_Check(struct _object *arg0);
#define PyNumber_Divide PyPyNumber_Divide
PyAPI_FUNC(struct _object *) PyNumber_Divide(struct _object *arg0, struct _object *arg1);
#define PyNumber_Divmod PyPyNumber_Divmod
PyAPI_FUNC(struct _object *) PyNumber_Divmod(struct _object *arg0, struct _object *arg1);
#define PyNumber_Float PyPyNumber_Float
PyAPI_FUNC(struct _object *) PyNumber_Float(struct _object *arg0);
#define PyNumber_FloorDivide PyPyNumber_FloorDivide
PyAPI_FUNC(struct _object *) PyNumber_FloorDivide(struct _object *arg0, struct _object *arg1);
#define PyNumber_InPlaceAdd PyPyNumber_InPlaceAdd
PyAPI_FUNC(struct _object *) PyNumber_InPlaceAdd(struct _object *arg0, struct _object *arg1);
#define PyNumber_InPlaceAnd PyPyNumber_InPlaceAnd
PyAPI_FUNC(struct _object *) PyNumber_InPlaceAnd(struct _object *arg0, struct _object *arg1);
#define PyNumber_InPlaceDivide PyPyNumber_InPlaceDivide
PyAPI_FUNC(struct _object *) PyNumber_InPlaceDivide(struct _object *arg0, struct _object *arg1);
#define PyNumber_InPlaceFloorDivide PyPyNumber_InPlaceFloorDivide
PyAPI_FUNC(struct _object *) PyNumber_InPlaceFloorDivide(struct _object *arg0, struct _object *arg1);
#define PyNumber_InPlaceLshift PyPyNumber_InPlaceLshift
PyAPI_FUNC(struct _object *) PyNumber_InPlaceLshift(struct _object *arg0, struct _object *arg1);
#define PyNumber_InPlaceMatrixMultiply PyPyNumber_InPlaceMatrixMultiply
PyAPI_FUNC(struct _object *) PyNumber_InPlaceMatrixMultiply(struct _object *arg0, struct _object *arg1);
#define PyNumber_InPlaceMultiply PyPyNumber_InPlaceMultiply
PyAPI_FUNC(struct _object *) PyNumber_InPlaceMultiply(struct _object *arg0, struct _object *arg1);
#define PyNumber_InPlaceOr PyPyNumber_InPlaceOr
PyAPI_FUNC(struct _object *) PyNumber_InPlaceOr(struct _object *arg0, struct _object *arg1);
#define PyNumber_InPlacePower PyPyNumber_InPlacePower
PyAPI_FUNC(struct _object *) PyNumber_InPlacePower(struct _object *arg0, struct _object *arg1, struct _object *arg2);
#define PyNumber_InPlaceRemainder PyPyNumber_InPlaceRemainder
PyAPI_FUNC(struct _object *) PyNumber_InPlaceRemainder(struct _object *arg0, struct _object *arg1);
#define PyNumber_InPlaceRshift PyPyNumber_InPlaceRshift
PyAPI_FUNC(struct _object *) PyNumber_InPlaceRshift(struct _object *arg0, struct _object *arg1);
#define PyNumber_InPlaceSubtract PyPyNumber_InPlaceSubtract
PyAPI_FUNC(struct _object *) PyNumber_InPlaceSubtract(struct _object *arg0, struct _object *arg1);
#define PyNumber_InPlaceTrueDivide PyPyNumber_InPlaceTrueDivide
PyAPI_FUNC(struct _object *) PyNumber_InPlaceTrueDivide(struct _object *arg0, struct _object *arg1);
#define PyNumber_InPlaceXor PyPyNumber_InPlaceXor
PyAPI_FUNC(struct _object *) PyNumber_InPlaceXor(struct _object *arg0, struct _object *arg1);
#define PyNumber_Index PyPyNumber_Index
PyAPI_FUNC(struct _object *) PyNumber_Index(struct _object *arg0);
#define PyNumber_Invert PyPyNumber_Invert
PyAPI_FUNC(struct _object *) PyNumber_Invert(struct _object *arg0);
#define PyNumber_Long PyPyNumber_Long
PyAPI_FUNC(struct _object *) PyNumber_Long(struct _object *arg0);
#define PyNumber_Lshift PyPyNumber_Lshift
PyAPI_FUNC(struct _object *) PyNumber_Lshift(struct _object *arg0, struct _object *arg1);
#define PyNumber_MatrixMultiply PyPyNumber_MatrixMultiply
PyAPI_FUNC(struct _object *) PyNumber_MatrixMultiply(struct _object *arg0, struct _object *arg1);
#define PyNumber_Multiply PyPyNumber_Multiply
PyAPI_FUNC(struct _object *) PyNumber_Multiply(struct _object *arg0, struct _object *arg1);
#define PyNumber_Negative PyPyNumber_Negative
PyAPI_FUNC(struct _object *) PyNumber_Negative(struct _object *arg0);
#define PyNumber_Or PyPyNumber_Or
PyAPI_FUNC(struct _object *) PyNumber_Or(struct _object *arg0, struct _object *arg1);
#define PyNumber_Positive PyPyNumber_Positive
PyAPI_FUNC(struct _object *) PyNumber_Positive(struct _object *arg0);
#define PyNumber_Power PyPyNumber_Power
PyAPI_FUNC(struct _object *) PyNumber_Power(struct _object *arg0, struct _object *arg1, struct _object *arg2);
#define PyNumber_Remainder PyPyNumber_Remainder
PyAPI_FUNC(struct _object *) PyNumber_Remainder(struct _object *arg0, struct _object *arg1);
#define PyNumber_Rshift PyPyNumber_Rshift
PyAPI_FUNC(struct _object *) PyNumber_Rshift(struct _object *arg0, struct _object *arg1);
#define PyNumber_Subtract PyPyNumber_Subtract
PyAPI_FUNC(struct _object *) PyNumber_Subtract(struct _object *arg0, struct _object *arg1);
#define PyNumber_ToBase PyPyNumber_ToBase
PyAPI_FUNC(struct _object *) PyNumber_ToBase(struct _object *arg0, int arg1);
#define PyNumber_TrueDivide PyPyNumber_TrueDivide
PyAPI_FUNC(struct _object *) PyNumber_TrueDivide(struct _object *arg0, struct _object *arg1);
#define PyNumber_Xor PyPyNumber_Xor
PyAPI_FUNC(struct _object *) PyNumber_Xor(struct _object *arg0, struct _object *arg1);
#define PyOS_AfterFork PyPyOS_AfterFork
PyAPI_FUNC(void) PyOS_AfterFork(void);
#define PyOS_FSPath PyPyOS_FSPath
PyAPI_FUNC(struct _object *) PyOS_FSPath(struct _object *arg0);
#define PyOS_InterruptOccurred PyPyOS_InterruptOccurred
PyAPI_FUNC(int) PyOS_InterruptOccurred(void);
#define PyOS_double_to_string PyPyOS_double_to_string
PyAPI_FUNC(char *) PyOS_double_to_string(double arg0, char arg1, int arg2, int arg3, int *arg4);
#define PyOS_string_to_double PyPyOS_string_to_double
PyAPI_FUNC(double) PyOS_string_to_double(const char *arg0, char **arg1, struct _object *arg2);
#define PyObject_ASCII PyPyObject_ASCII
PyAPI_FUNC(struct _object *) PyObject_ASCII(struct _object *arg0);
#define PyObject_AsCharBuffer PyPyObject_AsCharBuffer
PyAPI_FUNC(int) PyObject_AsCharBuffer(struct _object *arg0, const char **arg1, Signed *arg2);
#define PyObject_AsFileDescriptor PyPyObject_AsFileDescriptor
PyAPI_FUNC(int) PyObject_AsFileDescriptor(struct _object *arg0);
#define PyObject_Bytes PyPyObject_Bytes
PyAPI_FUNC(PyObject *) PyObject_Bytes(PyObject * arg0);
#define PyObject_Call PyPyObject_Call
PyAPI_FUNC(struct _object *) PyObject_Call(struct _object *arg0, struct _object *arg1, struct _object *arg2);
#define PyObject_CallObject PyPyObject_CallObject
PyAPI_FUNC(struct _object *) PyObject_CallObject(struct _object *arg0, struct _object *arg1);
#define PyObject_Calloc PyPyObject_Calloc
PyAPI_FUNC(void *) PyObject_Calloc(Unsigned arg0, Unsigned arg1);
#define PyObject_ClearWeakRefs PyPyObject_ClearWeakRefs
PyAPI_FUNC(void) PyObject_ClearWeakRefs(struct _object *arg0);
#define PyObject_DelAttr PyPyObject_DelAttr
PyAPI_FUNC(int) PyObject_DelAttr(struct _object *arg0, struct _object *arg1);
#define PyObject_DelAttrString PyPyObject_DelAttrString
PyAPI_FUNC(int) PyObject_DelAttrString(struct _object *arg0, const char *arg1);
#define PyObject_DelItem PyPyObject_DelItem
PyAPI_FUNC(int) PyObject_DelItem(struct _object *arg0, struct _object *arg1);
#define PyObject_Dir PyPyObject_Dir
PyAPI_FUNC(struct _object *) PyObject_Dir(struct _object *arg0);
#define PyObject_Format PyPyObject_Format
PyAPI_FUNC(struct _object *) PyObject_Format(struct _object *arg0, struct _object *arg1);
#define PyObject_GenericGetAttr PyPyObject_GenericGetAttr
PyAPI_FUNC(struct _object *) PyObject_GenericGetAttr(struct _object *arg0, struct _object *arg1);
#define PyObject_GenericGetDict PyPyObject_GenericGetDict
PyAPI_FUNC(struct _object *) PyObject_GenericGetDict(struct _object *arg0, void *arg1);
#define PyObject_GenericSetAttr PyPyObject_GenericSetAttr
PyAPI_FUNC(int) PyObject_GenericSetAttr(struct _object *arg0, struct _object *arg1, struct _object *arg2);
#define PyObject_GenericSetDict PyPyObject_GenericSetDict
PyAPI_FUNC(int) PyObject_GenericSetDict(struct _object *arg0, struct _object *arg1, void *arg2);
#define PyObject_GetAttr PyPyObject_GetAttr
PyAPI_FUNC(struct _object *) PyObject_GetAttr(struct _object *arg0, struct _object *arg1);
#define PyObject_GetAttrString PyPyObject_GetAttrString
PyAPI_FUNC(struct _object *) PyObject_GetAttrString(struct _object *arg0, const char *arg1);
#define PyObject_GetItem PyPyObject_GetItem
PyAPI_FUNC(struct _object *) PyObject_GetItem(struct _object *arg0, struct _object *arg1);
#define PyObject_GetIter PyPyObject_GetIter
PyAPI_FUNC(struct _object *) PyObject_GetIter(struct _object *arg0);
#define PyObject_HasAttr PyPyObject_HasAttr
PyAPI_FUNC(int) PyObject_HasAttr(struct _object *arg0, struct _object *arg1);
#define PyObject_HasAttrString PyPyObject_HasAttrString
PyAPI_FUNC(int) PyObject_HasAttrString(struct _object *arg0, const char *arg1);
#define PyObject_Hash PyPyObject_Hash
PyAPI_FUNC(Signed) PyObject_Hash(struct _object *arg0);
#define PyObject_HashNotImplemented PyPyObject_HashNotImplemented
PyAPI_FUNC(Signed) PyObject_HashNotImplemented(struct _object *arg0);
#define PyObject_IsInstance PyPyObject_IsInstance
PyAPI_FUNC(int) PyObject_IsInstance(struct _object *arg0, struct _object *arg1);
#define PyObject_IsSubclass PyPyObject_IsSubclass
PyAPI_FUNC(int) PyObject_IsSubclass(struct _object *arg0, struct _object *arg1);
#define PyObject_IsTrue PyPyObject_IsTrue
PyAPI_FUNC(int) PyObject_IsTrue(struct _object *arg0);
#define PyObject_LengthHint PyPyObject_LengthHint
PyAPI_FUNC(Py_ssize_t) PyObject_LengthHint(PyObject * arg0, Py_ssize_t arg1);
#define PyObject_Malloc PyPyObject_Malloc
PyAPI_FUNC(void *) PyObject_Malloc(Unsigned arg0);
#define PyObject_Not PyPyObject_Not
PyAPI_FUNC(int) PyObject_Not(struct _object *arg0);
#define PyObject_Print PyPyObject_Print
PyAPI_FUNC(int) PyObject_Print(struct _object *arg0, FILE *arg1, int arg2);
#define PyObject_Realloc PyPyObject_Realloc
PyAPI_FUNC(void *) PyObject_Realloc(void *arg0, Unsigned arg1);
#define PyObject_Repr PyPyObject_Repr
PyAPI_FUNC(struct _object *) PyObject_Repr(struct _object *arg0);
#define PyObject_RichCompare PyPyObject_RichCompare
PyAPI_FUNC(struct _object *) PyObject_RichCompare(struct _object *arg0, struct _object *arg1, int arg2);
#define PyObject_RichCompareBool PyPyObject_RichCompareBool
PyAPI_FUNC(int) PyObject_RichCompareBool(struct _object *arg0, struct _object *arg1, int arg2);
#define PyObject_SelfIter PyPyObject_SelfIter
PyAPI_FUNC(struct _object *) PyObject_SelfIter(struct _object *arg0);
#define PyObject_SetAttr PyPyObject_SetAttr
PyAPI_FUNC(int) PyObject_SetAttr(struct _object *arg0, struct _object *arg1, struct _object *arg2);
#define PyObject_SetAttrString PyPyObject_SetAttrString
PyAPI_FUNC(int) PyObject_SetAttrString(struct _object *arg0, const char *arg1, struct _object *arg2);
#define PyObject_SetItem PyPyObject_SetItem
PyAPI_FUNC(int) PyObject_SetItem(struct _object *arg0, struct _object *arg1, struct _object *arg2);
#define PyObject_Size PyPyObject_Size
PyAPI_FUNC(Signed) PyObject_Size(struct _object *arg0);
#define PyObject_Str PyPyObject_Str
PyAPI_FUNC(struct _object *) PyObject_Str(struct _object *arg0);
#define PyObject_Type PyPyObject_Type
PyAPI_FUNC(struct _object *) PyObject_Type(struct _object *arg0);
#define PyObject_Unicode PyPyObject_Unicode
PyAPI_FUNC(struct _object *) PyObject_Unicode(struct _object *arg0);
#define PyObject_Vectorcall PyPyObject_Vectorcall
PyAPI_FUNC(PyObject *) PyObject_Vectorcall(PyObject * arg0, PyObject * const * arg1, size_t arg2, PyObject * arg3);
#define PyObject_VectorcallDict PyPyObject_VectorcallDict
PyAPI_FUNC(PyObject *) PyObject_VectorcallDict(PyObject * arg0, PyObject * const * arg1, size_t arg2, PyObject * arg3);
#define PyPyUnicode_Check PyPyUnicode_Check
PyAPI_FUNC(int) PyPyUnicode_Check(void * arg0);
#define PyPyUnicode_CheckExact PyPyUnicode_CheckExact
PyAPI_FUNC(int) PyPyUnicode_CheckExact(void * arg0);
#define PyRun_File PyPyRun_File
PyAPI_FUNC(struct _object *) PyRun_File(FILE *arg0, const char *arg1, int arg2, struct _object *arg3, struct _object *arg4);
#define PyRun_SimpleString PyPyRun_SimpleString
PyAPI_FUNC(int) PyRun_SimpleString(const char *arg0);
#define PyRun_String PyPyRun_String
PyAPI_FUNC(struct _object *) PyRun_String(const char *arg0, int arg1, struct _object *arg2, struct _object *arg3);
#define PyRun_StringFlags PyPyRun_StringFlags
PyAPI_FUNC(struct _object *) PyRun_StringFlags(const char *arg0, int arg1, struct _object *arg2, struct _object *arg3, PyCompilerFlags *arg4);
#define PySeqIter_New PyPySeqIter_New
PyAPI_FUNC(struct _object *) PySeqIter_New(struct _object *arg0);
#define PySequence_Check PyPySequence_Check
PyAPI_FUNC(int) PySequence_Check(struct _object *arg0);
#define PySequence_Concat PyPySequence_Concat
PyAPI_FUNC(struct _object *) PySequence_Concat(struct _object *arg0, struct _object *arg1);
#define PySequence_Contains PyPySequence_Contains
PyAPI_FUNC(int) PySequence_Contains(struct _object *arg0, struct _object *arg1);
#define PySequence_DelItem PyPySequence_DelItem
PyAPI_FUNC(int) PySequence_DelItem(struct _object *arg0, Signed arg1);
#define PySequence_DelSlice PyPySequence_DelSlice
PyAPI_FUNC(int) PySequence_DelSlice(struct _object *arg0, Signed arg1, Signed arg2);
#define PySequence_Fast PyPySequence_Fast
PyAPI_FUNC(struct _object *) PySequence_Fast(struct _object *arg0, const char *arg1);
#define PySequence_Fast_GET_ITEM PyPySequence_Fast_GET_ITEM
PyAPI_FUNC(struct _object *) PySequence_Fast_GET_ITEM(void *arg0, Signed arg1);
#define PySequence_Fast_GET_SIZE PyPySequence_Fast_GET_SIZE
PyAPI_FUNC(Signed) PySequence_Fast_GET_SIZE(void *arg0);
#define PySequence_Fast_ITEMS PyPySequence_Fast_ITEMS
PyAPI_FUNC(struct _object **) PySequence_Fast_ITEMS(void *arg0);
#define PySequence_GetItem PyPySequence_GetItem
PyAPI_FUNC(struct _object *) PySequence_GetItem(struct _object *arg0, Signed arg1);
#define PySequence_GetSlice PyPySequence_GetSlice
PyAPI_FUNC(struct _object *) PySequence_GetSlice(struct _object *arg0, Signed arg1, Signed arg2);
#define PySequence_ITEM PyPySequence_ITEM
PyAPI_FUNC(struct _object *) PySequence_ITEM(void *arg0, Signed arg1);
#define PySequence_InPlaceConcat PyPySequence_InPlaceConcat
PyAPI_FUNC(struct _object *) PySequence_InPlaceConcat(struct _object *arg0, struct _object *arg1);
#define PySequence_InPlaceRepeat PyPySequence_InPlaceRepeat
PyAPI_FUNC(struct _object *) PySequence_InPlaceRepeat(struct _object *arg0, Signed arg1);
#define PySequence_Index PyPySequence_Index
PyAPI_FUNC(Signed) PySequence_Index(struct _object *arg0, struct _object *arg1);
#define PySequence_Length PyPySequence_Length
PyAPI_FUNC(Signed) PySequence_Length(struct _object *arg0);
#define PySequence_List PyPySequence_List
PyAPI_FUNC(struct _object *) PySequence_List(struct _object *arg0);
#define PySequence_Repeat PyPySequence_Repeat
PyAPI_FUNC(struct _object *) PySequence_Repeat(struct _object *arg0, Signed arg1);
#define PySequence_SetItem PyPySequence_SetItem
PyAPI_FUNC(int) PySequence_SetItem(struct _object *arg0, Signed arg1, struct _object *arg2);
#define PySequence_SetSlice PyPySequence_SetSlice
PyAPI_FUNC(int) PySequence_SetSlice(struct _object *arg0, Signed arg1, Signed arg2, struct _object *arg3);
#define PySequence_Size PyPySequence_Size
PyAPI_FUNC(Signed) PySequence_Size(struct _object *arg0);
#define PySequence_Tuple PyPySequence_Tuple
PyAPI_FUNC(struct _object *) PySequence_Tuple(struct _object *arg0);
#define PySet_Add PyPySet_Add
PyAPI_FUNC(int) PySet_Add(struct _object *arg0, struct _object *arg1);
#define PySet_Check PyPySet_Check
PyAPI_FUNC(int) PySet_Check(void * arg0);
#define PySet_CheckExact PyPySet_CheckExact
PyAPI_FUNC(int) PySet_CheckExact(void * arg0);
#define PySet_Clear PyPySet_Clear
PyAPI_FUNC(int) PySet_Clear(struct _object *arg0);
#define PySet_Contains PyPySet_Contains
PyAPI_FUNC(int) PySet_Contains(struct _object *arg0, struct _object *arg1);
#define PySet_Discard PyPySet_Discard
PyAPI_FUNC(int) PySet_Discard(struct _object *arg0, struct _object *arg1);
#define PySet_GET_SIZE PyPySet_GET_SIZE
PyAPI_FUNC(Signed) PySet_GET_SIZE(void *arg0);
#define PySet_New PyPySet_New
PyAPI_FUNC(struct _object *) PySet_New(struct _object *arg0);
#define PySet_Pop PyPySet_Pop
PyAPI_FUNC(struct _object *) PySet_Pop(struct _object *arg0);
#define PySet_Size PyPySet_Size
PyAPI_FUNC(Signed) PySet_Size(struct _object *arg0);
#define PySlice_GetIndices PyPySlice_GetIndices
PyAPI_FUNC(int) PySlice_GetIndices(struct _object *arg0, Signed arg1, Signed *arg2, Signed *arg3, Signed *arg4);
#define PySlice_GetIndicesEx PyPySlice_GetIndicesEx
PyAPI_FUNC(int) PySlice_GetIndicesEx(struct _object *arg0, Signed arg1, Signed *arg2, Signed *arg3, Signed *arg4, Signed *arg5);
#define PySlice_New PyPySlice_New
PyAPI_FUNC(struct _object *) PySlice_New(struct _object *arg0, struct _object *arg1, struct _object *arg2);
#define PySlice_Unpack PyPySlice_Unpack
PyAPI_FUNC(int) PySlice_Unpack(struct _object *arg0, Signed *arg1, Signed *arg2, Signed *arg3);
#define PyState_AddModule PyPyState_AddModule
PyAPI_FUNC(int) PyState_AddModule(struct _object *arg0, struct PyModuleDef *arg1);
#define PyState_RemoveModule PyPyState_RemoveModule
PyAPI_FUNC(int) PyState_RemoveModule(struct PyModuleDef *arg0);
#define PyStaticMethod_New PyPyStaticMethod_New
PyAPI_FUNC(struct _object *) PyStaticMethod_New(struct _object *arg0);
#define PySys_GetObject PyPySys_GetObject
PyAPI_FUNC(struct _object *) PySys_GetObject(const char *arg0);
#define PySys_SetObject PyPySys_SetObject
PyAPI_FUNC(int) PySys_SetObject(const char *arg0, struct _object *arg1);
#define PyTZInfo_Check PyPyTZInfo_Check
PyAPI_FUNC(int) PyTZInfo_Check(struct _object *arg0);
#define PyTZInfo_CheckExact PyPyTZInfo_CheckExact
PyAPI_FUNC(int) PyTZInfo_CheckExact(struct _object *arg0);
#define PyThreadState_Clear PyPyThreadState_Clear
PyAPI_FUNC(void) PyThreadState_Clear(PyThreadState *arg0);
#define PyThreadState_Delete PyPyThreadState_Delete
PyAPI_FUNC(void) PyThreadState_Delete(PyThreadState *arg0);
#define PyThreadState_DeleteCurrent PyPyThreadState_DeleteCurrent
PyAPI_FUNC(void) PyThreadState_DeleteCurrent(void);
#define PyThreadState_Get PyPyThreadState_Get
PyAPI_FUNC(PyThreadState *) PyThreadState_Get(void);
#define PyThreadState_GetDict PyPyThreadState_GetDict
PyAPI_FUNC(struct _object *) PyThreadState_GetDict(void);
#define PyThreadState_New PyPyThreadState_New
PyAPI_FUNC(PyThreadState *) PyThreadState_New(PyInterpreterState *arg0);
#define PyThreadState_Swap PyPyThreadState_Swap
PyAPI_FUNC(PyThreadState *) PyThreadState_Swap(PyThreadState *arg0);
#define PyThread_exit_thread PyPyThread_exit_thread
PyAPI_FUNC(struct _object *) PyThread_exit_thread(void);
#define PyTime_Check PyPyTime_Check
PyAPI_FUNC(int) PyTime_Check(struct _object *arg0);
#define PyTime_CheckExact PyPyTime_CheckExact
PyAPI_FUNC(int) PyTime_CheckExact(struct _object *arg0);
#define PyTraceBack_Check PyPyTraceBack_Check
PyAPI_FUNC(int) PyTraceBack_Check(struct _object *arg0);
#define PyTraceBack_Here PyPyTraceBack_Here
PyAPI_FUNC(int) PyTraceBack_Here(PyFrameObject *arg0);
#define PyTraceBack_Print PyPyTraceBack_Print
PyAPI_FUNC(int) PyTraceBack_Print(struct _object *arg0, struct _object *arg1);
#define PyTuple_GetItem PyPyTuple_GetItem
PyAPI_FUNC(struct _object *) PyTuple_GetItem(struct _object *arg0, Signed arg1);
#define PyTuple_GetSlice PyPyTuple_GetSlice
PyAPI_FUNC(struct _object *) PyTuple_GetSlice(struct _object *arg0, Signed arg1, Signed arg2);
#define PyTuple_SetItem PyPyTuple_SetItem
PyAPI_FUNC(int) PyTuple_SetItem(struct _object *arg0, Signed arg1, struct _object *arg2);
#define PyTuple_Size PyPyTuple_Size
PyAPI_FUNC(Signed) PyTuple_Size(struct _object *arg0);
#define PyType_FromModuleAndSpec PyPyType_FromModuleAndSpec
PyAPI_FUNC(PyObject *) PyType_FromModuleAndSpec(PyObject * arg0, PyType_Spec * arg1, PyObject * arg2);
#define PyType_FromSpecWithBases PyPyType_FromSpecWithBases
PyAPI_FUNC(PyObject *) PyType_FromSpecWithBases(PyType_Spec * arg0, PyObject * arg1);
#define PyType_GenericNew PyPyType_GenericNew
PyAPI_FUNC(struct _object *) PyType_GenericNew(struct _typeobject *arg0, struct _object *arg1, struct _object *arg2);
#define PyType_GetSlot PyPyType_GetSlot
PyAPI_FUNC(void *) PyType_GetSlot(struct _typeobject *arg0, int arg1);
#define PyType_IsSubtype PyPyType_IsSubtype
PyAPI_FUNC(int) PyType_IsSubtype(struct _typeobject *arg0, struct _typeobject *arg1);
#define PyType_Modified PyPyType_Modified
PyAPI_FUNC(void) PyType_Modified(struct _typeobject *arg0);
#define PyType_Ready PyPyType_Ready
PyAPI_FUNC(int) PyType_Ready(struct _typeobject *arg0);
#define PyUnicode_AsASCIIString PyPyUnicode_AsASCIIString
PyAPI_FUNC(struct _object *) PyUnicode_AsASCIIString(struct _object *arg0);
#define PyUnicode_AsEncodedObject PyPyUnicode_AsEncodedObject
PyAPI_FUNC(struct _object *) PyUnicode_AsEncodedObject(struct _object *arg0, const char *arg1, const char *arg2);
#define PyUnicode_AsEncodedString PyPyUnicode_AsEncodedString
PyAPI_FUNC(struct _object *) PyUnicode_AsEncodedString(struct _object *arg0, const char *arg1, const char *arg2);
#define PyUnicode_AsLatin1String PyPyUnicode_AsLatin1String
PyAPI_FUNC(struct _object *) PyUnicode_AsLatin1String(struct _object *arg0);
#define PyUnicode_AsMBCSString PyPyUnicode_AsMBCSString
PyAPI_FUNC(struct _object *) PyUnicode_AsMBCSString(struct _object *arg0);
#define PyUnicode_AsUCS4 PyPyUnicode_AsUCS4
PyAPI_FUNC(Py_UCS4 *) PyUnicode_AsUCS4(PyObject * arg0, Py_UCS4 * arg1, Py_ssize_t arg2, int arg3);
#define PyUnicode_AsUCS4Copy PyPyUnicode_AsUCS4Copy
PyAPI_FUNC(Py_UCS4 *) PyUnicode_AsUCS4Copy(PyObject * arg0);
#define PyUnicode_AsUTF16String PyPyUnicode_AsUTF16String
PyAPI_FUNC(struct _object *) PyUnicode_AsUTF16String(struct _object *arg0);
#define PyUnicode_AsUTF32String PyPyUnicode_AsUTF32String
PyAPI_FUNC(struct _object *) PyUnicode_AsUTF32String(struct _object *arg0);
#define PyUnicode_AsUTF8 PyPyUnicode_AsUTF8
PyAPI_FUNC(char *) PyUnicode_AsUTF8(PyObject * arg0);
#define PyUnicode_AsUTF8AndSize PyPyUnicode_AsUTF8AndSize
PyAPI_FUNC(char *) PyUnicode_AsUTF8AndSize(PyObject * arg0, Py_ssize_t * arg1);
#define PyUnicode_AsUTF8String PyPyUnicode_AsUTF8String
PyAPI_FUNC(struct _object *) PyUnicode_AsUTF8String(struct _object *arg0);
#define PyUnicode_AsUnicode PyPyUnicode_AsUnicode
PyAPI_FUNC(Py_UNICODE *) PyUnicode_AsUnicode(PyObject * arg0);
#define PyUnicode_AsUnicodeAndSize PyPyUnicode_AsUnicodeAndSize
PyAPI_FUNC(Py_UNICODE *) PyUnicode_AsUnicodeAndSize(PyObject * arg0, Py_ssize_t * arg1);
#define PyUnicode_AsUnicodeEscapeString PyPyUnicode_AsUnicodeEscapeString
PyAPI_FUNC(struct _object *) PyUnicode_AsUnicodeEscapeString(struct _object *arg0);
#define PyUnicode_AsWideChar PyPyUnicode_AsWideChar
PyAPI_FUNC(Signed) PyUnicode_AsWideChar(struct _object *arg0, wchar_t *arg1, Signed arg2);
#define PyUnicode_Compare PyPyUnicode_Compare
PyAPI_FUNC(int) PyUnicode_Compare(struct _object *arg0, struct _object *arg1);
#define PyUnicode_CompareWithASCIIString PyPyUnicode_CompareWithASCIIString
PyAPI_FUNC(int) PyUnicode_CompareWithASCIIString(struct _object *arg0, const char *arg1);
#define PyUnicode_Concat PyPyUnicode_Concat
PyAPI_FUNC(struct _object *) PyUnicode_Concat(struct _object *arg0, struct _object *arg1);
#define PyUnicode_Contains PyPyUnicode_Contains
PyAPI_FUNC(int) PyUnicode_Contains(struct _object *arg0, struct _object *arg1);
#define PyUnicode_Count PyPyUnicode_Count
PyAPI_FUNC(Signed) PyUnicode_Count(struct _object *arg0, struct _object *arg1, Signed arg2, Signed arg3);
#define PyUnicode_Decode PyPyUnicode_Decode
PyAPI_FUNC(struct _object *) PyUnicode_Decode(const char *arg0, Signed arg1, const char *arg2, const char *arg3);
#define PyUnicode_DecodeASCII PyPyUnicode_DecodeASCII
PyAPI_FUNC(struct _object *) PyUnicode_DecodeASCII(const char *arg0, Signed arg1, const char *arg2);
#define PyUnicode_DecodeFSDefault PyPyUnicode_DecodeFSDefault
PyAPI_FUNC(struct _object *) PyUnicode_DecodeFSDefault(const char *arg0);
#define PyUnicode_DecodeFSDefaultAndSize PyPyUnicode_DecodeFSDefaultAndSize
PyAPI_FUNC(struct _object *) PyUnicode_DecodeFSDefaultAndSize(const char *arg0, Signed arg1);
#define PyUnicode_DecodeLatin1 PyPyUnicode_DecodeLatin1
PyAPI_FUNC(struct _object *) PyUnicode_DecodeLatin1(const char *arg0, Signed arg1, const char *arg2);
#define PyUnicode_DecodeLocale PyPyUnicode_DecodeLocale
PyAPI_FUNC(struct _object *) PyUnicode_DecodeLocale(const char *arg0, const char *arg1);
#define PyUnicode_DecodeLocaleAndSize PyPyUnicode_DecodeLocaleAndSize
PyAPI_FUNC(struct _object *) PyUnicode_DecodeLocaleAndSize(const char *arg0, Signed arg1, const char *arg2);
#define PyUnicode_DecodeMBCS PyPyUnicode_DecodeMBCS
PyAPI_FUNC(struct _object *) PyUnicode_DecodeMBCS(const char *arg0, Signed arg1, const char *arg2);
#define PyUnicode_DecodeUTF16 PyPyUnicode_DecodeUTF16
PyAPI_FUNC(struct _object *) PyUnicode_DecodeUTF16(const char *arg0, Signed arg1, const char *arg2, int *arg3);
#define PyUnicode_DecodeUTF32 PyPyUnicode_DecodeUTF32
PyAPI_FUNC(struct _object *) PyUnicode_DecodeUTF32(const char *arg0, Signed arg1, const char *arg2, int *arg3);
#define PyUnicode_DecodeUTF8 PyPyUnicode_DecodeUTF8
PyAPI_FUNC(struct _object *) PyUnicode_DecodeUTF8(const char *arg0, Signed arg1, const char *arg2);
#define PyUnicode_EncodeASCII PyPyUnicode_EncodeASCII
PyAPI_FUNC(struct _object *) PyUnicode_EncodeASCII(const wchar_t *arg0, Signed arg1, const char *arg2);
#define PyUnicode_EncodeDecimal PyPyUnicode_EncodeDecimal
PyAPI_FUNC(int) PyUnicode_EncodeDecimal(wchar_t *arg0, Signed arg1, char *arg2, const char *arg3);
#define PyUnicode_EncodeFSDefault PyPyUnicode_EncodeFSDefault
PyAPI_FUNC(struct _object *) PyUnicode_EncodeFSDefault(struct _object *arg0);
#define PyUnicode_EncodeLatin1 PyPyUnicode_EncodeLatin1
PyAPI_FUNC(struct _object *) PyUnicode_EncodeLatin1(const wchar_t *arg0, Signed arg1, const char *arg2);
#define PyUnicode_EncodeLocale PyPyUnicode_EncodeLocale
PyAPI_FUNC(struct _object *) PyUnicode_EncodeLocale(struct _object *arg0, const char *arg1);
#define PyUnicode_EncodeMBCS PyPyUnicode_EncodeMBCS
PyAPI_FUNC(struct _object *) PyUnicode_EncodeMBCS(const wchar_t *arg0, Signed arg1, const char *arg2);
#define PyUnicode_EncodeUTF8 PyPyUnicode_EncodeUTF8
PyAPI_FUNC(struct _object *) PyUnicode_EncodeUTF8(const wchar_t *arg0, Signed arg1, const char *arg2);
#define PyUnicode_FSConverter PyPyUnicode_FSConverter
PyAPI_FUNC(int) PyUnicode_FSConverter(struct _object *arg0, struct _object **arg1);
#define PyUnicode_FSDecoder PyPyUnicode_FSDecoder
PyAPI_FUNC(int) PyUnicode_FSDecoder(struct _object *arg0, struct _object **arg1);
#define PyUnicode_Find PyPyUnicode_Find
PyAPI_FUNC(Signed) PyUnicode_Find(struct _object *arg0, struct _object *arg1, Signed arg2, Signed arg3, int arg4);
#define PyUnicode_FindChar PyPyUnicode_FindChar
PyAPI_FUNC(Py_ssize_t) PyUnicode_FindChar(PyObject * arg0, Py_UCS4 arg1, Py_ssize_t arg2, Py_ssize_t arg3, int arg4);
#define PyUnicode_Format PyPyUnicode_Format
PyAPI_FUNC(struct _object *) PyUnicode_Format(struct _object *arg0, struct _object *arg1);
#define PyUnicode_FromEncodedObject PyPyUnicode_FromEncodedObject
PyAPI_FUNC(struct _object *) PyUnicode_FromEncodedObject(struct _object *arg0, const char *arg1, const char *arg2);
#define PyUnicode_FromKindAndData PyPyUnicode_FromKindAndData
PyAPI_FUNC(PyObject *) PyUnicode_FromKindAndData(int arg0, void const * arg1, Py_ssize_t arg2);
#define PyUnicode_FromObject PyPyUnicode_FromObject
PyAPI_FUNC(struct _object *) PyUnicode_FromObject(struct _object *arg0);
#define PyUnicode_FromOrdinal PyPyUnicode_FromOrdinal
PyAPI_FUNC(struct _object *) PyUnicode_FromOrdinal(int arg0);
#define PyUnicode_FromString PyPyUnicode_FromString
PyAPI_FUNC(struct _object *) PyUnicode_FromString(const char *arg0);
#define PyUnicode_FromStringAndSize PyPyUnicode_FromStringAndSize
PyAPI_FUNC(struct _object *) PyUnicode_FromStringAndSize(const char *arg0, Signed arg1);
#define PyUnicode_FromUnicode PyPyUnicode_FromUnicode
PyAPI_FUNC(struct _object *) PyUnicode_FromUnicode(const wchar_t *arg0, Signed arg1);
#define PyUnicode_GetDefaultEncoding PyPyUnicode_GetDefaultEncoding
PyAPI_FUNC(char *) PyUnicode_GetDefaultEncoding(void);
#define PyUnicode_GetMax PyPyUnicode_GetMax
PyAPI_FUNC(wchar_t) PyUnicode_GetMax(void);
#define PyUnicode_InternFromString PyPyUnicode_InternFromString
PyAPI_FUNC(struct _object *) PyUnicode_InternFromString(const char *arg0);
#define PyUnicode_InternInPlace PyPyUnicode_InternInPlace
PyAPI_FUNC(void) PyUnicode_InternInPlace(struct _object **arg0);
#define PyUnicode_Join PyPyUnicode_Join
PyAPI_FUNC(struct _object *) PyUnicode_Join(struct _object *arg0, struct _object *arg1);
#define PyUnicode_New PyPyUnicode_New
PyAPI_FUNC(PyObject *) PyUnicode_New(Py_ssize_t arg0, Py_UCS4 arg1);
#define PyUnicode_ReadChar PyPyUnicode_ReadChar
PyAPI_FUNC(Py_UCS4) PyUnicode_ReadChar(PyObject * arg0, Py_ssize_t arg1);
#define PyUnicode_Replace PyPyUnicode_Replace
PyAPI_FUNC(struct _object *) PyUnicode_Replace(struct _object *arg0, struct _object *arg1, struct _object *arg2, Signed arg3);
#define PyUnicode_Resize PyPyUnicode_Resize
PyAPI_FUNC(int) PyUnicode_Resize(struct _object **arg0, Signed arg1);
#define PyUnicode_Split PyPyUnicode_Split
PyAPI_FUNC(struct _object *) PyUnicode_Split(struct _object *arg0, struct _object *arg1, Signed arg2);
#define PyUnicode_Splitlines PyPyUnicode_Splitlines
PyAPI_FUNC(struct _object *) PyUnicode_Splitlines(struct _object *arg0, int arg1);
#define PyUnicode_Substring PyPyUnicode_Substring
PyAPI_FUNC(struct _object *) PyUnicode_Substring(struct _object *arg0, Signed arg1, Signed arg2);
#define PyUnicode_Tailmatch PyPyUnicode_Tailmatch
PyAPI_FUNC(int) PyUnicode_Tailmatch(struct _object *arg0, struct _object *arg1, Signed arg2, Signed arg3, int arg4);
#define PyUnicode_TransformDecimalToASCII PyPyUnicode_TransformDecimalToASCII
PyAPI_FUNC(struct _object *) PyUnicode_TransformDecimalToASCII(wchar_t *arg0, Signed arg1);
#define PyUnicode_WriteChar PyPyUnicode_WriteChar
PyAPI_FUNC(int) PyUnicode_WriteChar(PyObject * arg0, Py_ssize_t arg1, Py_UCS4 arg2);
#define PyWeakref_Check PyPyWeakref_Check
PyAPI_FUNC(int) PyWeakref_Check(struct _object *arg0);
#define PyWeakref_CheckProxy PyPyWeakref_CheckProxy
PyAPI_FUNC(int) PyWeakref_CheckProxy(struct _object *arg0);
#define PyWeakref_CheckRef PyPyWeakref_CheckRef
PyAPI_FUNC(int) PyWeakref_CheckRef(struct _object *arg0);
#define PyWeakref_CheckRefExact PyPyWeakref_CheckRefExact
PyAPI_FUNC(int) PyWeakref_CheckRefExact(struct _object *arg0);
#define PyWeakref_GET_OBJECT PyPyWeakref_GET_OBJECT
PyAPI_FUNC(struct _object *) PyWeakref_GET_OBJECT(void *arg0);
#define PyWeakref_GetObject PyPyWeakref_GetObject
PyAPI_FUNC(struct _object *) PyWeakref_GetObject(struct _object *arg0);
#define PyWeakref_LockObject PyPyWeakref_LockObject
PyAPI_FUNC(struct _object *) PyWeakref_LockObject(struct _object *arg0);
#define PyWeakref_NewProxy PyPyWeakref_NewProxy
PyAPI_FUNC(struct _object *) PyWeakref_NewProxy(struct _object *arg0, struct _object *arg1);
#define PyWeakref_NewRef PyPyWeakref_NewRef
PyAPI_FUNC(struct _object *) PyWeakref_NewRef(struct _object *arg0, struct _object *arg1);
#define Py_AddPendingCall PyPy_AddPendingCall
PyAPI_FUNC(int) Py_AddPendingCall(int (*arg0)(void *), void *arg1);
#define Py_AtExit PyPy_AtExit
PyAPI_FUNC(int) Py_AtExit(void (*arg0)(void));
#define Py_CompileStringFlags PyPy_CompileStringFlags
PyAPI_FUNC(struct _object *) Py_CompileStringFlags(const char *arg0, const char *arg1, int arg2, PyCompilerFlags *arg3);
#define Py_DecRef PyPy_DecRef
PyAPI_FUNC(void) Py_DecRef(struct _object *arg0);
#define Py_EnterRecursiveCall PyPy_EnterRecursiveCall
PyAPI_FUNC(int) Py_EnterRecursiveCall(const char *arg0);
#define Py_FindMethod PyPy_FindMethod
PyAPI_FUNC(struct _object *) Py_FindMethod(struct PyMethodDef *arg0, struct _object *arg1, const char *arg2);
#define Py_GetProgramName PyPy_GetProgramName
PyAPI_FUNC(wchar_t *) Py_GetProgramName(void);
#define Py_GetRecursionLimit PyPy_GetRecursionLimit
PyAPI_FUNC(int) Py_GetRecursionLimit(void);
#define Py_GetVersion PyPy_GetVersion
PyAPI_FUNC(char *) Py_GetVersion(void);
#define Py_IncRef PyPy_IncRef
PyAPI_FUNC(void) Py_IncRef(struct _object *arg0);
#define Py_IsInitialized PyPy_IsInitialized
PyAPI_FUNC(int) Py_IsInitialized(void);
#define Py_LeaveRecursiveCall PyPy_LeaveRecursiveCall
PyAPI_FUNC(void) Py_LeaveRecursiveCall(void);
#define Py_MakePendingCalls PyPy_MakePendingCalls
PyAPI_FUNC(int) Py_MakePendingCalls(void);
#define Py_ReprEnter PyPy_ReprEnter
PyAPI_FUNC(int) Py_ReprEnter(struct _object *arg0);
#define Py_ReprLeave PyPy_ReprLeave
PyAPI_FUNC(void) Py_ReprLeave(struct _object *arg0);
#define Py_SetRecursionLimit PyPy_SetRecursionLimit
PyAPI_FUNC(void) Py_SetRecursionLimit(int arg0);
#define Py_UNICODE_COPY PyPy_UNICODE_COPY
PyAPI_FUNC(void) Py_UNICODE_COPY(wchar_t *arg0, wchar_t *arg1, Signed arg2);
#define Py_UNICODE_ISALNUM PyPy_UNICODE_ISALNUM
PyAPI_FUNC(int) Py_UNICODE_ISALNUM(wchar_t arg0);
#define Py_UNICODE_ISALPHA PyPy_UNICODE_ISALPHA
PyAPI_FUNC(int) Py_UNICODE_ISALPHA(wchar_t arg0);
#define Py_UNICODE_ISDECIMAL PyPy_UNICODE_ISDECIMAL
PyAPI_FUNC(int) Py_UNICODE_ISDECIMAL(wchar_t arg0);
#define Py_UNICODE_ISDIGIT PyPy_UNICODE_ISDIGIT
PyAPI_FUNC(int) Py_UNICODE_ISDIGIT(wchar_t arg0);
#define Py_UNICODE_ISLINEBREAK PyPy_UNICODE_ISLINEBREAK
PyAPI_FUNC(int) Py_UNICODE_ISLINEBREAK(wchar_t arg0);
#define Py_UNICODE_ISLOWER PyPy_UNICODE_ISLOWER
PyAPI_FUNC(int) Py_UNICODE_ISLOWER(wchar_t arg0);
#define Py_UNICODE_ISNUMERIC PyPy_UNICODE_ISNUMERIC
PyAPI_FUNC(int) Py_UNICODE_ISNUMERIC(wchar_t arg0);
#define Py_UNICODE_ISSPACE PyPy_UNICODE_ISSPACE
PyAPI_FUNC(int) Py_UNICODE_ISSPACE(wchar_t arg0);
#define Py_UNICODE_ISTITLE PyPy_UNICODE_ISTITLE
PyAPI_FUNC(int) Py_UNICODE_ISTITLE(wchar_t arg0);
#define Py_UNICODE_ISUPPER PyPy_UNICODE_ISUPPER
PyAPI_FUNC(int) Py_UNICODE_ISUPPER(wchar_t arg0);
#define Py_UNICODE_TODECIMAL PyPy_UNICODE_TODECIMAL
PyAPI_FUNC(int) Py_UNICODE_TODECIMAL(wchar_t arg0);
#define Py_UNICODE_TODIGIT PyPy_UNICODE_TODIGIT
PyAPI_FUNC(int) Py_UNICODE_TODIGIT(wchar_t arg0);
#define Py_UNICODE_TOLOWER PyPy_UNICODE_TOLOWER
PyAPI_FUNC(wchar_t) Py_UNICODE_TOLOWER(wchar_t arg0);
#define Py_UNICODE_TONUMERIC PyPy_UNICODE_TONUMERIC
PyAPI_FUNC(double) Py_UNICODE_TONUMERIC(wchar_t arg0);
#define Py_UNICODE_TOTITLE PyPy_UNICODE_TOTITLE
PyAPI_FUNC(wchar_t) Py_UNICODE_TOTITLE(wchar_t arg0);
#define Py_UNICODE_TOUPPER PyPy_UNICODE_TOUPPER
PyAPI_FUNC(wchar_t) Py_UNICODE_TOUPPER(wchar_t arg0);
#define _PyBytes_Eq _PyPyBytes_Eq
PyAPI_FUNC(int) _PyBytes_Eq(struct _object *arg0, struct _object *arg1);
#define _PyBytes_Join _PyPyBytes_Join
PyAPI_FUNC(struct _object *) _PyBytes_Join(struct _object *arg0, struct _object *arg1);
#define _PyBytes_Resize _PyPyBytes_Resize
PyAPI_FUNC(int) _PyBytes_Resize(struct _object **arg0, Signed arg1);
#define _PyComplex_AsCComplex _PyPyComplex_AsCComplex
PyAPI_FUNC(int) _PyComplex_AsCComplex(struct _object *arg0, struct Py_complex_t *arg1);
#define _PyComplex_FromCComplex _PyPyComplex_FromCComplex
PyAPI_FUNC(struct _object *) _PyComplex_FromCComplex(struct Py_complex_t *arg0);
#define _PyDateTime_FromDateAndTime _PyPyDateTime_FromDateAndTime
PyAPI_FUNC(struct _object *) _PyDateTime_FromDateAndTime(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, struct _object *arg7, struct _typeobject *arg8);
#define _PyDateTime_FromDateAndTimeAndFold _PyPyDateTime_FromDateAndTimeAndFold
PyAPI_FUNC(struct _object *) _PyDateTime_FromDateAndTimeAndFold(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, struct _object *arg7, int arg8, struct _typeobject *arg9);
#define _PyDateTime_FromTimestamp _PyPyDateTime_FromTimestamp
PyAPI_FUNC(struct _object *) _PyDateTime_FromTimestamp(struct _object *arg0, struct _object *arg1, struct _object *arg2);
#define _PyDateTime_Import _PyPyDateTime_Import
PyAPI_FUNC(PyDateTime_CAPI *) _PyDateTime_Import(void);
#define _PyDate_FromDate _PyPyDate_FromDate
PyAPI_FUNC(struct _object *) _PyDate_FromDate(int arg0, int arg1, int arg2, struct _typeobject *arg3);
#define _PyDate_FromTimestamp _PyPyDate_FromTimestamp
PyAPI_FUNC(struct _object *) _PyDate_FromTimestamp(struct _object *arg0, struct _object *arg1);
#define _PyDelta_FromDelta _PyPyDelta_FromDelta
PyAPI_FUNC(struct _object *) _PyDelta_FromDelta(int arg0, int arg1, int arg2, int arg3, struct _typeobject *arg4);
#define _PyDict_GetItemStringWithError _PyPyDict_GetItemStringWithError
PyAPI_FUNC(struct _object *) _PyDict_GetItemStringWithError(struct _object *arg0, const char *arg1);
#define _PyDict_HasOnlyStringKeys _PyPyDict_HasOnlyStringKeys
PyAPI_FUNC(int) _PyDict_HasOnlyStringKeys(struct _object *arg0);
#define _PyErr_WriteUnraisableMsg _PyPyErr_WriteUnraisableMsg
PyAPI_FUNC(void) _PyErr_WriteUnraisableMsg(const char *arg0, struct _object *arg1);
#define _PyEval_SliceIndex _PyPyEval_SliceIndex
PyAPI_FUNC(int) _PyEval_SliceIndex(struct _object *arg0, Signed *arg1);
#define _PyFloat_Unpack4 _PyPyFloat_Unpack4
PyAPI_FUNC(double) _PyFloat_Unpack4(const unsigned char *arg0, int arg1);
#define _PyFloat_Unpack8 _PyPyFloat_Unpack8
PyAPI_FUNC(double) _PyFloat_Unpack8(const unsigned char *arg0, int arg1);
#define _PyImport_AcquireLock _PyPyImport_AcquireLock
PyAPI_FUNC(void) _PyImport_AcquireLock(void);
#define _PyImport_ReleaseLock _PyPyImport_ReleaseLock
PyAPI_FUNC(int) _PyImport_ReleaseLock(void);
#define _PyList_Extend _PyPyList_Extend
PyAPI_FUNC(struct _object *) _PyList_Extend(struct _object *arg0, struct _object *arg1);
#define _PyLong_AsByteArrayO _PyPyLong_AsByteArrayO
PyAPI_FUNC(int) _PyLong_AsByteArrayO(struct _object *arg0, unsigned char *arg1, Unsigned arg2, int arg3, int arg4);
#define _PyLong_FromByteArray _PyPyLong_FromByteArray
PyAPI_FUNC(struct _object *) _PyLong_FromByteArray(const unsigned char *arg0, Unsigned arg1, int arg2, int arg3);
#define _PyLong_NumBits _PyPyLong_NumBits
PyAPI_FUNC(Unsigned) _PyLong_NumBits(struct _object *arg0);
#define _PyLong_Sign _PyPyLong_Sign
PyAPI_FUNC(int) _PyLong_Sign(struct _object *arg0);
#define _PyNamespace_New _PyPyNamespace_New
PyAPI_FUNC(PyObject *) _PyNamespace_New(PyObject * arg0);
#define _PyObject_CallNoArg _PyPyObject_CallNoArg
PyAPI_FUNC(struct _object *) _PyObject_CallNoArg(struct _object *arg0);
#define _PyObject_FastCall _PyPyObject_FastCall
PyAPI_FUNC(PyObject *) _PyObject_FastCall(PyObject * arg0, PyObject * const * arg1, size_t arg2);
#define _PyObject_GetDictPtr _PyPyObject_GetDictPtr
PyAPI_FUNC(struct _object **) _PyObject_GetDictPtr(struct _object *arg0);
#define _PyPyGC_AddMemoryPressure _PyPyPyGC_AddMemoryPressure
PyAPI_FUNC(void) _PyPyGC_AddMemoryPressure(Signed arg0);
#define _PyPy_Free _PyPyPy_Free
extern void _PyPy_Free(void *arg0);
#define _PyPy_Malloc _PyPyPy_Malloc
extern void * _PyPy_Malloc(Signed arg0);
#define _PySet_Next _PyPySet_Next
PyAPI_FUNC(int) _PySet_Next(struct _object *arg0, Signed *arg1, struct _object **arg2);
#define _PySet_NextEntry _PyPySet_NextEntry
PyAPI_FUNC(int) _PySet_NextEntry(struct _object *arg0, Signed *arg1, struct _object **arg2, Signed *arg3);
#define _PyThreadState_UncheckedGet _PyPyThreadState_UncheckedGet
PyAPI_FUNC(PyThreadState *) _PyThreadState_UncheckedGet(void);
#define _PyTimeZone_FromTimeZone _PyPyTimeZone_FromTimeZone
PyAPI_FUNC(struct _object *) _PyTimeZone_FromTimeZone(struct _object *arg0, struct _object *arg1);
#define _PyTime_FromTime _PyPyTime_FromTime
PyAPI_FUNC(struct _object *) _PyTime_FromTime(int arg0, int arg1, int arg2, int arg3, struct _object *arg4, struct _typeobject *arg5);
#define _PyTime_FromTimeAndFold _PyPyTime_FromTimeAndFold
PyAPI_FUNC(struct _object *) _PyTime_FromTimeAndFold(int arg0, int arg1, int arg2, int arg3, struct _object *arg4, int arg5, struct _typeobject *arg6);
#define _PyTuple_Resize _PyPyTuple_Resize
PyAPI_FUNC(int) _PyTuple_Resize(struct _object **arg0, Signed arg1);
#define _PyType_Lookup _PyPyType_Lookup
PyAPI_FUNC(struct _object *) _PyType_Lookup(struct _typeobject *arg0, struct _object *arg1);
#define _PyUnicode_EQ _PyPyUnicode_EQ
PyAPI_FUNC(int) _PyUnicode_EQ(struct _object *arg0, struct _object *arg1);
#define _PyUnicode_EqualToASCIIString _PyPyUnicode_EqualToASCIIString
PyAPI_FUNC(int) _PyUnicode_EqualToASCIIString(struct _object *arg0, const char *arg1);
#define _PyUnicode_Ready _PyPyUnicode_Ready
PyAPI_FUNC(int) _PyUnicode_Ready(PyObject * arg0);
#define _Py_HashDouble _PyPy_HashDouble
PyAPI_FUNC(Signed) _Py_HashDouble(double arg0);
#define _Py_HashPointer _PyPy_HashPointer
PyAPI_FUNC(Signed) _Py_HashPointer(void *arg0);
#define _Py_IsFinalizing _PyPy_IsFinalizing
PyAPI_FUNC(int) _Py_IsFinalizing(void);
#define _Py_strhex _PyPy_strhex
PyAPI_FUNC(PyObject *) _Py_strhex(char const * arg0, Py_ssize_t arg1);
#define _Py_strhex_bytes _PyPy_strhex_bytes
PyAPI_FUNC(PyObject *) _Py_strhex_bytes(char const * arg0, Py_ssize_t arg1);
#define _Py_NoneStruct _PyPy_NoneStruct
PyAPI_DATA(PyObject) _Py_NoneStruct;
#define _Py_TrueStruct _PyPy_TrueStruct
PyAPI_DATA(PyObject) _Py_TrueStruct;
#define _Py_FalseStruct _PyPy_FalseStruct
PyAPI_DATA(PyObject) _Py_FalseStruct;
#define _Py_NotImplementedStruct _PyPy_NotImplementedStruct
PyAPI_DATA(PyObject) _Py_NotImplementedStruct;
#define _Py_EllipsisObject _PyPy_EllipsisObject
PyAPI_DATA(PyObject) _Py_EllipsisObject;
#define PyDateTimeAPI PyPyDateTimeAPI
PyAPI_DATA(PyDateTime_CAPI*) PyDateTimeAPI;
#define PyExc_ArithmeticError PyPyExc_ArithmeticError
PyAPI_DATA(PyObject*) PyExc_ArithmeticError;
#define PyExc_AssertionError PyPyExc_AssertionError
PyAPI_DATA(PyObject*) PyExc_AssertionError;
#define PyExc_AttributeError PyPyExc_AttributeError
PyAPI_DATA(PyObject*) PyExc_AttributeError;
#define PyExc_BaseException PyPyExc_BaseException
PyAPI_DATA(PyObject*) PyExc_BaseException;
#define PyExc_BlockingIOError PyPyExc_BlockingIOError
PyAPI_DATA(PyObject*) PyExc_BlockingIOError;
#define PyExc_BrokenPipeError PyPyExc_BrokenPipeError
PyAPI_DATA(PyObject*) PyExc_BrokenPipeError;
#define PyExc_BufferError PyPyExc_BufferError
PyAPI_DATA(PyObject*) PyExc_BufferError;
#define PyExc_BytesWarning PyPyExc_BytesWarning
PyAPI_DATA(PyObject*) PyExc_BytesWarning;
#define PyExc_ChildProcessError PyPyExc_ChildProcessError
PyAPI_DATA(PyObject*) PyExc_ChildProcessError;
#define PyExc_ConnectionAbortedError PyPyExc_ConnectionAbortedError
PyAPI_DATA(PyObject*) PyExc_ConnectionAbortedError;
#define PyExc_ConnectionError PyPyExc_ConnectionError
PyAPI_DATA(PyObject*) PyExc_ConnectionError;
#define PyExc_ConnectionRefusedError PyPyExc_ConnectionRefusedError
PyAPI_DATA(PyObject*) PyExc_ConnectionRefusedError;
#define PyExc_ConnectionResetError PyPyExc_ConnectionResetError
PyAPI_DATA(PyObject*) PyExc_ConnectionResetError;
#define PyExc_DeprecationWarning PyPyExc_DeprecationWarning
PyAPI_DATA(PyObject*) PyExc_DeprecationWarning;
#define PyExc_EOFError PyPyExc_EOFError
PyAPI_DATA(PyObject*) PyExc_EOFError;
#define PyExc_Exception PyPyExc_Exception
PyAPI_DATA(PyObject*) PyExc_Exception;
#define PyExc_FileExistsError PyPyExc_FileExistsError
PyAPI_DATA(PyObject*) PyExc_FileExistsError;
#define PyExc_FileNotFoundError PyPyExc_FileNotFoundError
PyAPI_DATA(PyObject*) PyExc_FileNotFoundError;
#define PyExc_FloatingPointError PyPyExc_FloatingPointError
PyAPI_DATA(PyObject*) PyExc_FloatingPointError;
#define PyExc_FutureWarning PyPyExc_FutureWarning
PyAPI_DATA(PyObject*) PyExc_FutureWarning;
#define PyExc_GeneratorExit PyPyExc_GeneratorExit
PyAPI_DATA(PyObject*) PyExc_GeneratorExit;
#define PyExc_ImportError PyPyExc_ImportError
PyAPI_DATA(PyObject*) PyExc_ImportError;
#define PyExc_ImportWarning PyPyExc_ImportWarning
PyAPI_DATA(PyObject*) PyExc_ImportWarning;
#define PyExc_IndentationError PyPyExc_IndentationError
PyAPI_DATA(PyObject*) PyExc_IndentationError;
#define PyExc_IndexError PyPyExc_IndexError
PyAPI_DATA(PyObject*) PyExc_IndexError;
#define PyExc_InterruptedError PyPyExc_InterruptedError
PyAPI_DATA(PyObject*) PyExc_InterruptedError;
#define PyExc_IsADirectoryError PyPyExc_IsADirectoryError
PyAPI_DATA(PyObject*) PyExc_IsADirectoryError;
#define PyExc_KeyError PyPyExc_KeyError
PyAPI_DATA(PyObject*) PyExc_KeyError;
#define PyExc_KeyboardInterrupt PyPyExc_KeyboardInterrupt
PyAPI_DATA(PyObject*) PyExc_KeyboardInterrupt;
#define PyExc_LookupError PyPyExc_LookupError
PyAPI_DATA(PyObject*) PyExc_LookupError;
#define PyExc_MemoryError PyPyExc_MemoryError
PyAPI_DATA(PyObject*) PyExc_MemoryError;
#define PyExc_ModuleNotFoundError PyPyExc_ModuleNotFoundError
PyAPI_DATA(PyObject*) PyExc_ModuleNotFoundError;
#define PyExc_NameError PyPyExc_NameError
PyAPI_DATA(PyObject*) PyExc_NameError;
#define PyExc_NotADirectoryError PyPyExc_NotADirectoryError
PyAPI_DATA(PyObject*) PyExc_NotADirectoryError;
#define PyExc_NotImplementedError PyPyExc_NotImplementedError
PyAPI_DATA(PyObject*) PyExc_NotImplementedError;
#define PyExc_OSError PyPyExc_OSError
PyAPI_DATA(PyObject*) PyExc_OSError;
#define PyExc_OverflowError PyPyExc_OverflowError
PyAPI_DATA(PyObject*) PyExc_OverflowError;
#define PyExc_PendingDeprecationWarning PyPyExc_PendingDeprecationWarning
PyAPI_DATA(PyObject*) PyExc_PendingDeprecationWarning;
#define PyExc_PermissionError PyPyExc_PermissionError
PyAPI_DATA(PyObject*) PyExc_PermissionError;
#define PyExc_ProcessLookupError PyPyExc_ProcessLookupError
PyAPI_DATA(PyObject*) PyExc_ProcessLookupError;
#define PyExc_RecursionError PyPyExc_RecursionError
PyAPI_DATA(PyObject*) PyExc_RecursionError;
#define PyExc_ReferenceError PyPyExc_ReferenceError
PyAPI_DATA(PyObject*) PyExc_ReferenceError;
#define PyExc_ResourceWarning PyPyExc_ResourceWarning
PyAPI_DATA(PyObject*) PyExc_ResourceWarning;
#define PyExc_RuntimeError PyPyExc_RuntimeError
PyAPI_DATA(PyObject*) PyExc_RuntimeError;
#define PyExc_RuntimeWarning PyPyExc_RuntimeWarning
PyAPI_DATA(PyObject*) PyExc_RuntimeWarning;
#define PyExc_StopAsyncIteration PyPyExc_StopAsyncIteration
PyAPI_DATA(PyObject*) PyExc_StopAsyncIteration;
#define PyExc_StopIteration PyPyExc_StopIteration
PyAPI_DATA(PyObject*) PyExc_StopIteration;
#define PyExc_SyntaxError PyPyExc_SyntaxError
PyAPI_DATA(PyObject*) PyExc_SyntaxError;
#define PyExc_SyntaxWarning PyPyExc_SyntaxWarning
PyAPI_DATA(PyObject*) PyExc_SyntaxWarning;
#define PyExc_SystemError PyPyExc_SystemError
PyAPI_DATA(PyObject*) PyExc_SystemError;
#define PyExc_SystemExit PyPyExc_SystemExit
PyAPI_DATA(PyObject*) PyExc_SystemExit;
#define PyExc_TabError PyPyExc_TabError
PyAPI_DATA(PyObject*) PyExc_TabError;
#define PyExc_TimeoutError PyPyExc_TimeoutError
PyAPI_DATA(PyObject*) PyExc_TimeoutError;
#define PyExc_TypeError PyPyExc_TypeError
PyAPI_DATA(PyObject*) PyExc_TypeError;
#define PyExc_UnboundLocalError PyPyExc_UnboundLocalError
PyAPI_DATA(PyObject*) PyExc_UnboundLocalError;
#define PyExc_UnicodeDecodeError PyPyExc_UnicodeDecodeError
PyAPI_DATA(PyObject*) PyExc_UnicodeDecodeError;
#define PyExc_UnicodeEncodeError PyPyExc_UnicodeEncodeError
PyAPI_DATA(PyObject*) PyExc_UnicodeEncodeError;
#define PyExc_UnicodeError PyPyExc_UnicodeError
PyAPI_DATA(PyObject*) PyExc_UnicodeError;
#define PyExc_UnicodeTranslateError PyPyExc_UnicodeTranslateError
PyAPI_DATA(PyObject*) PyExc_UnicodeTranslateError;
#define PyExc_UnicodeWarning PyPyExc_UnicodeWarning
PyAPI_DATA(PyObject*) PyExc_UnicodeWarning;
#define PyExc_UserWarning PyPyExc_UserWarning
PyAPI_DATA(PyObject*) PyExc_UserWarning;
#define PyExc_ValueError PyPyExc_ValueError
PyAPI_DATA(PyObject*) PyExc_ValueError;
#define PyExc_Warning PyPyExc_Warning
PyAPI_DATA(PyObject*) PyExc_Warning;
#define PyExc_ZeroDivisionError PyPyExc_ZeroDivisionError
PyAPI_DATA(PyObject*) PyExc_ZeroDivisionError;
#define PyType_Type PyPyType_Type
PyAPI_DATA(PyTypeObject) PyType_Type;
#define PyBytes_Type PyPyBytes_Type
PyAPI_DATA(PyTypeObject) PyBytes_Type;
#define PyUnicode_Type PyPyUnicode_Type
PyAPI_DATA(PyTypeObject) PyUnicode_Type;
#define PyDict_Type PyPyDict_Type
PyAPI_DATA(PyTypeObject) PyDict_Type;
#define PyDictProxy_Type PyPyDictProxy_Type
PyAPI_DATA(PyTypeObject) PyDictProxy_Type;
#define PyTuple_Type PyPyTuple_Type
PyAPI_DATA(PyTypeObject) PyTuple_Type;
#define PyList_Type PyPyList_Type
PyAPI_DATA(PyTypeObject) PyList_Type;
#define PySet_Type PyPySet_Type
PyAPI_DATA(PyTypeObject) PySet_Type;
#define PyFrozenSet_Type PyPyFrozenSet_Type
PyAPI_DATA(PyTypeObject) PyFrozenSet_Type;
#define PyBool_Type PyPyBool_Type
PyAPI_DATA(PyTypeObject) PyBool_Type;
#define PyFloat_Type PyPyFloat_Type
PyAPI_DATA(PyTypeObject) PyFloat_Type;
#define PyLong_Type PyPyLong_Type
PyAPI_DATA(PyTypeObject) PyLong_Type;
#define PyComplex_Type PyPyComplex_Type
PyAPI_DATA(PyTypeObject) PyComplex_Type;
#define PyByteArray_Type PyPyByteArray_Type
PyAPI_DATA(PyTypeObject) PyByteArray_Type;
#define PyMemoryView_Type PyPyMemoryView_Type
PyAPI_DATA(PyTypeObject) PyMemoryView_Type;
#define PyBaseObject_Type PyPyBaseObject_Type
PyAPI_DATA(PyTypeObject) PyBaseObject_Type;
#define _PyNone_Type _PyPyNone_Type
PyAPI_DATA(PyTypeObject) _PyNone_Type;
#define _PyNotImplemented_Type _PyPyNotImplemented_Type
PyAPI_DATA(PyTypeObject) _PyNotImplemented_Type;
#define PyCell_Type PyPyCell_Type
PyAPI_DATA(PyTypeObject) PyCell_Type;
#define PyModule_Type PyPyModule_Type
PyAPI_DATA(PyTypeObject) PyModule_Type;
#define PyProperty_Type PyPyProperty_Type
PyAPI_DATA(PyTypeObject) PyProperty_Type;
#define PySlice_Type PyPySlice_Type
PyAPI_DATA(PyTypeObject) PySlice_Type;
#define PyStaticMethod_Type PyPyStaticMethod_Type
PyAPI_DATA(PyTypeObject) PyStaticMethod_Type;
#define PyCFunction_Type PyPyCFunction_Type
PyAPI_DATA(PyTypeObject) PyCFunction_Type;
#define PyClassMethodDescr_Type PyPyClassMethodDescr_Type
PyAPI_DATA(PyTypeObject) PyClassMethodDescr_Type;
#define PyGetSetDescr_Type PyPyGetSetDescr_Type
PyAPI_DATA(PyTypeObject) PyGetSetDescr_Type;
#define PyMemberDescr_Type PyPyMemberDescr_Type
PyAPI_DATA(PyTypeObject) PyMemberDescr_Type;
#define PyMethodDescr_Type PyPyMethodDescr_Type
PyAPI_DATA(PyTypeObject) PyMethodDescr_Type;
#define PyWrapperDescr_Type PyPyWrapperDescr_Type
PyAPI_DATA(PyTypeObject) PyWrapperDescr_Type;
#define PyInstanceMethod_Type PyPyInstanceMethod_Type
PyAPI_DATA(PyTypeObject) PyInstanceMethod_Type;
#define PyBufferable_Type PyPyBufferable_Type
PyAPI_DATA(PyTypeObject) PyBufferable_Type;

#undef Signed    /* xxx temporary fix */
#undef Unsigned  /* xxx temporary fix */
