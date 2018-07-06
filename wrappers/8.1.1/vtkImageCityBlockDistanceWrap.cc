/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageDecomposeFilterWrap.h"
#include "vtkImageCityBlockDistanceWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageCityBlockDistanceWrap::ptpl;

VtkImageCityBlockDistanceWrap::VtkImageCityBlockDistanceWrap()
{ }

VtkImageCityBlockDistanceWrap::VtkImageCityBlockDistanceWrap(vtkSmartPointer<vtkImageCityBlockDistance> _native)
{ native = _native; }

VtkImageCityBlockDistanceWrap::~VtkImageCityBlockDistanceWrap()
{ }

void VtkImageCityBlockDistanceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageCityBlockDistance").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageCityBlockDistance").ToLocalChecked(), ConstructorGetter);
}

void VtkImageCityBlockDistanceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageCityBlockDistanceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageDecomposeFilterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageDecomposeFilterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageCityBlockDistanceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKIMAGECITYBLOCKDISTANCEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKIMAGECITYBLOCKDISTANCEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkImageCityBlockDistanceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageCityBlockDistance> native = vtkSmartPointer<vtkImageCityBlockDistance>::New();
		VtkImageCityBlockDistanceWrap* obj = new VtkImageCityBlockDistanceWrap(native);
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

void VtkImageCityBlockDistanceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCityBlockDistanceWrap *wrapper = ObjectWrap::Unwrap<VtkImageCityBlockDistanceWrap>(info.Holder());
	vtkImageCityBlockDistance *native = (vtkImageCityBlockDistance *)wrapper->native.GetPointer();
	vtkImageCityBlockDistance * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkImageCityBlockDistanceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageCityBlockDistanceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageCityBlockDistanceWrap *w = new VtkImageCityBlockDistanceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageCityBlockDistanceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCityBlockDistanceWrap *wrapper = ObjectWrap::Unwrap<VtkImageCityBlockDistanceWrap>(info.Holder());
	vtkImageCityBlockDistance *native = (vtkImageCityBlockDistance *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkImageCityBlockDistance * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkImageCityBlockDistanceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageCityBlockDistanceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageCityBlockDistanceWrap *w = new VtkImageCityBlockDistanceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

