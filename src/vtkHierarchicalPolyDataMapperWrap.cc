/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkCompositePolyDataMapperWrap.h"
#include "vtkHierarchicalPolyDataMapperWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkHierarchicalPolyDataMapperWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkHierarchicalPolyDataMapperWrap::ptpl;

VtkHierarchicalPolyDataMapperWrap::VtkHierarchicalPolyDataMapperWrap()
{ }

VtkHierarchicalPolyDataMapperWrap::VtkHierarchicalPolyDataMapperWrap(vtkSmartPointer<vtkHierarchicalPolyDataMapper> _native)
{ native = _native; }

VtkHierarchicalPolyDataMapperWrap::~VtkHierarchicalPolyDataMapperWrap()
{ }

void VtkHierarchicalPolyDataMapperWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCompositePolyDataMapperWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCompositePolyDataMapperWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkHierarchicalPolyDataMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkHierarchicalPolyDataMapper").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("HierarchicalPolyDataMapper").ToLocalChecked(),tpl->GetFunction());
}

void VtkHierarchicalPolyDataMapperWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
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

void VtkHierarchicalPolyDataMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHierarchicalPolyDataMapper> native = vtkSmartPointer<vtkHierarchicalPolyDataMapper>::New();
		VtkHierarchicalPolyDataMapperWrap* obj = new VtkHierarchicalPolyDataMapperWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkHierarchicalPolyDataMapperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalPolyDataMapperWrap>(info.Holder());
	vtkHierarchicalPolyDataMapper *native = (vtkHierarchicalPolyDataMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHierarchicalPolyDataMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalPolyDataMapperWrap>(info.Holder());
	vtkHierarchicalPolyDataMapper *native = (vtkHierarchicalPolyDataMapper *)wrapper->native.GetPointer();
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

void VtkHierarchicalPolyDataMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalPolyDataMapperWrap>(info.Holder());
	vtkHierarchicalPolyDataMapper *native = (vtkHierarchicalPolyDataMapper *)wrapper->native.GetPointer();
	vtkHierarchicalPolyDataMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkHierarchicalPolyDataMapperWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHierarchicalPolyDataMapperWrap *w = new VtkHierarchicalPolyDataMapperWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHierarchicalPolyDataMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalPolyDataMapperWrap>(info.Holder());
	vtkHierarchicalPolyDataMapper *native = (vtkHierarchicalPolyDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkHierarchicalPolyDataMapper * r;
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
			Nan::New<v8::Function>(VtkHierarchicalPolyDataMapperWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHierarchicalPolyDataMapperWrap *w = new VtkHierarchicalPolyDataMapperWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
