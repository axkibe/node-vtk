/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGRAPHWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGRAPHWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGraph.h>

#include "vtkDataObjectWrap.h"

class VtkGraphWrap : public VtkDataObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGraphWrap(vtkSmartPointer<vtkGraph>);
		VtkGraphWrap();
		~VtkGraphWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CheckedDeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CheckedShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyStructure(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopyEdgePoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Dump(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAttributesAsFieldData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistributedGraphHelper(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGraphInternals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInducedEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVertexData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVertices(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsSameStructure(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDistributedGraphHelper(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopyEdgePoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Squeeze(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ToDirectedGraph(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ToUndirectedGraph(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
