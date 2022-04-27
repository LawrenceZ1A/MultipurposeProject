
'''Helper to preload vcomp140.dll, vcruntime140.dll and
vcruntime140_1.dll to prevent "not found" errors.

Once vcomp140.dll, vcruntime140.dll and vcruntime140_1.dll are
preloaded, the namespace is made available to any subsequent
vcomp140.dll, vcruntime140.dll and vcruntime140_1.dll. This is
created as part of the scripts that build the wheel.
'''


import os
import os.path as op
from ctypes import WinDLL


if os.name == "nt":
    # Load vcomp140.dll, vcruntime140.dll and vcruntime140_1.dll
    libs_path = op.join(op.dirname(__file__), ".libs")
    vcomp140_dll_filename = op.join(libs_path, "vcomp140.dll")
    vcruntime140_dll_filename = op.join(libs_path, "vcruntime140.dll")
    vcruntime140_1_dll_filename = op.join(libs_path, "vcruntime140_1.dll")
    WinDLL(op.abspath(vcomp140_dll_filename))
    WinDLL(op.abspath(vcruntime140_dll_filename))
    WinDLL(op.abspath(vcruntime140_1_dll_filename))
