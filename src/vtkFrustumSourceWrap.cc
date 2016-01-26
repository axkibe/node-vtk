/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkFrustumSourceWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPlanesWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkFrustumSourceWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkFrustumSourceWrap::ptpl;

VtkFrustumSourceWrap::VtkFrustumSourceWrap()
{ }

VtkFrustumSourceWrap::VtkFrustumSourceWrap(vtkSmartPointer<vtkFrustumSource> _native)
{ native = _native; }

VtkFrustumSourceWrap::~VtkFrustumSourceWrap()
{ }

void VtkFrustumSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkFrustumSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("FrustumSource").ToLocalChecked(), ConstructorGetter);
}

void VtkFrustumSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkFrustumSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkFrustumSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLinesLength", GetLinesLength);
	Nan::SetPrototypeMethod(tpl, "getLinesLength", GetLinesLength);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetPlanes", GetPlanes);
	Nan::SetPrototypeMethod(tpl, "getPlanes", GetPlanes);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetLinesLength", SetLinesLength);
	Nan::SetPrototypeMethod(tpl, "setLinesLength", SetLinesLength);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetPlanes", SetPlanes);
	Nan::SetPrototypeMethod(tpl, "setPlanes", SetPlanes);

	Nan::SetPrototypeMethod(tpl, "ShowLinesOff", ShowLinesOff);
	Nan::SetPrototypeMethod(tpl, "showLinesOff", ShowLinesOff);

	Nan::SetPrototypeMethod(tpl, "ShowLinesOn", ShowLinesOn);
	Nan::SetPrototypeMethod(tpl, "showLinesOn", ShowLinesOn);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkFrustumSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkFrustumSource> native = vtkSmartPointer<vtkFrustumSource>::New();
		VtkFrustumSourceWrap* obj = new VtkFrustumSourceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkFrustumSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFrustumSourceWrap *wrapper = ObjectWrap::Unwrap<VtkFrustumSourceWrap>(info.Holder());
	vtkFrustumSource *native = (vtkFrustumSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkFrustumSourceWrap::GetLinesLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFrustumSourceWrap *wrapper = ObjectWrap::Unwrap<VtkFrustumSourceWrap>(info.Holder());
	vtkFrustumSource *native = (vtkFrustumSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLinesLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFrustumSourceWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFrustumSourceWrap *wrapper = ObjectWrap::Unwrap<VtkFrustumSourceWrap>(info.Holder());
	vtkFrustumSource *native = (vtkFrustumSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFrustumSourceWrap::GetPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFrustumSourceWrap *wrapper = ObjectWrap::Unwrap<VtkFrustumSourceWrap>(info.Holder());
	vtkFrustumSource *native = (vtkFrustumSource *)wrapper->native.GetPointer();
	vtkPlanes * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPlanes();
		VtkPlanesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPlanesWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlanesWrap *w = new VtkPlanesWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkFrustumSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFrustumSourceWrap *wrapper = ObjectWrap::Unwrap<VtkFrustumSourceWrap>(info.Holder());
	vtkFrustumSource *native = (vtkFrustumSource *)wrapper->native.GetPointer();
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

void VtkFrustumSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFrustumSourceWrap *wrapper = ObjectWrap::Unwrap<VtkFrustumSourceWrap>(info.Holder());
	vtkFrustumSource *native = (vtkFrustumSource *)wrapper->native.GetPointer();
	vtkFrustumSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkFrustumSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkFrustumSourceWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFrustumSourceWrap *w = new VtkFrustumSourceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkFrustumSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFrustumSourceWrap *wrapper = ObjectWrap::Unwrap<VtkFrustumSourceWrap>(info.Holder());
	vtkFrustumSource *native = (vtkFrustumSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkFrustumSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkFrustumSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkFrustumSourceWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkFrustumSourceWrap *w = new VtkFrustumSourceWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFrustumSourceWrap::SetLinesLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFrustumSourceWrap *wrapper = ObjectWrap::Unwrap<VtkFrustumSourceWrap>(info.Holder());
	vtkFrustumSource *native = (vtkFrustumSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLinesLength(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFrustumSourceWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFrustumSourceWrap *wrapper = ObjectWrap::Unwrap<VtkFrustumSourceWrap>(info.Holder());
	vtkFrustumSource *native = (vtkFrustumSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputPointsPrecision(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFrustumSourceWrap::SetPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFrustumSourceWrap *wrapper = ObjectWrap::Unwrap<VtkFrustumSourceWrap>(info.Holder());
	vtkFrustumSource *native = (vtkFrustumSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPlanesWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPlanesWrap *a0 = ObjectWrap::Unwrap<VtkPlanesWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPlanes(
			(vtkPlanes *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFrustumSourceWrap::ShowLinesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFrustumSourceWrap *wrapper = ObjectWrap::Unwrap<VtkFrustumSourceWrap>(info.Holder());
	vtkFrustumSource *native = (vtkFrustumSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ShowLinesOff();
}

void VtkFrustumSourceWrap::ShowLinesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFrustumSourceWrap *wrapper = ObjectWrap::Unwrap<VtkFrustumSourceWrap>(info.Holder());
	vtkFrustumSource *native = (vtkFrustumSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ShowLinesOn();
}

