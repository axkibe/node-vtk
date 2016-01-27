/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractWidgetWrap.h"
#include "vtkTensorProbeWidgetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkTensorProbeRepresentationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTensorProbeWidgetWrap::ptpl;

VtkTensorProbeWidgetWrap::VtkTensorProbeWidgetWrap()
{ }

VtkTensorProbeWidgetWrap::VtkTensorProbeWidgetWrap(vtkSmartPointer<vtkTensorProbeWidget> _native)
{ native = _native; }

VtkTensorProbeWidgetWrap::~VtkTensorProbeWidgetWrap()
{ }

void VtkTensorProbeWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTensorProbeWidget").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TensorProbeWidget").ToLocalChecked(), ConstructorGetter);
}

void VtkTensorProbeWidgetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTensorProbeWidgetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractWidgetWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractWidgetWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTensorProbeWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultRepresentation", CreateDefaultRepresentation);
	Nan::SetPrototypeMethod(tpl, "createDefaultRepresentation", CreateDefaultRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetTensorProbeRepresentation", GetTensorProbeRepresentation);
	Nan::SetPrototypeMethod(tpl, "getTensorProbeRepresentation", GetTensorProbeRepresentation);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetRepresentation", SetRepresentation);
	Nan::SetPrototypeMethod(tpl, "setRepresentation", SetRepresentation);

	ptpl.Reset( tpl );
}

void VtkTensorProbeWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTensorProbeWidget> native = vtkSmartPointer<vtkTensorProbeWidget>::New();
		VtkTensorProbeWidgetWrap* obj = new VtkTensorProbeWidgetWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTensorProbeWidgetWrap::CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTensorProbeWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkTensorProbeWidgetWrap>(info.Holder());
	vtkTensorProbeWidget *native = (vtkTensorProbeWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultRepresentation();
}

void VtkTensorProbeWidgetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTensorProbeWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkTensorProbeWidgetWrap>(info.Holder());
	vtkTensorProbeWidget *native = (vtkTensorProbeWidget *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTensorProbeWidgetWrap::GetTensorProbeRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTensorProbeWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkTensorProbeWidgetWrap>(info.Holder());
	vtkTensorProbeWidget *native = (vtkTensorProbeWidget *)wrapper->native.GetPointer();
	vtkTensorProbeRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTensorProbeRepresentation();
		VtkTensorProbeRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTensorProbeRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTensorProbeRepresentationWrap *w = new VtkTensorProbeRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTensorProbeWidgetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTensorProbeWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkTensorProbeWidgetWrap>(info.Holder());
	vtkTensorProbeWidget *native = (vtkTensorProbeWidget *)wrapper->native.GetPointer();
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

void VtkTensorProbeWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTensorProbeWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkTensorProbeWidgetWrap>(info.Holder());
	vtkTensorProbeWidget *native = (vtkTensorProbeWidget *)wrapper->native.GetPointer();
	vtkTensorProbeWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTensorProbeWidgetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTensorProbeWidgetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTensorProbeWidgetWrap *w = new VtkTensorProbeWidgetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTensorProbeWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTensorProbeWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkTensorProbeWidgetWrap>(info.Holder());
	vtkTensorProbeWidget *native = (vtkTensorProbeWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTensorProbeWidget * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTensorProbeWidgetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTensorProbeWidgetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTensorProbeWidgetWrap *w = new VtkTensorProbeWidgetWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTensorProbeWidgetWrap::SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTensorProbeWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkTensorProbeWidgetWrap>(info.Holder());
	vtkTensorProbeWidget *native = (vtkTensorProbeWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTensorProbeRepresentationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTensorProbeRepresentationWrap *a0 = ObjectWrap::Unwrap<VtkTensorProbeRepresentationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRepresentation(
			(vtkTensorProbeRepresentation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

