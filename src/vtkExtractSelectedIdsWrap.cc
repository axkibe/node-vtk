/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkExtractSelectionBaseWrap.h"
#include "vtkExtractSelectedIdsWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkExtractSelectedIdsWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkExtractSelectedIdsWrap::ptpl;

VtkExtractSelectedIdsWrap::VtkExtractSelectedIdsWrap()
{ }

VtkExtractSelectedIdsWrap::VtkExtractSelectedIdsWrap(vtkSmartPointer<vtkExtractSelectedIds> _native)
{ native = _native; }

VtkExtractSelectedIdsWrap::~VtkExtractSelectedIdsWrap()
{ }

void VtkExtractSelectedIdsWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkExtractSelectionBaseWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkExtractSelectionBaseWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkExtractSelectedIdsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkExtractSelectedIds").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ExtractSelectedIds").ToLocalChecked(),tpl->GetFunction());
}

void VtkExtractSelectedIdsWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkExtractSelectedIdsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkExtractSelectedIds> native = vtkSmartPointer<vtkExtractSelectedIds>::New();
		VtkExtractSelectedIdsWrap* obj = new VtkExtractSelectedIdsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkExtractSelectedIdsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectedIdsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectedIdsWrap>(info.Holder());
	vtkExtractSelectedIds *native = (vtkExtractSelectedIds *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExtractSelectedIdsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectedIdsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectedIdsWrap>(info.Holder());
	vtkExtractSelectedIds *native = (vtkExtractSelectedIds *)wrapper->native.GetPointer();
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

void VtkExtractSelectedIdsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectedIdsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectedIdsWrap>(info.Holder());
	vtkExtractSelectedIds *native = (vtkExtractSelectedIds *)wrapper->native.GetPointer();
	vtkExtractSelectedIds * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkExtractSelectedIdsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtractSelectedIdsWrap *w = new VtkExtractSelectedIdsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractSelectedIdsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectedIdsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectedIdsWrap>(info.Holder());
	vtkExtractSelectedIds *native = (vtkExtractSelectedIds *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkExtractSelectedIds * r;
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
			Nan::New<v8::Function>(VtkExtractSelectedIdsWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExtractSelectedIdsWrap *w = new VtkExtractSelectedIdsWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

