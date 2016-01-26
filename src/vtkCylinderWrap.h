/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCYLINDERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCYLINDERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCylinder.h>

#include "vtkImplicitFunctionWrap.h"

class VtkCylinderWrap : public VtkImplicitFunctionWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCylinderWrap(vtkSmartPointer<vtkCylinder>);
		VtkCylinderWrap();
		~VtkCylinderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void EvaluateFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
