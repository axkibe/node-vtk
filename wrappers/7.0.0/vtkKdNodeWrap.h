/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKKDNODEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKKDNODEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkKdNode.h>

#include "vtkObjectWrap.h"

class VtkKdNodeWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkKdNodeWrap(vtkSmartPointer<vtkKdNode>);
		VtkKdNodeWrap();
		~VtkKdNodeWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddChildNodes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ContainsBox(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ContainsPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeleteChildNodes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDim(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistance2ToBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistance2ToInnerBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDivisionPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLeft(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IntersectsBox(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IntersectsRegion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IntersectsSphere2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PrintNode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PrintVerboseNode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDim(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLeft(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaxID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUp(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
