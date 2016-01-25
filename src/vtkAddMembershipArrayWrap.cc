/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPassInputTypeAlgorithmWrap.h"
#include "vtkAddMembershipArrayWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAbstractArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkAddMembershipArrayWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkAddMembershipArrayWrap::ptpl;

VtkAddMembershipArrayWrap::VtkAddMembershipArrayWrap()
{ }

VtkAddMembershipArrayWrap::VtkAddMembershipArrayWrap(vtkSmartPointer<vtkAddMembershipArray> _native)
{ native = _native; }

VtkAddMembershipArrayWrap::~VtkAddMembershipArrayWrap()
{ }

void VtkAddMembershipArrayWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPassInputTypeAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPassInputTypeAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkAddMembershipArrayWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkAddMembershipArray").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("AddMembershipArray").ToLocalChecked(),tpl->GetFunction());
}

void VtkAddMembershipArrayWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFieldType", GetFieldType);
	Nan::SetPrototypeMethod(tpl, "getFieldType", GetFieldType);

	Nan::SetPrototypeMethod(tpl, "GetFieldTypeMaxValue", GetFieldTypeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getFieldTypeMaxValue", GetFieldTypeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetFieldTypeMinValue", GetFieldTypeMinValue);
	Nan::SetPrototypeMethod(tpl, "getFieldTypeMinValue", GetFieldTypeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetInputArrayName", GetInputArrayName);
	Nan::SetPrototypeMethod(tpl, "getInputArrayName", GetInputArrayName);

	Nan::SetPrototypeMethod(tpl, "GetInputValues", GetInputValues);
	Nan::SetPrototypeMethod(tpl, "getInputValues", GetInputValues);

	Nan::SetPrototypeMethod(tpl, "GetOutputArrayName", GetOutputArrayName);
	Nan::SetPrototypeMethod(tpl, "getOutputArrayName", GetOutputArrayName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFieldType", SetFieldType);
	Nan::SetPrototypeMethod(tpl, "setFieldType", SetFieldType);

	Nan::SetPrototypeMethod(tpl, "SetInputArrayName", SetInputArrayName);
	Nan::SetPrototypeMethod(tpl, "setInputArrayName", SetInputArrayName);

	Nan::SetPrototypeMethod(tpl, "SetInputValues", SetInputValues);
	Nan::SetPrototypeMethod(tpl, "setInputValues", SetInputValues);

	Nan::SetPrototypeMethod(tpl, "SetOutputArrayName", SetOutputArrayName);
	Nan::SetPrototypeMethod(tpl, "setOutputArrayName", SetOutputArrayName);

}

void VtkAddMembershipArrayWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAddMembershipArray> native = vtkSmartPointer<vtkAddMembershipArray>::New();
		VtkAddMembershipArrayWrap* obj = new VtkAddMembershipArrayWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAddMembershipArrayWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAddMembershipArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAddMembershipArrayWrap>(info.Holder());
	vtkAddMembershipArray *native = (vtkAddMembershipArray *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAddMembershipArrayWrap::GetFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAddMembershipArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAddMembershipArrayWrap>(info.Holder());
	vtkAddMembershipArray *native = (vtkAddMembershipArray *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFieldType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAddMembershipArrayWrap::GetFieldTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAddMembershipArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAddMembershipArrayWrap>(info.Holder());
	vtkAddMembershipArray *native = (vtkAddMembershipArray *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFieldTypeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAddMembershipArrayWrap::GetFieldTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAddMembershipArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAddMembershipArrayWrap>(info.Holder());
	vtkAddMembershipArray *native = (vtkAddMembershipArray *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFieldTypeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAddMembershipArrayWrap::GetInputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAddMembershipArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAddMembershipArrayWrap>(info.Holder());
	vtkAddMembershipArray *native = (vtkAddMembershipArray *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInputArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAddMembershipArrayWrap::GetInputValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAddMembershipArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAddMembershipArrayWrap>(info.Holder());
	vtkAddMembershipArray *native = (vtkAddMembershipArray *)wrapper->native.GetPointer();
	vtkAbstractArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInputValues();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAbstractArrayWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractArrayWrap *w = new VtkAbstractArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAddMembershipArrayWrap::GetOutputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAddMembershipArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAddMembershipArrayWrap>(info.Holder());
	vtkAddMembershipArray *native = (vtkAddMembershipArray *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAddMembershipArrayWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAddMembershipArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAddMembershipArrayWrap>(info.Holder());
	vtkAddMembershipArray *native = (vtkAddMembershipArray *)wrapper->native.GetPointer();
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

void VtkAddMembershipArrayWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAddMembershipArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAddMembershipArrayWrap>(info.Holder());
	vtkAddMembershipArray *native = (vtkAddMembershipArray *)wrapper->native.GetPointer();
	vtkAddMembershipArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAddMembershipArrayWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAddMembershipArrayWrap *w = new VtkAddMembershipArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAddMembershipArrayWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAddMembershipArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAddMembershipArrayWrap>(info.Holder());
	vtkAddMembershipArray *native = (vtkAddMembershipArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAddMembershipArray * r;
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
			Nan::New<v8::Function>(VtkAddMembershipArrayWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAddMembershipArrayWrap *w = new VtkAddMembershipArrayWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAddMembershipArrayWrap::SetFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAddMembershipArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAddMembershipArrayWrap>(info.Holder());
	vtkAddMembershipArray *native = (vtkAddMembershipArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFieldType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAddMembershipArrayWrap::SetInputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAddMembershipArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAddMembershipArrayWrap>(info.Holder());
	vtkAddMembershipArray *native = (vtkAddMembershipArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAddMembershipArrayWrap::SetInputValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAddMembershipArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAddMembershipArrayWrap>(info.Holder());
	vtkAddMembershipArray *native = (vtkAddMembershipArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkAbstractArrayWrap *a0 = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputValues(
			(vtkAbstractArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAddMembershipArrayWrap::SetOutputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAddMembershipArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAddMembershipArrayWrap>(info.Holder());
	vtkAddMembershipArray *native = (vtkAddMembershipArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

