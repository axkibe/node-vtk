/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGRAPHTOPOLYDATAWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGRAPHTOPOLYDATAWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGraphToPolyData.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkGraphToPolyDataWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGraphToPolyDataWrap(vtkSmartPointer<vtkGraphToPolyData>);
		VtkGraphToPolyDataWrap();
		~VtkGraphToPolyDataWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void EdgeGlyphOutputOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EdgeGlyphOutputOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeGlyphOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeGlyphPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeGlyphOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeGlyphPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
