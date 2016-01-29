/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCHARTMATRIXWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCHARTMATRIXWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkChartMatrix.h>

#include "vtkAbstractContextItemWrap.h"

class VtkChartMatrixWrap : public VtkAbstractContextItemWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkChartMatrixWrap(vtkSmartPointer<vtkChartMatrix>);
		VtkChartMatrixWrap();
		~VtkChartMatrixWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Allocate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBorders(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Paint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBorders(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
