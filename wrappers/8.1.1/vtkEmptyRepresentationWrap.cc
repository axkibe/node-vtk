/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataRepresentationWrap.h"
#include "vtkEmptyRepresentationWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkEmptyRepresentationWrap::ptpl;

VtkEmptyRepresentationWrap::VtkEmptyRepresentationWrap()
{ }

VtkEmptyRepresentationWrap::VtkEmptyRepresentationWrap(vtkSmartPointer<vtkEmptyRepresentation> _native)
{ native = _native; }

VtkEmptyRepresentationWrap::~VtkEmptyRepresentationWrap()
{ }

void VtkEmptyRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkEmptyRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("EmptyRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkEmptyRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkEmptyRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkEmptyRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetInternalAnnotationOutputPort", GetInternalAnnotationOutputPort);
	Nan::SetPrototypeMethod(tpl, "getInternalAnnotationOutputPort", GetInternalAnnotationOutputPort);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKEMPTYREPRESENTATIONWRAP_INITPTPL
	VTK_NODE_PLUS_VTKEMPTYREPRESENTATIONWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkEmptyRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkEmptyRepresentation> native = vtkSmartPointer<vtkEmptyRepresentation>::New();
		VtkEmptyRepresentationWrap* obj = new VtkEmptyRepresentationWrap(native);
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

void VtkEmptyRepresentationWrap::GetInternalAnnotationOutputPort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEmptyRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkEmptyRepresentationWrap>(info.Holder());
	vtkEmptyRepresentation *native = (vtkEmptyRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkAlgorithmOutput * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetInternalAnnotationOutputPort(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			VtkAlgorithmOutputWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkAlgorithmOutputWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkAlgorithmOutputWrap *w = new VtkAlgorithmOutputWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
		vtkAlgorithmOutput * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetInternalAnnotationOutputPort(
			info[0]->Int32Value()
		);
		VtkAlgorithmOutputWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAlgorithmOutputWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAlgorithmOutputWrap *w = new VtkAlgorithmOutputWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	vtkAlgorithmOutput * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInternalAnnotationOutputPort();
	VtkAlgorithmOutputWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAlgorithmOutputWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAlgorithmOutputWrap *w = new VtkAlgorithmOutputWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkEmptyRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEmptyRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkEmptyRepresentationWrap>(info.Holder());
	vtkEmptyRepresentation *native = (vtkEmptyRepresentation *)wrapper->native.GetPointer();
	vtkEmptyRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkEmptyRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkEmptyRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkEmptyRepresentationWrap *w = new VtkEmptyRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkEmptyRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEmptyRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkEmptyRepresentationWrap>(info.Holder());
	vtkEmptyRepresentation *native = (vtkEmptyRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkEmptyRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkEmptyRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkEmptyRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkEmptyRepresentationWrap *w = new VtkEmptyRepresentationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

