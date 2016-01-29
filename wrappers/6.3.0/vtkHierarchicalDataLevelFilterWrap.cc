/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkLevelIdScalarsWrap.h"
#include "vtkHierarchicalDataLevelFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHierarchicalDataLevelFilterWrap::ptpl;

VtkHierarchicalDataLevelFilterWrap::VtkHierarchicalDataLevelFilterWrap()
{ }

VtkHierarchicalDataLevelFilterWrap::VtkHierarchicalDataLevelFilterWrap(vtkSmartPointer<vtkHierarchicalDataLevelFilter> _native)
{ native = _native; }

VtkHierarchicalDataLevelFilterWrap::~VtkHierarchicalDataLevelFilterWrap()
{ }

void VtkHierarchicalDataLevelFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHierarchicalDataLevelFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HierarchicalDataLevelFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkHierarchicalDataLevelFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHierarchicalDataLevelFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkLevelIdScalarsWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkLevelIdScalarsWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHierarchicalDataLevelFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkHierarchicalDataLevelFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHierarchicalDataLevelFilter> native = vtkSmartPointer<vtkHierarchicalDataLevelFilter>::New();
		VtkHierarchicalDataLevelFilterWrap* obj = new VtkHierarchicalDataLevelFilterWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkHierarchicalDataLevelFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalDataLevelFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalDataLevelFilterWrap>(info.Holder());
	vtkHierarchicalDataLevelFilter *native = (vtkHierarchicalDataLevelFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHierarchicalDataLevelFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalDataLevelFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalDataLevelFilterWrap>(info.Holder());
	vtkHierarchicalDataLevelFilter *native = (vtkHierarchicalDataLevelFilter *)wrapper->native.GetPointer();
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

void VtkHierarchicalDataLevelFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalDataLevelFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalDataLevelFilterWrap>(info.Holder());
	vtkHierarchicalDataLevelFilter *native = (vtkHierarchicalDataLevelFilter *)wrapper->native.GetPointer();
	vtkHierarchicalDataLevelFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkHierarchicalDataLevelFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHierarchicalDataLevelFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHierarchicalDataLevelFilterWrap *w = new VtkHierarchicalDataLevelFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHierarchicalDataLevelFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalDataLevelFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalDataLevelFilterWrap>(info.Holder());
	vtkHierarchicalDataLevelFilter *native = (vtkHierarchicalDataLevelFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkHierarchicalDataLevelFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkHierarchicalDataLevelFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHierarchicalDataLevelFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHierarchicalDataLevelFilterWrap *w = new VtkHierarchicalDataLevelFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

