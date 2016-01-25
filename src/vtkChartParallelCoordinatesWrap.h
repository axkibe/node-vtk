/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCHARTPARALLELCOORDINATESWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCHARTPARALLELCOORDINATESWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkChartParallelCoordinates.h>

#include "vtkChartWrap.h"

class VtkChartParallelCoordinatesWrap : public VtkChartWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkChartParallelCoordinatesWrap(vtkSmartPointer<vtkChartParallelCoordinates>);
		VtkChartParallelCoordinatesWrap();
		~VtkChartParallelCoordinatesWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVisibleColumns(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RecalculateBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlot(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
