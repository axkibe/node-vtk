/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkGraphLayoutStrategyWrap.h"
#include "vtkConeLayoutStrategyWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
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

	Nan::SetPrototypeMethod(tpl, "GetCompactness", GetCompactness);
	Nan::SetPrototypeMethod(tpl, "getCompactness", GetCompactness);

	Nan::SetPrototypeMethod(tpl, "GetCompression", GetCompression);
	Nan::SetPrototypeMethod(tpl, "getCompression", GetCompression);

	Nan::SetPrototypeMethod(tpl, "GetSpacing", GetSpacing);
	Nan::SetPrototypeMethod(tpl, "getSpacing", GetSpacing);

	Nan::SetPrototypeMethod(tpl, "Layout", Layout);
	Nan::SetPrototypeMethod(tpl, "layout", Layout);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCompactness", SetCompactness);
	Nan::SetPrototypeMethod(tpl, "setCompactness", SetCompactness);

	Nan::SetPrototypeMethod(tpl, "SetCompression", SetCompression);
	Nan::SetPrototypeMethod(tpl, "setCompression", SetCompression);

	Nan::SetPrototypeMethod(tpl, "SetSpacing", SetSpacing);
	Nan::SetPrototypeMethod(tpl, "setSpacing", SetSpacing);

#ifdef VTK_NODE_PLUS_VTKCONELAYOUTSTRATEGYWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCONELAYOUTSTRATEGYWRAP_INITPTPL
#endif
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
		VtkConeLayoutStrategyWrap* obj = new VtkConeLayoutStrategyWrap(native);
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

void VtkConeLayoutStrategyWrap::GetCompactness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConeLayoutStrategyWrap>(info.Holder());
	vtkConeLayoutStrategy *native = (vtkConeLayoutStrategy *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCompactness();
	info.GetReturnValue().Set(Nan::New(r));
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

void VtkConeLayoutStrategyWrap::GetSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConeLayoutStrategyWrap>(info.Holder());
	vtkConeLayoutStrategy *native = (vtkConeLayoutStrategy *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSpacing();
	info.GetReturnValue().Set(Nan::New(r));
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
		Nan::New<v8::FunctionTemplate>(VtkConeLayoutStrategyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkConeLayoutStrategyWrap *w = new VtkConeLayoutStrategyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkConeLayoutStrategyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConeLayoutStrategyWrap>(info.Holder());
	vtkConeLayoutStrategy *native = (vtkConeLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkConeLayoutStrategy * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkConeLayoutStrategyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkConeLayoutStrategyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkConeLayoutStrategyWrap *w = new VtkConeLayoutStrategyWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConeLayoutStrategyWrap::SetCompactness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConeLayoutStrategyWrap>(info.Holder());
	vtkConeLayoutStrategy *native = (vtkConeLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCompactness(
			info[0]->NumberValue()
		);
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

void VtkConeLayoutStrategyWrap::SetSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConeLayoutStrategyWrap>(info.Holder());
	vtkConeLayoutStrategy *native = (vtkConeLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSpacing(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
