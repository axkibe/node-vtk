/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPARALLELCOORDINATESHISTOGRAMREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPARALLELCOORDINATESHISTOGRAMREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkParallelCoordinatesHistogramRepresentation.h>

#include "vtkParallelCoordinatesRepresentationWrap.h"

class VtkParallelCoordinatesHistogramRepresentationWrap : public VtkParallelCoordinatesRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkParallelCoordinatesHistogramRepresentationWrap(vtkSmartPointer<vtkParallelCoordinatesHistogramRepresentation>);
		VtkParallelCoordinatesHistogramRepresentationWrap();
		~VtkParallelCoordinatesHistogramRepresentationWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ApplyViewTheme(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPreferredNumberOfOutliers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShowOutliers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseHistograms(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHistogramLookupTableRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfHistogramBins(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPreferredNumberOfOutliers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShowOutliers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseHistograms(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShowOutliersOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShowOutliersOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SwapAxisPositions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseHistogramsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseHistogramsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
