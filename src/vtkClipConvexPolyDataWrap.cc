/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkClipConvexPolyDataWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPlaneCollectionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkClipConvexPolyDataWrap::constructor;

VtkClipConvexPolyDataWrap::VtkClipConvexPolyDataWrap()
{ }

VtkClipConvexPolyDataWrap::VtkClipConvexPolyDataWrap(vtkSmartPointer<vtkClipConvexPolyData> _native)
{ native = _native; }

VtkClipConvexPolyDataWrap::~VtkClipConvexPolyDataWrap()
{ }

void VtkClipConvexPolyDataWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkClipConvexPolyDataWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkPolyDataAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkClipConvexPolyData").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ClipConvexPolyData").ToLocalChecked(),tpl->GetFunction());
}

void VtkClipConvexPolyDataWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPlanes", GetPlanes);
	Nan::SetPrototypeMethod(tpl, "getPlanes", GetPlanes);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPlanes", SetPlanes);
	Nan::SetPrototypeMethod(tpl, "setPlanes", SetPlanes);

}

void VtkClipConvexPolyDataWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkClipConvexPolyData> native = vtkSmartPointer<vtkClipConvexPolyData>::New();
		VtkClipConvexPolyDataWrap* obj = new VtkClipConvexPolyDataWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkClipConvexPolyDataWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipConvexPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipConvexPolyDataWrap>(info.Holder());
	vtkClipConvexPolyData *native = (vtkClipConvexPolyData *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkClipConvexPolyDataWrap::GetPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipConvexPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipConvexPolyDataWrap>(info.Holder());
	vtkClipConvexPolyData *native = (vtkClipConvexPolyData *)wrapper->native.GetPointer();
	vtkPlaneCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPlanes();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPlaneCollectionWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlaneCollectionWrap *w = new VtkPlaneCollectionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkClipConvexPolyDataWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipConvexPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipConvexPolyDataWrap>(info.Holder());
	vtkClipConvexPolyData *native = (vtkClipConvexPolyData *)wrapper->native.GetPointer();
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

void VtkClipConvexPolyDataWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipConvexPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipConvexPolyDataWrap>(info.Holder());
	vtkClipConvexPolyData *native = (vtkClipConvexPolyData *)wrapper->native.GetPointer();
	vtkClipConvexPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkClipConvexPolyDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkClipConvexPolyDataWrap *w = new VtkClipConvexPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkClipConvexPolyDataWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipConvexPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipConvexPolyDataWrap>(info.Holder());
	vtkClipConvexPolyData *native = (vtkClipConvexPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkClipConvexPolyData * r;
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
			Nan::New<v8::Function>(VtkClipConvexPolyDataWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkClipConvexPolyDataWrap *w = new VtkClipConvexPolyDataWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkClipConvexPolyDataWrap::SetPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipConvexPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipConvexPolyDataWrap>(info.Holder());
	vtkClipConvexPolyData *native = (vtkClipConvexPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPlaneCollectionWrap *a0 = ObjectWrap::Unwrap<VtkPlaneCollectionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPlanes(
			(vtkPlaneCollection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

