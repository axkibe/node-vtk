/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKABSTRACTGRIDCONNECTIVITYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKABSTRACTGRIDCONNECTIVITYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAbstractGridConnectivity.h>

#include "vtkObjectWrap.h"

class VtkAbstractGridConnectivityWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAbstractGridConnectivityWrap(vtkSmartPointer<vtkAbstractGridConnectivity>);
		VtkAbstractGridConnectivityWrap();
		~VtkAbstractGridConnectivityWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeNeighbors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateGhostLayers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGhostedCellGhostArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGhostedGridCellData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGhostedGridPointData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGhostedPointGhostArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGhostedPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
