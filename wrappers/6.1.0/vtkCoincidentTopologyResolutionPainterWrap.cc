/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataPainterWrap.h"
#include "vtkCoincidentTopologyResolutionPainterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkInformationIntegerKeyWrap.h"
#include "vtkInformationDoubleKeyWrap.h"
#include "vtkInformationDoubleVectorKeyWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCoincidentTopologyResolutionPainterWrap::ptpl;

VtkCoincidentTopologyResolutionPainterWrap::VtkCoincidentTopologyResolutionPainterWrap()
{ }

VtkCoincidentTopologyResolutionPainterWrap::VtkCoincidentTopologyResolutionPainterWrap(vtkSmartPointer<vtkCoincidentTopologyResolutionPainter> _native)
{ native = _native; }

VtkCoincidentTopologyResolutionPainterWrap::~VtkCoincidentTopologyResolutionPainterWrap()
{ }

void VtkCoincidentTopologyResolutionPainterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCoincidentTopologyResolutionPainter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CoincidentTopologyResolutionPainter").ToLocalChecked(), ConstructorGetter);
}

void VtkCoincidentTopologyResolutionPainterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCoincidentTopologyResolutionPainterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataPainterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataPainterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCoincidentTopologyResolutionPainterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "POLYGON_OFFSET_FACES", POLYGON_OFFSET_FACES);

	Nan::SetPrototypeMethod(tpl, "POLYGON_OFFSET_PARAMETERS", POLYGON_OFFSET_PARAMETERS);

	Nan::SetPrototypeMethod(tpl, "RESOLVE_COINCIDENT_TOPOLOGY", RESOLVE_COINCIDENT_TOPOLOGY);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Z_SHIFT", Z_SHIFT);

	ptpl.Reset( tpl );
}

void VtkCoincidentTopologyResolutionPainterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCoincidentTopologyResolutionPainter> native = vtkSmartPointer<vtkCoincidentTopologyResolutionPainter>::New();
		VtkCoincidentTopologyResolutionPainterWrap* obj = new VtkCoincidentTopologyResolutionPainterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCoincidentTopologyResolutionPainterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoincidentTopologyResolutionPainterWrap *wrapper = ObjectWrap::Unwrap<VtkCoincidentTopologyResolutionPainterWrap>(info.Holder());
	vtkCoincidentTopologyResolutionPainter *native = (vtkCoincidentTopologyResolutionPainter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCoincidentTopologyResolutionPainterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoincidentTopologyResolutionPainterWrap *wrapper = ObjectWrap::Unwrap<VtkCoincidentTopologyResolutionPainterWrap>(info.Holder());
	vtkCoincidentTopologyResolutionPainter *native = (vtkCoincidentTopologyResolutionPainter *)wrapper->native.GetPointer();
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

void VtkCoincidentTopologyResolutionPainterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoincidentTopologyResolutionPainterWrap *wrapper = ObjectWrap::Unwrap<VtkCoincidentTopologyResolutionPainterWrap>(info.Holder());
	vtkCoincidentTopologyResolutionPainter *native = (vtkCoincidentTopologyResolutionPainter *)wrapper->native.GetPointer();
	vtkCoincidentTopologyResolutionPainter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCoincidentTopologyResolutionPainterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCoincidentTopologyResolutionPainterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCoincidentTopologyResolutionPainterWrap *w = new VtkCoincidentTopologyResolutionPainterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCoincidentTopologyResolutionPainterWrap::POLYGON_OFFSET_FACES(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoincidentTopologyResolutionPainterWrap *wrapper = ObjectWrap::Unwrap<VtkCoincidentTopologyResolutionPainterWrap>(info.Holder());
	vtkCoincidentTopologyResolutionPainter *native = (vtkCoincidentTopologyResolutionPainter *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->POLYGON_OFFSET_FACES();
		VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCoincidentTopologyResolutionPainterWrap::POLYGON_OFFSET_PARAMETERS(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoincidentTopologyResolutionPainterWrap *wrapper = ObjectWrap::Unwrap<VtkCoincidentTopologyResolutionPainterWrap>(info.Holder());
	vtkCoincidentTopologyResolutionPainter *native = (vtkCoincidentTopologyResolutionPainter *)wrapper->native.GetPointer();
	vtkInformationDoubleVectorKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->POLYGON_OFFSET_PARAMETERS();
		VtkInformationDoubleVectorKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationDoubleVectorKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationDoubleVectorKeyWrap *w = new VtkInformationDoubleVectorKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCoincidentTopologyResolutionPainterWrap::RESOLVE_COINCIDENT_TOPOLOGY(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoincidentTopologyResolutionPainterWrap *wrapper = ObjectWrap::Unwrap<VtkCoincidentTopologyResolutionPainterWrap>(info.Holder());
	vtkCoincidentTopologyResolutionPainter *native = (vtkCoincidentTopologyResolutionPainter *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->RESOLVE_COINCIDENT_TOPOLOGY();
		VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCoincidentTopologyResolutionPainterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoincidentTopologyResolutionPainterWrap *wrapper = ObjectWrap::Unwrap<VtkCoincidentTopologyResolutionPainterWrap>(info.Holder());
	vtkCoincidentTopologyResolutionPainter *native = (vtkCoincidentTopologyResolutionPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCoincidentTopologyResolutionPainter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCoincidentTopologyResolutionPainterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCoincidentTopologyResolutionPainterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCoincidentTopologyResolutionPainterWrap *w = new VtkCoincidentTopologyResolutionPainterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCoincidentTopologyResolutionPainterWrap::Z_SHIFT(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoincidentTopologyResolutionPainterWrap *wrapper = ObjectWrap::Unwrap<VtkCoincidentTopologyResolutionPainterWrap>(info.Holder());
	vtkCoincidentTopologyResolutionPainter *native = (vtkCoincidentTopologyResolutionPainter *)wrapper->native.GetPointer();
	vtkInformationDoubleKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Z_SHIFT();
		VtkInformationDoubleKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationDoubleKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationDoubleKeyWrap *w = new VtkInformationDoubleKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

