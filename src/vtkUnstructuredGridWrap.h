/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKUNSTRUCTUREDGRIDWRAP_H
#define NATIVE_EXTENSION_VTK_VTKUNSTRUCTUREDGRIDWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkUnstructuredGrid.h>

#include "vtkUnstructuredGridBaseWrap.h"

class VtkUnstructuredGridWrap : public VtkUnstructuredGridBaseWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkUnstructuredGridWrap(vtkSmartPointer<vtkUnstructuredGrid>);
		VtkUnstructuredGridWrap();
		~VtkUnstructuredGridWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildLinks(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyStructure(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellLinks(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellLocationsArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellTypesArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFaceLocations(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFaces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIdsOfCellsOfType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxCellSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsHomogeneous(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewCellIterator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveGhostCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Reset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Squeeze(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif