/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageAlgorithmWrap.h"
#include "vtkTriangularTextureWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkTriangularTextureWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkTriangularTextureWrap::ptpl;

VtkTriangularTextureWrap::VtkTriangularTextureWrap()
{ }

VtkTriangularTextureWrap::VtkTriangularTextureWrap(vtkSmartPointer<vtkTriangularTexture> _native)
{ native = _native; }

VtkTriangularTextureWrap::~VtkTriangularTextureWrap()
{ }

void VtkTriangularTextureWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkTriangularTextureWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkTriangularTexture").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("TriangularTexture").ToLocalChecked(),tpl->GetFunction());
}

void VtkTriangularTextureWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

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

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

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
		VtkTriangularTextureWrap* obj = new VtkTriangularTextureWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTriangularTextureWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangularTextureWrap *wrapper = ObjectWrap::Unwrap<VtkTriangularTextureWrap>(info.Holder());
	vtkTriangularTexture *native = (vtkTriangularTexture *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
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

void VtkTriangularTextureWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangularTextureWrap *wrapper = ObjectWrap::Unwrap<VtkTriangularTextureWrap>(info.Holder());
	vtkTriangularTexture *native = (vtkTriangularTexture *)wrapper->native.GetPointer();
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTriangularTextureWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTriangularTextureWrap *w = new VtkTriangularTextureWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTriangularTextureWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangularTextureWrap *wrapper = ObjectWrap::Unwrap<VtkTriangularTextureWrap>(info.Holder());
	vtkTriangularTexture *native = (vtkTriangularTexture *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTriangularTexture * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkTriangularTextureWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTriangularTextureWrap *w = new VtkTriangularTextureWrap();
		w->native.TakeReference(r);
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
