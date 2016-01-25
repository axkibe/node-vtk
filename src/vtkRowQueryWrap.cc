/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkRowQueryWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkRowQueryWrap::constructor;

VtkRowQueryWrap::VtkRowQueryWrap()
{ }

VtkRowQueryWrap::VtkRowQueryWrap(vtkSmartPointer<vtkRowQuery> _native)
{ native = _native; }

VtkRowQueryWrap::~VtkRowQueryWrap()
{ }

void VtkRowQueryWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkRowQueryWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkRowQuery").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("RowQuery").ToLocalChecked(),tpl->GetFunction());
}

void VtkRowQueryWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "CaseSensitiveFieldNamesOff", CaseSensitiveFieldNamesOff);
	Nan::SetPrototypeMethod(tpl, "caseSensitiveFieldNamesOff", CaseSensitiveFieldNamesOff);

	Nan::SetPrototypeMethod(tpl, "CaseSensitiveFieldNamesOn", CaseSensitiveFieldNamesOn);
	Nan::SetPrototypeMethod(tpl, "caseSensitiveFieldNamesOn", CaseSensitiveFieldNamesOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFieldIndex", GetFieldIndex);
	Nan::SetPrototypeMethod(tpl, "getFieldIndex", GetFieldIndex);

	Nan::SetPrototypeMethod(tpl, "GetFieldName", GetFieldName);
	Nan::SetPrototypeMethod(tpl, "getFieldName", GetFieldName);

	Nan::SetPrototypeMethod(tpl, "GetFieldType", GetFieldType);
	Nan::SetPrototypeMethod(tpl, "getFieldType", GetFieldType);

	Nan::SetPrototypeMethod(tpl, "GetLastErrorText", GetLastErrorText);
	Nan::SetPrototypeMethod(tpl, "getLastErrorText", GetLastErrorText);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfFields", GetNumberOfFields);
	Nan::SetPrototypeMethod(tpl, "getNumberOfFields", GetNumberOfFields);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkRowQueryWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkRowQueryWrap::CaseSensitiveFieldNamesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRowQueryWrap *wrapper = ObjectWrap::Unwrap<VtkRowQueryWrap>(info.Holder());
	vtkRowQuery *native = (vtkRowQuery *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CaseSensitiveFieldNamesOff();
}

void VtkRowQueryWrap::CaseSensitiveFieldNamesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRowQueryWrap *wrapper = ObjectWrap::Unwrap<VtkRowQueryWrap>(info.Holder());
	vtkRowQuery *native = (vtkRowQuery *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CaseSensitiveFieldNamesOn();
}

void VtkRowQueryWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRowQueryWrap *wrapper = ObjectWrap::Unwrap<VtkRowQueryWrap>(info.Holder());
	vtkRowQuery *native = (vtkRowQuery *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRowQueryWrap::GetFieldIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRowQueryWrap *wrapper = ObjectWrap::Unwrap<VtkRowQueryWrap>(info.Holder());
	vtkRowQuery *native = (vtkRowQuery *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetFieldIndex(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRowQueryWrap::GetFieldName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRowQueryWrap *wrapper = ObjectWrap::Unwrap<VtkRowQueryWrap>(info.Holder());
	vtkRowQuery *native = (vtkRowQuery *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetFieldName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRowQueryWrap::GetFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRowQueryWrap *wrapper = ObjectWrap::Unwrap<VtkRowQueryWrap>(info.Holder());
	vtkRowQuery *native = (vtkRowQuery *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetFieldType(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRowQueryWrap::GetLastErrorText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRowQueryWrap *wrapper = ObjectWrap::Unwrap<VtkRowQueryWrap>(info.Holder());
	vtkRowQuery *native = (vtkRowQuery *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLastErrorText();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRowQueryWrap::GetNumberOfFields(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRowQueryWrap *wrapper = ObjectWrap::Unwrap<VtkRowQueryWrap>(info.Holder());
	vtkRowQuery *native = (vtkRowQuery *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfFields();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRowQueryWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRowQueryWrap *wrapper = ObjectWrap::Unwrap<VtkRowQueryWrap>(info.Holder());
	vtkRowQuery *native = (vtkRowQuery *)wrapper->native.GetPointer();
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

void VtkRowQueryWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRowQueryWrap *wrapper = ObjectWrap::Unwrap<VtkRowQueryWrap>(info.Holder());
	vtkRowQuery *native = (vtkRowQuery *)wrapper->native.GetPointer();
	vtkRowQuery * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkRowQueryWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRowQueryWrap *w = new VtkRowQueryWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRowQueryWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRowQueryWrap *wrapper = ObjectWrap::Unwrap<VtkRowQueryWrap>(info.Holder());
	vtkRowQuery *native = (vtkRowQuery *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRowQuery * r;
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
			Nan::New<v8::Function>(VtkRowQueryWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRowQueryWrap *w = new VtkRowQueryWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

