/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKOCTREEPOINTLOCATORNODEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKOCTREEPOINTLOCATORNODEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkOctreePointLocatorNode.h>

#include "vtkObjectWrap.h"

class VtkOctreePointLocatorNodeWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkOctreePointLocatorNodeWrap(vtkSmartPointer<vtkOctreePointLocatorNode>);
		VtkOctreePointLocatorNodeWrap();
		~VtkOctreePointLocatorNodeWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ContainsPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateChildNodes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeleteChildNodes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetChild(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistance2ToBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistance2ToInnerBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IntersectsRegion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
