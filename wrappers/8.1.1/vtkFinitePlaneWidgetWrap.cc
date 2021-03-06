/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkAbstractWidgetWrap.h"
#include "vtkFinitePlaneWidgetWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkFinitePlaneRepresentationWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkFinitePlaneWidgetWrap::ptpl;

VtkFinitePlaneWidgetWrap::VtkFinitePlaneWidgetWrap()
{ }

VtkFinitePlaneWidgetWrap::VtkFinitePlaneWidgetWrap(vtkSmartPointer<vtkFinitePlaneWidget> _native)
{ native = _native; }

VtkFinitePlaneWidgetWrap::~VtkFinitePlaneWidgetWrap()
{ }

void VtkFinitePlaneWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkFinitePlaneWidget").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("FinitePlaneWidget").ToLocalChecked(), ConstructorGetter);
}

void VtkFinitePlaneWidgetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkFinitePlaneWidgetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractWidgetWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractWidgetWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkFinitePlaneWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultRepresentation", CreateDefaultRepresentation);
	Nan::SetPrototypeMethod(tpl, "createDefaultRepresentation", CreateDefaultRepresentation);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetRepresentation", SetRepresentation);
	Nan::SetPrototypeMethod(tpl, "setRepresentation", SetRepresentation);

#ifdef VTK_NODE_PLUS_VTKFINITEPLANEWIDGETWRAP_INITPTPL
	VTK_NODE_PLUS_VTKFINITEPLANEWIDGETWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkFinitePlaneWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkFinitePlaneWidget> native = vtkSmartPointer<vtkFinitePlaneWidget>::New();
		VtkFinitePlaneWidgetWrap* obj = new VtkFinitePlaneWidgetWrap(native);
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

void VtkFinitePlaneWidgetWrap::CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFinitePlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkFinitePlaneWidgetWrap>(info.Holder());
	vtkFinitePlaneWidget *native = (vtkFinitePlaneWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultRepresentation();
}

void VtkFinitePlaneWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFinitePlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkFinitePlaneWidgetWrap>(info.Holder());
	vtkFinitePlaneWidget *native = (vtkFinitePlaneWidget *)wrapper->native.GetPointer();
	vtkFinitePlaneWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkFinitePlaneWidgetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkFinitePlaneWidgetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFinitePlaneWidgetWrap *w = new VtkFinitePlaneWidgetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkFinitePlaneWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFinitePlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkFinitePlaneWidgetWrap>(info.Holder());
	vtkFinitePlaneWidget *native = (vtkFinitePlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkFinitePlaneWidget * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkFinitePlaneWidgetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkFinitePlaneWidgetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkFinitePlaneWidgetWrap *w = new VtkFinitePlaneWidgetWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFinitePlaneWidgetWrap::SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFinitePlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkFinitePlaneWidgetWrap>(info.Holder());
	vtkFinitePlaneWidget *native = (vtkFinitePlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkFinitePlaneRepresentationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkFinitePlaneRepresentationWrap *a0 = ObjectWrap::Unwrap<VtkFinitePlaneRepresentationWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRepresentation(
			(vtkFinitePlaneRepresentation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

