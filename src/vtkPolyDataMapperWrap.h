/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPOLYDATAMAPPERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPOLYDATAMAPPERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPolyDataMapper.h>

#include "vtkMapperWrap.h"

class VtkPolyDataMapperWrap : public VtkMapperWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPolyDataMapperWrap(vtkSmartPointer<vtkPolyDataMapper>);
		VtkPolyDataMapperWrap();
		~VtkPolyDataMapperWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfSubPieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MapDataArrayToMultiTextureAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MapDataArrayToVertexAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllVertexAttributeMappings(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveVertexAttributeMapping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderPiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfSubPieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
