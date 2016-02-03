/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCOMPOSITEPOLYDATAMAPPER2WRAP_H
#define NATIVE_EXTENSION_VTK_VTKCOMPOSITEPOLYDATAMAPPER2WRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCompositePolyDataMapper2.h>

#include "vtkGenericCompositePolyDataMapper2Wrap.h"

class VtkCompositePolyDataMapper2Wrap : public VtkGenericCompositePolyDataMapper2Wrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCompositePolyDataMapper2Wrap(vtkSmartPointer<vtkCompositePolyDataMapper2>);
		VtkCompositePolyDataMapper2Wrap();
		~VtkCompositePolyDataMapper2Wrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderPiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderPieceDraw(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
