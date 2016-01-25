/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkTableAlgorithmWrap.h"
#include "vtkDelimitedTextReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkDelimitedTextReaderWrap::constructor;

VtkDelimitedTextReaderWrap::VtkDelimitedTextReaderWrap()
{ }

VtkDelimitedTextReaderWrap::VtkDelimitedTextReaderWrap(vtkSmartPointer<vtkDelimitedTextReader> _native)
{ native = _native; }

VtkDelimitedTextReaderWrap::~VtkDelimitedTextReaderWrap()
{ }

void VtkDelimitedTextReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkDelimitedTextReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkTableAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkDelimitedTextReader").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("DelimitedTextReader").ToLocalChecked(),tpl->GetFunction());
}

void VtkDelimitedTextReaderWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "DetectNumericColumnsOff", DetectNumericColumnsOff);
	Nan::SetPrototypeMethod(tpl, "detectNumericColumnsOff", DetectNumericColumnsOff);

	Nan::SetPrototypeMethod(tpl, "DetectNumericColumnsOn", DetectNumericColumnsOn);
	Nan::SetPrototypeMethod(tpl, "detectNumericColumnsOn", DetectNumericColumnsOn);

	Nan::SetPrototypeMethod(tpl, "ForceDoubleOff", ForceDoubleOff);
	Nan::SetPrototypeMethod(tpl, "forceDoubleOff", ForceDoubleOff);

	Nan::SetPrototypeMethod(tpl, "ForceDoubleOn", ForceDoubleOn);
	Nan::SetPrototypeMethod(tpl, "forceDoubleOn", ForceDoubleOn);

	Nan::SetPrototypeMethod(tpl, "GeneratePedigreeIdsOff", GeneratePedigreeIdsOff);
	Nan::SetPrototypeMethod(tpl, "generatePedigreeIdsOff", GeneratePedigreeIdsOff);

	Nan::SetPrototypeMethod(tpl, "GeneratePedigreeIdsOn", GeneratePedigreeIdsOn);
	Nan::SetPrototypeMethod(tpl, "generatePedigreeIdsOn", GeneratePedigreeIdsOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDefaultDoubleValue", GetDefaultDoubleValue);
	Nan::SetPrototypeMethod(tpl, "getDefaultDoubleValue", GetDefaultDoubleValue);

	Nan::SetPrototypeMethod(tpl, "GetDefaultIntegerValue", GetDefaultIntegerValue);
	Nan::SetPrototypeMethod(tpl, "getDefaultIntegerValue", GetDefaultIntegerValue);

	Nan::SetPrototypeMethod(tpl, "GetFieldDelimiterCharacters", GetFieldDelimiterCharacters);
	Nan::SetPrototypeMethod(tpl, "getFieldDelimiterCharacters", GetFieldDelimiterCharacters);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetInputString", GetInputString);
	Nan::SetPrototypeMethod(tpl, "getInputString", GetInputString);

	Nan::SetPrototypeMethod(tpl, "GetInputStringLength", GetInputStringLength);
	Nan::SetPrototypeMethod(tpl, "getInputStringLength", GetInputStringLength);

	Nan::SetPrototypeMethod(tpl, "GetPedigreeIdArrayName", GetPedigreeIdArrayName);
	Nan::SetPrototypeMethod(tpl, "getPedigreeIdArrayName", GetPedigreeIdArrayName);

	Nan::SetPrototypeMethod(tpl, "GetReadFromInputString", GetReadFromInputString);
	Nan::SetPrototypeMethod(tpl, "getReadFromInputString", GetReadFromInputString);

	Nan::SetPrototypeMethod(tpl, "GetStringDelimiter", GetStringDelimiter);
	Nan::SetPrototypeMethod(tpl, "getStringDelimiter", GetStringDelimiter);

	Nan::SetPrototypeMethod(tpl, "GetUTF8FieldDelimiters", GetUTF8FieldDelimiters);
	Nan::SetPrototypeMethod(tpl, "getUTF8FieldDelimiters", GetUTF8FieldDelimiters);

	Nan::SetPrototypeMethod(tpl, "GetUTF8RecordDelimiters", GetUTF8RecordDelimiters);
	Nan::SetPrototypeMethod(tpl, "getUTF8RecordDelimiters", GetUTF8RecordDelimiters);

	Nan::SetPrototypeMethod(tpl, "GetUTF8StringDelimiters", GetUTF8StringDelimiters);
	Nan::SetPrototypeMethod(tpl, "getUTF8StringDelimiters", GetUTF8StringDelimiters);

	Nan::SetPrototypeMethod(tpl, "GetUnicodeCharacterSet", GetUnicodeCharacterSet);
	Nan::SetPrototypeMethod(tpl, "getUnicodeCharacterSet", GetUnicodeCharacterSet);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MergeConsecutiveDelimitersOff", MergeConsecutiveDelimitersOff);
	Nan::SetPrototypeMethod(tpl, "mergeConsecutiveDelimitersOff", MergeConsecutiveDelimitersOff);

	Nan::SetPrototypeMethod(tpl, "MergeConsecutiveDelimitersOn", MergeConsecutiveDelimitersOn);
	Nan::SetPrototypeMethod(tpl, "mergeConsecutiveDelimitersOn", MergeConsecutiveDelimitersOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OutputPedigreeIdsOff", OutputPedigreeIdsOff);
	Nan::SetPrototypeMethod(tpl, "outputPedigreeIdsOff", OutputPedigreeIdsOff);

	Nan::SetPrototypeMethod(tpl, "OutputPedigreeIdsOn", OutputPedigreeIdsOn);
	Nan::SetPrototypeMethod(tpl, "outputPedigreeIdsOn", OutputPedigreeIdsOn);

	Nan::SetPrototypeMethod(tpl, "ReadFromInputStringOff", ReadFromInputStringOff);
	Nan::SetPrototypeMethod(tpl, "readFromInputStringOff", ReadFromInputStringOff);

	Nan::SetPrototypeMethod(tpl, "ReadFromInputStringOn", ReadFromInputStringOn);
	Nan::SetPrototypeMethod(tpl, "readFromInputStringOn", ReadFromInputStringOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDefaultDoubleValue", SetDefaultDoubleValue);
	Nan::SetPrototypeMethod(tpl, "setDefaultDoubleValue", SetDefaultDoubleValue);

	Nan::SetPrototypeMethod(tpl, "SetDefaultIntegerValue", SetDefaultIntegerValue);
	Nan::SetPrototypeMethod(tpl, "setDefaultIntegerValue", SetDefaultIntegerValue);

	Nan::SetPrototypeMethod(tpl, "SetFieldDelimiterCharacters", SetFieldDelimiterCharacters);
	Nan::SetPrototypeMethod(tpl, "setFieldDelimiterCharacters", SetFieldDelimiterCharacters);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetInputString", SetInputString);
	Nan::SetPrototypeMethod(tpl, "setInputString", SetInputString);

	Nan::SetPrototypeMethod(tpl, "SetPedigreeIdArrayName", SetPedigreeIdArrayName);
	Nan::SetPrototypeMethod(tpl, "setPedigreeIdArrayName", SetPedigreeIdArrayName);

	Nan::SetPrototypeMethod(tpl, "SetReadFromInputString", SetReadFromInputString);
	Nan::SetPrototypeMethod(tpl, "setReadFromInputString", SetReadFromInputString);

	Nan::SetPrototypeMethod(tpl, "SetStringDelimiter", SetStringDelimiter);
	Nan::SetPrototypeMethod(tpl, "setStringDelimiter", SetStringDelimiter);

	Nan::SetPrototypeMethod(tpl, "SetUTF8FieldDelimiters", SetUTF8FieldDelimiters);
	Nan::SetPrototypeMethod(tpl, "setUTF8FieldDelimiters", SetUTF8FieldDelimiters);

	Nan::SetPrototypeMethod(tpl, "SetUTF8RecordDelimiters", SetUTF8RecordDelimiters);
	Nan::SetPrototypeMethod(tpl, "setUTF8RecordDelimiters", SetUTF8RecordDelimiters);

	Nan::SetPrototypeMethod(tpl, "SetUTF8StringDelimiters", SetUTF8StringDelimiters);
	Nan::SetPrototypeMethod(tpl, "setUTF8StringDelimiters", SetUTF8StringDelimiters);

	Nan::SetPrototypeMethod(tpl, "SetUnicodeCharacterSet", SetUnicodeCharacterSet);
	Nan::SetPrototypeMethod(tpl, "setUnicodeCharacterSet", SetUnicodeCharacterSet);

	Nan::SetPrototypeMethod(tpl, "TrimWhitespacePriorToNumericConversionOff", TrimWhitespacePriorToNumericConversionOff);
	Nan::SetPrototypeMethod(tpl, "trimWhitespacePriorToNumericConversionOff", TrimWhitespacePriorToNumericConversionOff);

	Nan::SetPrototypeMethod(tpl, "TrimWhitespacePriorToNumericConversionOn", TrimWhitespacePriorToNumericConversionOn);
	Nan::SetPrototypeMethod(tpl, "trimWhitespacePriorToNumericConversionOn", TrimWhitespacePriorToNumericConversionOn);

	Nan::SetPrototypeMethod(tpl, "UseStringDelimiterOff", UseStringDelimiterOff);
	Nan::SetPrototypeMethod(tpl, "useStringDelimiterOff", UseStringDelimiterOff);

	Nan::SetPrototypeMethod(tpl, "UseStringDelimiterOn", UseStringDelimiterOn);
	Nan::SetPrototypeMethod(tpl, "useStringDelimiterOn", UseStringDelimiterOn);

}

void VtkDelimitedTextReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDelimitedTextReader> native = vtkSmartPointer<vtkDelimitedTextReader>::New();
		VtkDelimitedTextReaderWrap* obj = new VtkDelimitedTextReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDelimitedTextReaderWrap::DetectNumericColumnsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DetectNumericColumnsOff();
}

void VtkDelimitedTextReaderWrap::DetectNumericColumnsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DetectNumericColumnsOn();
}

void VtkDelimitedTextReaderWrap::ForceDoubleOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ForceDoubleOff();
}

void VtkDelimitedTextReaderWrap::ForceDoubleOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ForceDoubleOn();
}

void VtkDelimitedTextReaderWrap::GeneratePedigreeIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GeneratePedigreeIdsOff();
}

void VtkDelimitedTextReaderWrap::GeneratePedigreeIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GeneratePedigreeIdsOn();
}

void VtkDelimitedTextReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDelimitedTextReaderWrap::GetDefaultDoubleValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDefaultDoubleValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelimitedTextReaderWrap::GetDefaultIntegerValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDefaultIntegerValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelimitedTextReaderWrap::GetFieldDelimiterCharacters(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFieldDelimiterCharacters();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDelimitedTextReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDelimitedTextReaderWrap::GetInputString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInputString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDelimitedTextReaderWrap::GetInputStringLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInputStringLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelimitedTextReaderWrap::GetPedigreeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPedigreeIdArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDelimitedTextReaderWrap::GetReadFromInputString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReadFromInputString();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelimitedTextReaderWrap::GetStringDelimiter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	char r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStringDelimiter();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelimitedTextReaderWrap::GetUTF8FieldDelimiters(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUTF8FieldDelimiters();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDelimitedTextReaderWrap::GetUTF8RecordDelimiters(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUTF8RecordDelimiters();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDelimitedTextReaderWrap::GetUTF8StringDelimiters(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUTF8StringDelimiters();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDelimitedTextReaderWrap::GetUnicodeCharacterSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUnicodeCharacterSet();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDelimitedTextReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelimitedTextReaderWrap::MergeConsecutiveDelimitersOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MergeConsecutiveDelimitersOff();
}

void VtkDelimitedTextReaderWrap::MergeConsecutiveDelimitersOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MergeConsecutiveDelimitersOn();
}

void VtkDelimitedTextReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	vtkDelimitedTextReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDelimitedTextReaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDelimitedTextReaderWrap *w = new VtkDelimitedTextReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDelimitedTextReaderWrap::OutputPedigreeIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutputPedigreeIdsOff();
}

void VtkDelimitedTextReaderWrap::OutputPedigreeIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutputPedigreeIdsOn();
}

void VtkDelimitedTextReaderWrap::ReadFromInputStringOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReadFromInputStringOff();
}

void VtkDelimitedTextReaderWrap::ReadFromInputStringOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReadFromInputStringOn();
}

void VtkDelimitedTextReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDelimitedTextReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkDelimitedTextReaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDelimitedTextReaderWrap *w = new VtkDelimitedTextReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelimitedTextReaderWrap::SetDefaultDoubleValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDefaultDoubleValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelimitedTextReaderWrap::SetDefaultIntegerValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDefaultIntegerValue(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelimitedTextReaderWrap::SetFieldDelimiterCharacters(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFieldDelimiterCharacters(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelimitedTextReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelimitedTextReaderWrap::SetInputString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetInputString(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputString(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelimitedTextReaderWrap::SetPedigreeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPedigreeIdArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelimitedTextReaderWrap::SetReadFromInputString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReadFromInputString(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelimitedTextReaderWrap::SetStringDelimiter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		char a0 = info[0]->Int32Value();
		if( a0 < -127 || a0 > 128 )
		{
			Nan::ThrowError("char value out of bounds.");
			return;
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStringDelimiter(
			a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelimitedTextReaderWrap::SetUTF8FieldDelimiters(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUTF8FieldDelimiters(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelimitedTextReaderWrap::SetUTF8RecordDelimiters(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUTF8RecordDelimiters(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelimitedTextReaderWrap::SetUTF8StringDelimiters(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUTF8StringDelimiters(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelimitedTextReaderWrap::SetUnicodeCharacterSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUnicodeCharacterSet(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelimitedTextReaderWrap::TrimWhitespacePriorToNumericConversionOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TrimWhitespacePriorToNumericConversionOff();
}

void VtkDelimitedTextReaderWrap::TrimWhitespacePriorToNumericConversionOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TrimWhitespacePriorToNumericConversionOn();
}

void VtkDelimitedTextReaderWrap::UseStringDelimiterOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseStringDelimiterOff();
}

void VtkDelimitedTextReaderWrap::UseStringDelimiterOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextReaderWrap>(info.Holder());
	vtkDelimitedTextReader *native = (vtkDelimitedTextReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseStringDelimiterOn();
}

