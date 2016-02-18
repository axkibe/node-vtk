/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMULTIBLOCKPLOT3DREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKMULTIBLOCKPLOT3DREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMultiBlockPLOT3DReader.h>

#include "vtkMultiBlockDataSetAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkMultiBlockPLOT3DReaderWrap : public VtkMultiBlockDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkMultiBlockPLOT3DReaderWrap(vtkSmartPointer<vtkMultiBlockPLOT3DReader>);
		VtkMultiBlockPLOT3DReaderWrap();
		~VtkMultiBlockPLOT3DReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AutoDetectFormatOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AutoDetectFormatOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BinaryFileOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BinaryFileOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CanReadBinaryFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DoublePrecisionOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DoublePrecisionOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ForceReadOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ForceReadOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutoDetectFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBinaryFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetByteOrderAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDoublePrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetForceRead(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFunctionFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGamma(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHasByteCount(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIBlanking(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMultiGrid(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetQFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetR(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarFunctionNumber(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTwoDimensionalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVectorFunctionNumber(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXYZFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasByteCountOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasByteCountOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IBlankingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IBlankingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MultiGridOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MultiGridOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllFunctions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAutoDetectFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBinaryFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetByteOrderToBigEndian(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetByteOrderToLittleEndian(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDoublePrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetForceRead(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFunctionFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGamma(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHasByteCount(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIBlanking(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMultiGrid(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetQFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetR(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarFunctionNumber(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTwoDimensionalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVectorFunctionNumber(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXYZFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TwoDimensionalGeometryOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TwoDimensionalGeometryOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKMULTIBLOCKPLOT3DREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKMULTIBLOCKPLOT3DREADERWRAP_CLASSDEF
#endif
};

#endif
