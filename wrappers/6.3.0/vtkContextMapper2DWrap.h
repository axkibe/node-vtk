/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCONTEXTMAPPER2DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCONTEXTMAPPER2DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkContextMapper2D.h>

#include "vtkAlgorithmWrap.h"

class VtkContextMapper2DWrap : public VtkAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkContextMapper2DWrap(vtkSmartPointer<vtkContextMapper2D>);
		VtkContextMapper2DWrap();
		~VtkContextMapper2DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputAbstractArrayToProcess(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputArrayToProcess(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
