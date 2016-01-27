/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTEXTUREMAPTOCYLINDERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTEXTUREMAPTOCYLINDERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTextureMapToCylinder.h>

#include "vtkDataSetAlgorithmWrap.h"

class VtkTextureMapToCylinderWrap : public VtkDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTextureMapToCylinderWrap(vtkSmartPointer<vtkTextureMapToCylinder>);
		VtkTextureMapToCylinderWrap();
		~VtkTextureMapToCylinderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AutomaticCylinderGenerationOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AutomaticCylinderGenerationOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutomaticCylinderGeneration(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPreventSeam(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PreventSeamOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PreventSeamOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAutomaticCylinderGeneration(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint1(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPreventSeam(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif