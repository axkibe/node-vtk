/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKREEBGRAPHWRAP_H
#define NATIVE_EXTENSION_VTK_VTKREEBGRAPHWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkReebGraph.h>

#include "vtkMutableDirectedGraphWrap.h"

class VtkReebGraphWrap : public VtkMutableDirectedGraphWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkReebGraphWrap(vtkSmartPointer<vtkReebGraph>);
		VtkReebGraphWrap();
		~VtkReebGraphWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Build(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CloseStream(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Set(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Simplify(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
