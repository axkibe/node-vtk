/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSTRUCTUREDAMRGRIDCONNECTIVITYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSTRUCTUREDAMRGRIDCONNECTIVITYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkStructuredAMRGridConnectivity.h>

#include "vtkAbstractGridConnectivityWrap.h"

class VtkStructuredAMRGridConnectivityWrap : public VtkAbstractGridConnectivityWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkStructuredAMRGridConnectivityWrap(vtkSmartPointer<vtkStructuredAMRGridConnectivity>);
		VtkStructuredAMRGridConnectivityWrap();
		~VtkStructuredAMRGridConnectivityWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeNeighbors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateGhostLayers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBalancedRefinement(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellCentered(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGhostedExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNodeCentered(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfNeighbors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RegisterGrid(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBalancedRefinement(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCellCentered(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNodeCentered(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif