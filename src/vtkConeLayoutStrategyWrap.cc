/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkGraphLayoutStrategyWrap.h"
#include "vtkConeLayoutStrategyWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkConeLayoutStrategyWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkConeLayoutStrategyWrap::ptpl;

VtkConeLayoutStrategyWrap::VtkConeLayoutStrategyWrap()
{ }

VtkConeLayoutStrategyWrap::VtkConeLayoutStrategyWrap(vtkSmartPointer<vtkConeLayoutStrategy> _native)
{ native = _native; }

VtkConeLayoutStrategyWrap::~VtkConeLayoutStrategyWrap()
{ }

void VtkConeLayoutStrategyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkConeLayoutStrategy").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ConeLayoutStrategy").ToLocalChecked(), ConstructorGetter);
}

void VtkConeLayoutStrategyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkConeLayoutStrategyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGraphLayoutStrategyWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGraphLayoutStrategyWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkConeLayoutStrategyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CompressionOff", CompressionOff);
	Nan::SetPrototypeMethod(tpl, "compressionOff", CompressionOff);

	Nan::SetPrototypeMethod(tpl, "CompressionOn", CompressionOn);
	Nan::SetPrototypeMethod(tpl, "compressionOn", CompressionOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCompression", GetCompression);
	Nan::SetPrototypeMethod(tpl, "getCompression", GetCompression);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "Layout", Layout);
	Nan::SetPrototypeMethod(tpl, "layout", Layout);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCompression", SetCompression);
	Nan::SetPrototypeMethod(tpl, "setCompression", SetCompression);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkConeLayoutStrategyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkConeLayoutStrategy> native = vtkSmartPointer<vtkConeLayoutStrategy>::New();
		VtkConeLayoutStrategyWrap* obj = new VtkConeLayoutStrategyWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkConeLayoutStrategyWrap::CompressionOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConeLayoutStrategyWrap>(info.Holder());
	vtkConeLayoutStrategy *native = (vtkConeLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CompressionOff();
}

void VtkConeLayoutStrategyWrap::CompressionOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConeLayoutStrategyWrap>(info.Holder());
	vtkConeLayoutStrategy *native = (vtkConeLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CompressionOn();
}

void VtkConeLayoutStrategyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConeLayoutStrategyWrap>(info.Holder());
	vtkConeLayoutStrategy *native = (vtkConeLayoutStrategy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkConeLayoutStrategyWrap::GetCompression(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConeLayoutStrategyWrap>(info.Holder());
	vtkConeLayoutStrategy *native = (vtkConeLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCompression();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConeLayoutStrategyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConeLayoutStrategyWrap>(info.Holder());
	vtkConeLayoutStrategy *native = (vtkConeLayoutStrategy *)wrapper->native.GetPointer();
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

void VtkConeLayoutStrategyWrap::Layout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConeLayoutStrategyWrap>(info.Holder());
	vtkConeLayoutStrategy *native = (vtkConeLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Layout();
}

void VtkConeLayoutStrategyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConeLayoutStrategyWrap>(info.Holder());
	vtkConeLayoutStrategy *native = (vtkConeLayoutStrategy *)wrapper->native.GetPointer();
	vtkConeLayoutStrategy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkConeLayoutStrategyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkConeLayoutStrategyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkConeLayoutStrategyWrap *w = new VtkConeLayoutStrategyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkConeLayoutStrategyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConeLayoutStrategyWrap>(info.Holder());
	vtkConeLayoutStrategy *native = (vtkConeLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkConeLayoutStrategy * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkConeLayoutStrategyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkConeLayoutStrategyWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkConeLayoutStrategyWrap *w = new VtkConeLayoutStrategyWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConeLayoutStrategyWrap::SetCompression(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConeLayoutStrategyWrap>(info.Holder());
	vtkConeLayoutStrategy *native = (vtkConeLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCompression(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

