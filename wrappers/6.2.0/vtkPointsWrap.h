/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPOINTSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPOINTSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPoints.h>

#include "vtkObjectWrap.h"

class VtkPointsWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPointsWrap(vtkSmartPointer<vtkPoints>);
		VtkPointsWrap();
		~VtkPointsWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsertPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Reset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataTypeToBit(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataTypeToChar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataTypeToInt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataTypeToLong(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataTypeToShort(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataTypeToUnsignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataTypeToUnsignedInt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataTypeToUnsignedLong(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataTypeToUnsignedShort(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Squeeze(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
