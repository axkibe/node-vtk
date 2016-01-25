/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDELIMITEDTEXTREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDELIMITEDTEXTREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDelimitedTextReader.h>

#include "vtkTableAlgorithmWrap.h"

class VtkDelimitedTextReaderWrap : public VtkTableAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkDelimitedTextReaderWrap(vtkSmartPointer<vtkDelimitedTextReader>);
		VtkDelimitedTextReaderWrap();
		~VtkDelimitedTextReaderWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DetectNumericColumnsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DetectNumericColumnsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ForceDoubleOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ForceDoubleOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GeneratePedigreeIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GeneratePedigreeIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDefaultDoubleValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDefaultIntegerValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFieldDelimiterCharacters(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputStringLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPedigreeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReadFromInputString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStringDelimiter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUTF8FieldDelimiters(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUTF8RecordDelimiters(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUTF8StringDelimiters(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUnicodeCharacterSet(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MergeConsecutiveDelimitersOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MergeConsecutiveDelimitersOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutputPedigreeIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutputPedigreeIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadFromInputStringOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadFromInputStringOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDefaultDoubleValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDefaultIntegerValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFieldDelimiterCharacters(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPedigreeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReadFromInputString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStringDelimiter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUTF8FieldDelimiters(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUTF8RecordDelimiters(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUTF8StringDelimiters(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUnicodeCharacterSet(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TrimWhitespacePriorToNumericConversionOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TrimWhitespacePriorToNumericConversionOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseStringDelimiterOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseStringDelimiterOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif