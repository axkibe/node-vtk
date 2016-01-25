/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkTableAlgorithmWrap.h"
#include "vtkMergeColumnsWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkMergeColumnsWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkMergeColumnsWrap::ptpl;

VtkMergeColumnsWrap::VtkMergeColumnsWrap()
{ }

VtkMergeColumnsWrap::VtkMergeColumnsWrap(vtkSmartPointer<vtkMergeColumns> _native)
{ native = _native; }

VtkMergeColumnsWrap::~VtkMergeColumnsWrap()
{ }

void VtkMergeColumnsWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTableAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTableAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkMergeColumnsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkMergeColumns").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("MergeColumns").ToLocalChecked(),tpl->GetFunction());
}

void VtkMergeColumnsWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMergedColumnName", GetMergedColumnName);
	Nan::SetPrototypeMethod(tpl, "getMergedColumnName", GetMergedColumnName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetMergedColumnName", SetMergedColumnName);
	Nan::SetPrototypeMethod(tpl, "setMergedColumnName", SetMergedColumnName);

}

void VtkMergeColumnsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMergeColumns> native = vtkSmartPointer<vtkMergeColumns>::New();
		VtkMergeColumnsWrap* obj = new VtkMergeColumnsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkMergeColumnsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeColumnsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeColumnsWrap>(info.Holder());
	vtkMergeColumns *native = (vtkMergeColumns *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMergeColumnsWrap::GetMergedColumnName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeColumnsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeColumnsWrap>(info.Holder());
	vtkMergeColumns *native = (vtkMergeColumns *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMergedColumnName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMergeColumnsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeColumnsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeColumnsWrap>(info.Holder());
	vtkMergeColumns *native = (vtkMergeColumns *)wrapper->native.GetPointer();
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

void VtkMergeColumnsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeColumnsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeColumnsWrap>(info.Holder());
	vtkMergeColumns *native = (vtkMergeColumns *)wrapper->native.GetPointer();
	vtkMergeColumns * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMergeColumnsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMergeColumnsWrap *w = new VtkMergeColumnsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMergeColumnsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeColumnsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeColumnsWrap>(info.Holder());
	vtkMergeColumns *native = (vtkMergeColumns *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMergeColumns * r;
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
			Nan::New<v8::Function>(VtkMergeColumnsWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMergeColumnsWrap *w = new VtkMergeColumnsWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMergeColumnsWrap::SetMergedColumnName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeColumnsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeColumnsWrap>(info.Holder());
	vtkMergeColumns *native = (vtkMergeColumns *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMergedColumnName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
