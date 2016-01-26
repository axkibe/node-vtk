/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDISCRETIZABLECOLORTRANSFERFUNCTIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDISCRETIZABLECOLORTRANSFERFUNCTIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDiscretizableColorTransferFunction.h>

#include "vtkColorTransferFunctionWrap.h"

class VtkDiscretizableColorTransferFunctionWrap : public VtkColorTransferFunctionWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDiscretizableColorTransferFunctionWrap(vtkSmartPointer<vtkDiscretizableColorTransferFunction>);
		VtkDiscretizableColorTransferFunctionWrap();
		~VtkDiscretizableColorTransferFunctionWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Build(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DiscretizeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DiscretizeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EnableOpacityMappingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EnableOpacityMappingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDiscretize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarOpacityFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseLogScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsOpaque(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MapScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAlpha(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDiscretize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNanColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarOpacityFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseLogScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UsingLogScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
