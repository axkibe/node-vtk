/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkContourLineInterpolatorWrap.h"
#include "vtkTerrainContourLineInterpolatorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"
#include "vtkContourRepresentationWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkProjectedTerrainPathWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkTerrainContourLineInterpolatorWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkTerrainContourLineInterpolatorWrap::ptpl;

VtkTerrainContourLineInterpolatorWrap::VtkTerrainContourLineInterpolatorWrap()
{ }

VtkTerrainContourLineInterpolatorWrap::VtkTerrainContourLineInterpolatorWrap(vtkSmartPointer<vtkTerrainContourLineInterpolator> _native)
{ native = _native; }

VtkTerrainContourLineInterpolatorWrap::~VtkTerrainContourLineInterpolatorWrap()
{ }

void VtkTerrainContourLineInterpolatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTerrainContourLineInterpolator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TerrainContourLineInterpolator").ToLocalChecked(), ConstructorGetter);
}

void VtkTerrainContourLineInterpolatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTerrainContourLineInterpolatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkContourLineInterpolatorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkContourLineInterpolatorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTerrainContourLineInterpolatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetImageData", GetImageData);
	Nan::SetPrototypeMethod(tpl, "getImageData", GetImageData);

	Nan::SetPrototypeMethod(tpl, "GetProjector", GetProjector);
	Nan::SetPrototypeMethod(tpl, "getProjector", GetProjector);

	Nan::SetPrototypeMethod(tpl, "InterpolateLine", InterpolateLine);
	Nan::SetPrototypeMethod(tpl, "interpolateLine", InterpolateLine);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetImageData", SetImageData);
	Nan::SetPrototypeMethod(tpl, "setImageData", SetImageData);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkTerrainContourLineInterpolatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTerrainContourLineInterpolator> native = vtkSmartPointer<vtkTerrainContourLineInterpolator>::New();
		VtkTerrainContourLineInterpolatorWrap* obj = new VtkTerrainContourLineInterpolatorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTerrainContourLineInterpolatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTerrainContourLineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTerrainContourLineInterpolatorWrap>(info.Holder());
	vtkTerrainContourLineInterpolator *native = (vtkTerrainContourLineInterpolator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTerrainContourLineInterpolatorWrap::GetImageData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTerrainContourLineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTerrainContourLineInterpolatorWrap>(info.Holder());
	vtkTerrainContourLineInterpolator *native = (vtkTerrainContourLineInterpolator *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImageData();
		VtkImageDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTerrainContourLineInterpolatorWrap::GetProjector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTerrainContourLineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTerrainContourLineInterpolatorWrap>(info.Holder());
	vtkTerrainContourLineInterpolator *native = (vtkTerrainContourLineInterpolator *)wrapper->native.GetPointer();
	vtkProjectedTerrainPath * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProjector();
		VtkProjectedTerrainPathWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkProjectedTerrainPathWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProjectedTerrainPathWrap *w = new VtkProjectedTerrainPathWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTerrainContourLineInterpolatorWrap::InterpolateLine(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTerrainContourLineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTerrainContourLineInterpolatorWrap>(info.Holder());
	vtkTerrainContourLineInterpolator *native = (vtkTerrainContourLineInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkContourRepresentationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkContourRepresentationWrap *a1 = ObjectWrap::Unwrap<VtkContourRepresentationWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					int r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->InterpolateLine(
						(vtkRenderer *) a0->native.GetPointer(),
						(vtkContourRepresentation *) a1->native.GetPointer(),
						info[2]->Int32Value(),
						info[3]->Int32Value()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTerrainContourLineInterpolatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTerrainContourLineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTerrainContourLineInterpolatorWrap>(info.Holder());
	vtkTerrainContourLineInterpolator *native = (vtkTerrainContourLineInterpolator *)wrapper->native.GetPointer();
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

void VtkTerrainContourLineInterpolatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTerrainContourLineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTerrainContourLineInterpolatorWrap>(info.Holder());
	vtkTerrainContourLineInterpolator *native = (vtkTerrainContourLineInterpolator *)wrapper->native.GetPointer();
	vtkTerrainContourLineInterpolator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTerrainContourLineInterpolatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTerrainContourLineInterpolatorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTerrainContourLineInterpolatorWrap *w = new VtkTerrainContourLineInterpolatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTerrainContourLineInterpolatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTerrainContourLineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTerrainContourLineInterpolatorWrap>(info.Holder());
	vtkTerrainContourLineInterpolator *native = (vtkTerrainContourLineInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTerrainContourLineInterpolator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTerrainContourLineInterpolatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkTerrainContourLineInterpolatorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTerrainContourLineInterpolatorWrap *w = new VtkTerrainContourLineInterpolatorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTerrainContourLineInterpolatorWrap::SetImageData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTerrainContourLineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTerrainContourLineInterpolatorWrap>(info.Holder());
	vtkTerrainContourLineInterpolator *native = (vtkTerrainContourLineInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetImageData(
			(vtkImageData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

