/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKHYPEROCTREEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKHYPEROCTREEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkHyperOctree.h>

#include "vtkDataSetWrap.h"

class VtkHyperOctreeWrap : public VtkDataSetWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkHyperOctreeWrap(vtkSmartPointer<vtkHyperOctree>);
		VtkHyperOctreeWrap();
		~VtkHyperOctreeWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CollapseTerminalNode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyStructure(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DIMENSION(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDualGridFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLeafData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxCellSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointsOnEdge(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointsOnEdge2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointsOnFace(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointsOnParentEdge(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointsOnParentEdge2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointsOnParentFaces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LEVELS(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewCellCursor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SIZES(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDualGridFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SubdivideLeaf(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
