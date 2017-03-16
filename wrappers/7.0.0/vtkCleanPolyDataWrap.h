/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCLEANPOLYDATAWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCLEANPOLYDATAWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCleanPolyData.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkCleanPolyDataWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCleanPolyDataWrap(vtkSmartPointer<vtkCleanPolyData>);
		VtkCleanPolyDataWrap();
		~VtkCleanPolyDataWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ConvertLinesToPointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ConvertLinesToPointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ConvertPolysToLinesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ConvertPolysToLinesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ConvertStripsToPolysOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ConvertStripsToPolysOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAbsoluteTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAbsoluteToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAbsoluteToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetConvertLinesToPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetConvertPolysToLines(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetConvertStripsToPolys(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPieceInvariant(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointMerging(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceIsAbsolute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OperateOnBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OperateOnPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PieceInvariantOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PieceInvariantOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PointMergingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PointMergingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAbsoluteTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetConvertLinesToPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetConvertPolysToLines(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetConvertStripsToPolys(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPieceInvariant(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPointMerging(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetToleranceIsAbsolute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ToleranceIsAbsoluteOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ToleranceIsAbsoluteOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCLEANPOLYDATAWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCLEANPOLYDATAWRAP_CLASSDEF
#endif
};

#endif
