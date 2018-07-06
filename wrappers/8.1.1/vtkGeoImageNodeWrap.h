/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGEOIMAGENODEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGEOIMAGENODEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGeoImageNode.h>

#include "vtkGeoTreeNodeWrap.h"
#include "../../plus/plus.h"

class VtkGeoImageNodeWrap : public VtkGeoTreeNodeWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGeoImageNodeWrap(vtkSmartPointer<vtkGeoImageNode>);
		VtkGeoImageNodeWrap();
		~VtkGeoImageNodeWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeleteData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetChild(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTexture(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LoadAnImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTexture(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKGEOIMAGENODEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKGEOIMAGENODEWRAP_CLASSDEF
#endif
};

#endif
