/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPLANECOLLECTIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPLANECOLLECTIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPlaneCollection.h>

#include "vtkCollectionWrap.h"

class VtkPlaneCollectionWrap : public VtkCollectionWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPlaneCollectionWrap(vtkSmartPointer<vtkPlaneCollection>);
		VtkPlaneCollectionWrap();
		~VtkPlaneCollectionWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNextItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
