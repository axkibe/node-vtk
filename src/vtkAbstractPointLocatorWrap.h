/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKABSTRACTPOINTLOCATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKABSTRACTPOINTLOCATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAbstractPointLocator.h>

#include "vtkLocatorWrap.h"

class VtkAbstractPointLocatorWrap : public VtkLocatorWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAbstractPointLocatorWrap(vtkSmartPointer<vtkAbstractPointLocator>);
		VtkAbstractPointLocatorWrap();
		~VtkAbstractPointLocatorWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FindClosestNPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FindPointsWithinRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FreeSearchStructure(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
