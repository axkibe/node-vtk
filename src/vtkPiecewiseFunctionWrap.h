/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPIECEWISEFUNCTIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPIECEWISEFUNCTIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPiecewiseFunction.h>

#include "vtkDataObjectWrap.h"

class VtkPiecewiseFunctionWrap : public VtkDataObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkPiecewiseFunctionWrap(vtkSmartPointer<vtkPiecewiseFunction>);
		VtkPiecewiseFunctionWrap();
		~VtkPiecewiseFunctionWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddSegment(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AllowDuplicateScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AllowDuplicateScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClampingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClampingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAllowDuplicateScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClamping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFirstNonZeroValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemovePoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAllowDuplicateScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClamping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
