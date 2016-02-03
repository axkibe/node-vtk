/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKLABELPLACERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKLABELPLACERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkLabelPlacer.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkLabelPlacerWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkLabelPlacerWrap(vtkSmartPointer<vtkLabelPlacer>);
		VtkLabelPlacerWrap();
		~VtkLabelPlacerWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GeneratePerturbedLabelSpokesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GeneratePerturbedLabelSpokesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAnchorTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGeneratePerturbedLabelSpokes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGravity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIteratorType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumLabelFraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumLabelFractionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumLabelFractionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputCoordinateSystem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputCoordinateSystemMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputCoordinateSystemMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputTraversedBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPositionsAsNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseDepthBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseUnicodeStrings(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutputCoordinateSystemDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutputCoordinateSystemWorld(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutputTraversedBoundsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutputTraversedBoundsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PositionsAsNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PositionsAsNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGeneratePerturbedLabelSpokes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGravity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIteratorType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumLabelFraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputCoordinateSystem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputTraversedBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPositionsAsNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseDepthBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseUnicodeStrings(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseDepthBufferOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseDepthBufferOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseUnicodeStringsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseUnicodeStringsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
