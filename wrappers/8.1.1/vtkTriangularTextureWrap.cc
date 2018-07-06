/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageAlgorithmWrap.h"
#include "vtkTriangularTextureWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTriangularTextureWrap::ptpl;

VtkTriangularTextureWrap::VtkTriangularTextureWrap()
{ }

VtkTriangularTextureWrap::VtkTriangularTextureWrap(vtkSmartPointer<vtkTriangularTexture> _native)
{ native = _native; }

VtkTriangularTextureWrap::~VtkTriangularTextureWrap()
{ }

void VtkTriangularTextureWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTriangularTexture").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TriangularTexture").ToLocalChecked(), ConstructorGetter);
}

void VtkTriangularTextureWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTriangularTextureWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTriangularTextureWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetScaleFactor", GetScaleFactor);
	Nan::SetPrototypeMethod(tpl, "getScaleFactor", GetScaleFactor);

	Nan::SetPrototypeMethod(tpl, "GetTexturePattern", GetTexturePattern);
	Nan::SetPrototypeMethod(tpl, "getTexturePattern", GetTexturePattern);

	Nan::SetPrototypeMethod(tpl, "GetTexturePatternMaxValue", GetTexturePatternMaxValue);
	Nan::SetPrototypeMethod(tpl, "getTexturePatternMaxValue", GetTexturePatternMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetTexturePatternMinValue", GetTexturePatternMinValue);
	Nan::SetPrototypeMethod(tpl, "getTexturePatternMinValue", GetTexturePatternMinValue);

	Nan::SetPrototypeMethod(tpl, "GetXSize", GetXSize);
	Nan::SetPrototypeMethod(tpl, "getXSize", GetXSize);

	Nan::SetPrototypeMethod(tpl, "GetYSize", GetYSize);
	Nan::SetPrototypeMethod(tpl, "getYSize", GetYSize);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetScaleFactor", SetScaleFactor);
	Nan::SetPrototypeMethod(tpl, "setScaleFactor", SetScaleFactor);

	Nan::SetPrototypeMethod(tpl, "SetTexturePattern", SetTexturePattern);
	Nan::SetPrototypeMethod(tpl, "setTexturePattern", SetTexturePattern);

	Nan::SetPrototypeMethod(tpl, "SetXSize", SetXSize);
	Nan::SetPrototypeMethod(tpl, "setXSize", SetXSize);

	Nan::SetPrototypeMethod(tpl, "SetYSize", SetYSize);
	Nan::SetPrototypeMethod(tpl, "setYSize", SetYSize);

#ifdef VTK_NODE_PLUS_VTKTRIANGULARTEXTUREWRAP_INITPTPL
	VTK_NODE_PLUS_VTKTRIANGULARTEXTUREWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkTriangularTextureWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTriangularTexture> native = vtkSmartPointer<vtkTriangularTexture>::New();
		VtkTriangularTextureWrap* obj = new VtkTriangularTextureWrap(native);
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

void VtkTriangularTextureWrap::GetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangularTextureWrap *wrapper = ObjectWrap::Unwrap<VtkTriangularTextureWrap>(info.Holder());
	vtkTriangularTexture *native = (vtkTriangularTexture *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScaleFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTriangularTextureWrap::GetTexturePattern(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangularTextureWrap *wrapper = ObjectWrap::Unwrap<VtkTriangularTextureWrap>(info.Holder());
	vtkTriangularTexture *native = (vtkTriangularTexture *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTexturePattern();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTriangularTextureWrap::GetTexturePatternMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangularTextureWrap *wrapper = ObjectWrap::Unwrap<VtkTriangularTextureWrap>(info.Holder());
	vtkTriangularTexture *native = (vtkTriangularTexture *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTexturePatternMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTriangularTextureWrap::GetTexturePatternMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangularTextureWrap *wrapper = ObjectWrap::Unwrap<VtkTriangularTextureWrap>(info.Holder());
	vtkTriangularTexture *native = (vtkTriangularTexture *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTexturePatternMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTriangularTextureWrap::GetXSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangularTextureWrap *wrapper = ObjectWrap::Unwrap<VtkTriangularTextureWrap>(info.Holder());
	vtkTriangularTexture *native = (vtkTriangularTexture *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTriangularTextureWrap::GetYSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangularTextureWrap *wrapper = ObjectWrap::Unwrap<VtkTriangularTextureWrap>(info.Holder());
	vtkTriangularTexture *native = (vtkTriangularTexture *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTriangularTextureWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangularTextureWrap *wrapper = ObjectWrap::Unwrap<VtkTriangularTextureWrap>(info.Holder());
	vtkTriangularTexture *native = (vtkTriangularTexture *)wrapper->native.GetPointer();
	vtkTriangularTexture * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkTriangularTextureWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTriangularTextureWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTriangularTextureWrap *w = new VtkTriangularTextureWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTriangularTextureWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangularTextureWrap *wrapper = ObjectWrap::Unwrap<VtkTriangularTextureWrap>(info.Holder());
	vtkTriangularTexture *native = (vtkTriangularTexture *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkTriangularTexture * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkTriangularTextureWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTriangularTextureWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTriangularTextureWrap *w = new VtkTriangularTextureWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTriangularTextureWrap::SetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangularTextureWrap *wrapper = ObjectWrap::Unwrap<VtkTriangularTextureWrap>(info.Holder());
	vtkTriangularTexture *native = (vtkTriangularTexture *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScaleFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTriangularTextureWrap::SetTexturePattern(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangularTextureWrap *wrapper = ObjectWrap::Unwrap<VtkTriangularTextureWrap>(info.Holder());
	vtkTriangularTexture *native = (vtkTriangularTexture *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTexturePattern(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTriangularTextureWrap::SetXSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangularTextureWrap *wrapper = ObjectWrap::Unwrap<VtkTriangularTextureWrap>(info.Holder());
	vtkTriangularTexture *native = (vtkTriangularTexture *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXSize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTriangularTextureWrap::SetYSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangularTextureWrap *wrapper = ObjectWrap::Unwrap<VtkTriangularTextureWrap>(info.Holder());
	vtkTriangularTexture *native = (vtkTriangularTexture *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYSize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

