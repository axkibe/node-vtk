/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataObjectAlgorithmWrap.h"
#include "vtkNetCDFReaderWrap.h"
#include "vtkObjectWrap.h"
#include "vtkStringArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkNetCDFReaderWrap::ptpl;

VtkNetCDFReaderWrap::VtkNetCDFReaderWrap()
{ }

VtkNetCDFReaderWrap::VtkNetCDFReaderWrap(vtkSmartPointer<vtkNetCDFReader> _native)
{ native = _native; }

VtkNetCDFReaderWrap::~VtkNetCDFReaderWrap()
{ }

void VtkNetCDFReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkNetCDFReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("NetCDFReader").ToLocalChecked(), ConstructorGetter);
}

void VtkNetCDFReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkNetCDFReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataObjectAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataObjectAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkNetCDFReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetAllDimensions", GetAllDimensions);
	Nan::SetPrototypeMethod(tpl, "getAllDimensions", GetAllDimensions);

	Nan::SetPrototypeMethod(tpl, "GetAllVariableArrayNames", GetAllVariableArrayNames);
	Nan::SetPrototypeMethod(tpl, "getAllVariableArrayNames", GetAllVariableArrayNames);

	Nan::SetPrototypeMethod(tpl, "GetCalendar", GetCalendar);
	Nan::SetPrototypeMethod(tpl, "getCalendar", GetCalendar);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfVariableArrays", GetNumberOfVariableArrays);
	Nan::SetPrototypeMethod(tpl, "getNumberOfVariableArrays", GetNumberOfVariableArrays);

	Nan::SetPrototypeMethod(tpl, "GetReplaceFillValueWithNan", GetReplaceFillValueWithNan);
	Nan::SetPrototypeMethod(tpl, "getReplaceFillValueWithNan", GetReplaceFillValueWithNan);

	Nan::SetPrototypeMethod(tpl, "GetTimeUnits", GetTimeUnits);
	Nan::SetPrototypeMethod(tpl, "getTimeUnits", GetTimeUnits);

	Nan::SetPrototypeMethod(tpl, "GetVariableArrayName", GetVariableArrayName);
	Nan::SetPrototypeMethod(tpl, "getVariableArrayName", GetVariableArrayName);

	Nan::SetPrototypeMethod(tpl, "GetVariableArrayStatus", GetVariableArrayStatus);
	Nan::SetPrototypeMethod(tpl, "getVariableArrayStatus", GetVariableArrayStatus);

	Nan::SetPrototypeMethod(tpl, "GetVariableDimensions", GetVariableDimensions);
	Nan::SetPrototypeMethod(tpl, "getVariableDimensions", GetVariableDimensions);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReplaceFillValueWithNanOff", ReplaceFillValueWithNanOff);
	Nan::SetPrototypeMethod(tpl, "replaceFillValueWithNanOff", ReplaceFillValueWithNanOff);

	Nan::SetPrototypeMethod(tpl, "ReplaceFillValueWithNanOn", ReplaceFillValueWithNanOn);
	Nan::SetPrototypeMethod(tpl, "replaceFillValueWithNanOn", ReplaceFillValueWithNanOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDimensions", SetDimensions);
	Nan::SetPrototypeMethod(tpl, "setDimensions", SetDimensions);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetReplaceFillValueWithNan", SetReplaceFillValueWithNan);
	Nan::SetPrototypeMethod(tpl, "setReplaceFillValueWithNan", SetReplaceFillValueWithNan);

	Nan::SetPrototypeMethod(tpl, "SetVariableArrayStatus", SetVariableArrayStatus);
	Nan::SetPrototypeMethod(tpl, "setVariableArrayStatus", SetVariableArrayStatus);

	Nan::SetPrototypeMethod(tpl, "UpdateMetaData", UpdateMetaData);
	Nan::SetPrototypeMethod(tpl, "updateMetaData", UpdateMetaData);

	ptpl.Reset( tpl );
}

void VtkNetCDFReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkNetCDFReader> native = vtkSmartPointer<vtkNetCDFReader>::New();
		VtkNetCDFReaderWrap* obj = new VtkNetCDFReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkNetCDFReaderWrap::GetAllDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFReaderWrap>(info.Holder());
	vtkNetCDFReader *native = (vtkNetCDFReader *)wrapper->native.GetPointer();
	vtkStringArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAllDimensions();
		VtkStringArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStringArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStringArrayWrap *w = new VtkStringArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkNetCDFReaderWrap::GetAllVariableArrayNames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFReaderWrap>(info.Holder());
	vtkNetCDFReader *native = (vtkNetCDFReader *)wrapper->native.GetPointer();
	vtkStringArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAllVariableArrayNames();
		VtkStringArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStringArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStringArrayWrap *w = new VtkStringArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkNetCDFReaderWrap::GetCalendar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFReaderWrap>(info.Holder());
	vtkNetCDFReader *native = (vtkNetCDFReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCalendar();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkNetCDFReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFReaderWrap>(info.Holder());
	vtkNetCDFReader *native = (vtkNetCDFReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkNetCDFReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFReaderWrap>(info.Holder());
	vtkNetCDFReader *native = (vtkNetCDFReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkNetCDFReaderWrap::GetNumberOfVariableArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFReaderWrap>(info.Holder());
	vtkNetCDFReader *native = (vtkNetCDFReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfVariableArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkNetCDFReaderWrap::GetReplaceFillValueWithNan(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFReaderWrap>(info.Holder());
	vtkNetCDFReader *native = (vtkNetCDFReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReplaceFillValueWithNan();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkNetCDFReaderWrap::GetTimeUnits(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFReaderWrap>(info.Holder());
	vtkNetCDFReader *native = (vtkNetCDFReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTimeUnits();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkNetCDFReaderWrap::GetVariableArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFReaderWrap>(info.Holder());
	vtkNetCDFReader *native = (vtkNetCDFReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetVariableArrayName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNetCDFReaderWrap::GetVariableArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFReaderWrap>(info.Holder());
	vtkNetCDFReader *native = (vtkNetCDFReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetVariableArrayStatus(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNetCDFReaderWrap::GetVariableDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFReaderWrap>(info.Holder());
	vtkNetCDFReader *native = (vtkNetCDFReader *)wrapper->native.GetPointer();
	vtkStringArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVariableDimensions();
		VtkStringArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStringArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStringArrayWrap *w = new VtkStringArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkNetCDFReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFReaderWrap>(info.Holder());
	vtkNetCDFReader *native = (vtkNetCDFReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
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

void VtkNetCDFReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFReaderWrap>(info.Holder());
	vtkNetCDFReader *native = (vtkNetCDFReader *)wrapper->native.GetPointer();
	vtkNetCDFReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkNetCDFReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkNetCDFReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkNetCDFReaderWrap *w = new VtkNetCDFReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkNetCDFReaderWrap::ReplaceFillValueWithNanOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFReaderWrap>(info.Holder());
	vtkNetCDFReader *native = (vtkNetCDFReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReplaceFillValueWithNanOff();
}

void VtkNetCDFReaderWrap::ReplaceFillValueWithNanOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFReaderWrap>(info.Holder());
	vtkNetCDFReader *native = (vtkNetCDFReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReplaceFillValueWithNanOn();
}

void VtkNetCDFReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFReaderWrap>(info.Holder());
	vtkNetCDFReader *native = (vtkNetCDFReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkNetCDFReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkNetCDFReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkNetCDFReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkNetCDFReaderWrap *w = new VtkNetCDFReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNetCDFReaderWrap::SetDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFReaderWrap>(info.Holder());
	vtkNetCDFReader *native = (vtkNetCDFReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDimensions(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNetCDFReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFReaderWrap>(info.Holder());
	vtkNetCDFReader *native = (vtkNetCDFReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
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

void VtkNetCDFReaderWrap::SetReplaceFillValueWithNan(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFReaderWrap>(info.Holder());
	vtkNetCDFReader *native = (vtkNetCDFReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReplaceFillValueWithNan(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNetCDFReaderWrap::SetVariableArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFReaderWrap>(info.Holder());
	vtkNetCDFReader *native = (vtkNetCDFReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetVariableArrayStatus(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNetCDFReaderWrap::UpdateMetaData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFReaderWrap>(info.Holder());
	vtkNetCDFReader *native = (vtkNetCDFReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->UpdateMetaData();
	info.GetReturnValue().Set(Nan::New(r));
}
