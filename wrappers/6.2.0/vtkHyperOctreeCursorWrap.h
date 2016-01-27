/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKHYPEROCTREECURSORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKHYPEROCTREECURSORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkHyperOctreeCursor.h>

#include "vtkObjectWrap.h"

class VtkHyperOctreeCursorWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkHyperOctreeCursorWrap(vtkSmartPointer<vtkHyperOctreeCursor>);
		VtkHyperOctreeCursorWrap();
		~VtkHyperOctreeCursorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Clone(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CurrentIsLeaf(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CurrentIsRoot(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CurrentIsTerminalNode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Found(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetChildIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCurrentLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLeafId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfChildren(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsEqual(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SameTree(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ToChild(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ToParent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ToRoot(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ToSameNode(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
