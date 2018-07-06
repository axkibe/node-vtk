/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkContextAreaWrap.h"
#include "vtkInteractiveAreaWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkContext2DWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInteractiveAreaWrap::ptpl;

VtkInteractiveAreaWrap::VtkInteractiveAreaWrap()
{ }

VtkInteractiveAreaWrap::VtkInteractiveAreaWrap(vtkSmartPointer<vtkInteractiveArea> _native)
{ native = _native; }

VtkInteractiveAreaWrap::~VtkInteractiveAreaWrap()
{ }

void VtkInteractiveAreaWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInteractiveArea").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InteractiveArea").ToLocalChecked(), ConstructorGetter);
}

void VtkInteractiveAreaWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInteractiveAreaWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkContextAreaWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkContextAreaWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInteractiveAreaWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Paint", Paint);
	Nan::SetPrototypeMethod(tpl, "paint", Paint);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKINTERACTIVEAREAWRAP_INITPTPL
	VTK_NODE_PLUS_VTKINTERACTIVEAREAWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkInteractiveAreaWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkInteractiveArea> native = vtkSmartPointer<vtkInteractiveArea>::New();
		VtkInteractiveAreaWrap* obj = new VtkInteractiveAreaWrap(native);
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

void VtkInteractiveAreaWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractiveAreaWrap *wrapper = ObjectWrap::Unwrap<VtkInteractiveAreaWrap>(info.Holder());
	vtkInteractiveArea *native = (vtkInteractiveArea *)wrapper->native.GetPointer();
	vtkInteractiveArea * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkInteractiveAreaWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInteractiveAreaWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInteractiveAreaWrap *w = new VtkInteractiveAreaWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractiveAreaWrap::Paint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractiveAreaWrap *wrapper = ObjectWrap::Unwrap<VtkInteractiveAreaWrap>(info.Holder());
	vtkInteractiveArea *native = (vtkInteractiveArea *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkContext2DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkContext2DWrap *a0 = ObjectWrap::Unwrap<VtkContext2DWrap>(info[0]->ToObject());
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Paint(
			(vtkContext2D *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractiveAreaWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractiveAreaWrap *wrapper = ObjectWrap::Unwrap<VtkInteractiveAreaWrap>(info.Holder());
	vtkInteractiveArea *native = (vtkInteractiveArea *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkInteractiveArea * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkInteractiveAreaWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInteractiveAreaWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInteractiveAreaWrap *w = new VtkInteractiveAreaWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

