#ifndef NATIVE_EXTENSION_VTK_PLUS_H
#define NATIVE_EXTENSION_VTK_PLUS_H


/* --- vtkCharArray --- */

#define VTK_NODE_PLUS_VTKCHARARRAYWRAP_CLASSDEF \
	static void GetBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info);

#define VTK_NODE_PLUS_VTKCHARARRAYWRAP_INITPTPL \
    Nan::SetPrototypeMethod(tpl, "GetBuffer", GetBuffer); \
    Nan::SetPrototypeMethod(tpl, "getBuffer", GetBuffer);


/* --- vtkUnsignedCharArray --- */

#define VTK_NODE_PLUS_VTKUNSIGNEDCHARARRAYWRAP_CLASSDEF \
	static void GetBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info);

#define VTK_NODE_PLUS_VTKUNSIGNEDCHARARRAYWRAP_INITPTPL \
    Nan::SetPrototypeMethod(tpl, "GetBuffer", GetBuffer); \
    Nan::SetPrototypeMethod(tpl, "getBuffer", GetBuffer);


/* --- vtkShortArray --- */

#define VTK_NODE_PLUS_VTKSHORTARRAYWRAP_CLASSDEF \
	static void GetBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info);

#define VTK_NODE_PLUS_VTKSHORTARRAYWRAP_INITPTPL \
    Nan::SetPrototypeMethod(tpl, "GetBuffer", GetBuffer); \
    Nan::SetPrototypeMethod(tpl, "getBuffer", GetBuffer);


/* --- vtkUnsignedShortArray --- */

#define VTK_NODE_PLUS_VTKUNSIGNEDSHORTARRAYWRAP_CLASSDEF \
	static void GetBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info);

#define VTK_NODE_PLUS_VTKUNSIGNEDSHORTARRAYWRAP_INITPTPL \
    Nan::SetPrototypeMethod(tpl, "GetBuffer", GetBuffer); \
    Nan::SetPrototypeMethod(tpl, "getBuffer", GetBuffer);


/* --- vtkIntArray --- */

#define VTK_NODE_PLUS_VTKINTARRAYWRAP_CLASSDEF \
	static void GetBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info);

#define VTK_NODE_PLUS_VTKINTARRAYWRAP_INITPTPL \
    Nan::SetPrototypeMethod(tpl, "GetBuffer", GetBuffer); \
    Nan::SetPrototypeMethod(tpl, "getBuffer", GetBuffer);


/* --- vtkUnsignedIntArray --- */

#define VTK_NODE_PLUS_VTKUNSIGNEDINTARRAYWRAP_CLASSDEF \
	static void GetBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info);

#define VTK_NODE_PLUS_VTKUNSIGNEDINTARRAYWRAP_INITPTPL \
    Nan::SetPrototypeMethod(tpl, "GetBuffer", GetBuffer); \
    Nan::SetPrototypeMethod(tpl, "getBuffer", GetBuffer);


#endif
