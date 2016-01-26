/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGEOTREENODEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGEOTREENODEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGeoTreeNode.h>

#include "vtkObjectWrap.h"

class VtkGeoTreeNodeWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGeoTreeNodeWrap(vtkSmartPointer<vtkGeoTreeNode>);
		VtkGeoTreeNodeWrap();
		~VtkGeoTreeNodeWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CreateChildren(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeleteData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetChildTreeNode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNewer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOlder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParentTreeNode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWhichChildAreYou(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetChild(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLatitudeRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLongitudeRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNewer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOlder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetParent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
