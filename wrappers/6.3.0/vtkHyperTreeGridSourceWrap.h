/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKHYPERTREEGRIDSOURCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKHYPERTREEGRIDSOURCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkHyperTreeGridSource.h>

#include "vtkHyperTreeGridAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkHyperTreeGridSourceWrap : public VtkHyperTreeGridAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkHyperTreeGridSourceWrap(vtkSmartPointer<vtkHyperTreeGridSource>);
		VtkHyperTreeGridSourceWrap();
		~VtkHyperTreeGridSourceWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetBranchFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBranchFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBranchFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDescriptor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDescriptorBits(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDimensionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDimensionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGridScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGridSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaterialMask(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaterialMaskBits(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetQuadric(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetQuadricCoefficients(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransposedRootIndexing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseDescriptor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseMaterialMask(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBranchFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDescriptor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDescriptorBits(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGridScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGridSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIndexingModeToIJK(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIndexingModeToKJI(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLevelZeroMaterialIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaterialMask(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaterialMaskBits(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetQuadric(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetQuadricCoefficients(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTransposedRootIndexing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseDescriptor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseMaterialMask(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseDescriptorOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseDescriptorOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseMaterialMaskOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseMaterialMaskOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKHYPERTREEGRIDSOURCEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKHYPERTREEGRIDSOURCEWRAP_CLASSDEF
#endif
};

#endif
