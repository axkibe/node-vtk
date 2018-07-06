/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPointLocatorWrap.h"
#include "vtkNonMergingPointLocatorWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkNonMergingPointLocatorWrap::ptpl;

VtkNonMergingPointLocatorWrap::VtkNonMergingPointLocatorWrap()
{ }

VtkNonMergingPointLocatorWrap::VtkNonMergingPointLocatorWrap(vtkSmartPointer<vtkNonMergingPointLocator> _native)
{ native = _native; }

VtkNonMergingPointLocatorWrap::~VtkNonMergingPointLocatorWrap()
{ }

void VtkNonMergingPointLocatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkNonMergingPointLocator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("NonMergingPointLocator").ToLocalChecked(), ConstructorGetter);
}

void VtkNonMergingPointLocatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkNonMergingPointLocatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPointLocatorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPointLocatorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkNonMergingPointLocatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKNONMERGINGPOINTLOCATORWRAP_INITPTPL
	VTK_NODE_PLUS_VTKNONMERGINGPOINTLOCATORWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkNonMergingPointLocatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkNonMergingPointLocator> native = vtkSmartPointer<vtkNonMergingPointLocator>::New();
		VtkNonMergingPointLocatorWrap* obj = new VtkNonMergingPointLocatorWrap(native);
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

void VtkNonMergingPointLocatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNonMergingPointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkNonMergingPointLocatorWrap>(info.Holder());
	vtkNonMergingPointLocator *native = (vtkNonMergingPointLocator *)wrapper->native.GetPointer();
	vtkNonMergingPointLocator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkNonMergingPointLocatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkNonMergingPointLocatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkNonMergingPointLocatorWrap *w = new VtkNonMergingPointLocatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkNonMergingPointLocatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNonMergingPointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkNonMergingPointLocatorWrap>(info.Holder());
	vtkNonMergingPointLocator *native = (vtkNonMergingPointLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkNonMergingPointLocator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkNonMergingPointLocatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkNonMergingPointLocatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkNonMergingPointLocatorWrap *w = new VtkNonMergingPointLocatorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

