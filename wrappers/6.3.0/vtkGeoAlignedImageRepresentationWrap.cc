/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataRepresentationWrap.h"
#include "vtkGeoAlignedImageRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkGeoSourceWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGeoAlignedImageRepresentationWrap::ptpl;

VtkGeoAlignedImageRepresentationWrap::VtkGeoAlignedImageRepresentationWrap()
{ }

VtkGeoAlignedImageRepresentationWrap::VtkGeoAlignedImageRepresentationWrap(vtkSmartPointer<vtkGeoAlignedImageRepresentation> _native)
{ native = _native; }

VtkGeoAlignedImageRepresentationWrap::~VtkGeoAlignedImageRepresentationWrap()
{ }

void VtkGeoAlignedImageRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGeoAlignedImageRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GeoAlignedImageRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkGeoAlignedImageRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGeoAlignedImageRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGeoAlignedImageRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetSource", GetSource);
	Nan::SetPrototypeMethod(tpl, "getSource", GetSource);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SaveDatabase", SaveDatabase);
	Nan::SetPrototypeMethod(tpl, "saveDatabase", SaveDatabase);

	Nan::SetPrototypeMethod(tpl, "SetSource", SetSource);
	Nan::SetPrototypeMethod(tpl, "setSource", SetSource);

	ptpl.Reset( tpl );
}

void VtkGeoAlignedImageRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGeoAlignedImageRepresentation> native = vtkSmartPointer<vtkGeoAlignedImageRepresentation>::New();
		VtkGeoAlignedImageRepresentationWrap* obj = new VtkGeoAlignedImageRepresentationWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGeoAlignedImageRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageRepresentationWrap>(info.Holder());
	vtkGeoAlignedImageRepresentation *native = (vtkGeoAlignedImageRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGeoAlignedImageRepresentationWrap::GetSource(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageRepresentationWrap>(info.Holder());
	vtkGeoAlignedImageRepresentation *native = (vtkGeoAlignedImageRepresentation *)wrapper->native.GetPointer();
	vtkGeoSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSource();
		VtkGeoSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGeoSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoSourceWrap *w = new VtkGeoSourceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoAlignedImageRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageRepresentationWrap>(info.Holder());
	vtkGeoAlignedImageRepresentation *native = (vtkGeoAlignedImageRepresentation *)wrapper->native.GetPointer();
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

void VtkGeoAlignedImageRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageRepresentationWrap>(info.Holder());
	vtkGeoAlignedImageRepresentation *native = (vtkGeoAlignedImageRepresentation *)wrapper->native.GetPointer();
	vtkGeoAlignedImageRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGeoAlignedImageRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGeoAlignedImageRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoAlignedImageRepresentationWrap *w = new VtkGeoAlignedImageRepresentationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoAlignedImageRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageRepresentationWrap>(info.Holder());
	vtkGeoAlignedImageRepresentation *native = (vtkGeoAlignedImageRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGeoAlignedImageRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGeoAlignedImageRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGeoAlignedImageRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGeoAlignedImageRepresentationWrap *w = new VtkGeoAlignedImageRepresentationWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoAlignedImageRepresentationWrap::SaveDatabase(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageRepresentationWrap>(info.Holder());
	vtkGeoAlignedImageRepresentation *native = (vtkGeoAlignedImageRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SaveDatabase(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoAlignedImageRepresentationWrap::SetSource(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageRepresentationWrap>(info.Holder());
	vtkGeoAlignedImageRepresentation *native = (vtkGeoAlignedImageRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGeoSourceWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGeoSourceWrap *a0 = ObjectWrap::Unwrap<VtkGeoSourceWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSource(
			(vtkGeoSource *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

