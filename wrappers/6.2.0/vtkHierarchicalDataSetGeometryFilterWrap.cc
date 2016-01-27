/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkCompositeDataGeometryFilterWrap.h"
#include "vtkHierarchicalDataSetGeometryFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHierarchicalDataSetGeometryFilterWrap::ptpl;

VtkHierarchicalDataSetGeometryFilterWrap::VtkHierarchicalDataSetGeometryFilterWrap()
{ }

VtkHierarchicalDataSetGeometryFilterWrap::VtkHierarchicalDataSetGeometryFilterWrap(vtkSmartPointer<vtkHierarchicalDataSetGeometryFilter> _native)
{ native = _native; }

VtkHierarchicalDataSetGeometryFilterWrap::~VtkHierarchicalDataSetGeometryFilterWrap()
{ }

void VtkHierarchicalDataSetGeometryFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHierarchicalDataSetGeometryFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HierarchicalDataSetGeometryFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkHierarchicalDataSetGeometryFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHierarchicalDataSetGeometryFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCompositeDataGeometryFilterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCompositeDataGeometryFilterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHierarchicalDataSetGeometryFilterWrap").ToLocalChecked());
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

void VtkHierarchicalDataSetGeometryFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHierarchicalDataSetGeometryFilter> native = vtkSmartPointer<vtkHierarchicalDataSetGeometryFilter>::New();
		VtkHierarchicalDataSetGeometryFilterWrap* obj = new VtkHierarchicalDataSetGeometryFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkHierarchicalDataSetGeometryFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalDataSetGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalDataSetGeometryFilterWrap>(info.Holder());
	vtkHierarchicalDataSetGeometryFilter *native = (vtkHierarchicalDataSetGeometryFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHierarchicalDataSetGeometryFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalDataSetGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalDataSetGeometryFilterWrap>(info.Holder());
	vtkHierarchicalDataSetGeometryFilter *native = (vtkHierarchicalDataSetGeometryFilter *)wrapper->native.GetPointer();
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

void VtkHierarchicalDataSetGeometryFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalDataSetGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalDataSetGeometryFilterWrap>(info.Holder());
	vtkHierarchicalDataSetGeometryFilter *native = (vtkHierarchicalDataSetGeometryFilter *)wrapper->native.GetPointer();
	vtkHierarchicalDataSetGeometryFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkHierarchicalDataSetGeometryFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHierarchicalDataSetGeometryFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHierarchicalDataSetGeometryFilterWrap *w = new VtkHierarchicalDataSetGeometryFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHierarchicalDataSetGeometryFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalDataSetGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalDataSetGeometryFilterWrap>(info.Holder());
	vtkHierarchicalDataSetGeometryFilter *native = (vtkHierarchicalDataSetGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkHierarchicalDataSetGeometryFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkHierarchicalDataSetGeometryFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHierarchicalDataSetGeometryFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHierarchicalDataSetGeometryFilterWrap *w = new VtkHierarchicalDataSetGeometryFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

